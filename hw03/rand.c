/*

    Copyright 2007 Allen B. Downey

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    The GNU General Public License is available from
    http://www.gnu.org/licenses/.

*/

#include <stdint.h>
#include <stdio.h>

// generate a random float using the algorithm described
// at allendowney.com/research/rand
float my_random_float()
{
  int x, exp, mant;
  float f;

  // this union is for assembling the float.
  union {
    float f;
    int i;
  } b;

  // generate 31 random bits (assuming that RAND_MAX is 2^31 - 1
  x = random();

  // use bit-sca-forward to find the first set bit and
  // compute the exponent
  asm ("bsfl %1, %0"
       :"=r"(exp)
       :"r"(x)
      );
  exp = 126 - exp;

  // use the other 23 bits for the mantissa (for small numbers
  // this means we are re-using some bits)
  mant = x >> 8;
  b.i = (exp << 23) | mant;

  return b.f;
}

// alternative implementation of my algorithm that doesn't use
// embedded assembly
float my_random_float2()
{
  int x;
  int mant;
  int exp = 126;
  int mask = 1;

  union {
    float f;
    int i;
  } b;

  // generate random bits until we see the first set bit
  while (1) {
    x = random();
    printf("%d\n", x);
    if (x == 0) {
      exp -= 31;
    } else {
      break;
    }
  }


  // find the location of the first set bit and compute the exponent
  while (x & mask) {
    mask <<= 1;
    exp--;
  }

  long a = x;
  while (a) {
    if (a & 1)
        printf("1");
    else
        printf("0");

    a >>= 1;
  }
  printf("that was x\n");

  long c = exp;
  while (c) {
    if (c & 1)
        printf("1");
    else
        printf("0");

    c >>= 1;
  }
  printf("that was exp\n");

  // use the remaining bit as the mantissa
  mant = x >> 8;

  long m = mant;
  while (m) {
    if (m & 1)
        printf("1");
    else
        printf("0");

    m >>= 1;
  }
  printf("that was mant\n");
  b.i = (exp << 23) | mant;

  long n = b.i;
  while (n) {
    if (n & 1)
        printf("1");
    else
        printf("0");

    n >>= 1;
  }
  printf("\n");

  return b.f;
}

// compute a random double using my algorithm
double my_random_double()
{
  int x, exp, mant;
  double d;

  // this union is for assembling the double.
  union {
    double d;
    int i;
  } b;

  // generate 31 random bits (assuming that RAND_MAX is 2^31 - 1
  x = random();

  // use bit-sca-forward to find the first set bit and
  // compute the exponent
  asm ("bsfl %1, %0"
       :"=r"(exp)
       :"r"(x)
      );
  exp = 1022 - exp;

  // use the other 23 bits for the mantissa (for small numbers
  // this means we are re-using some bits)
  mant = x >> 8;
  b.i = (exp << 23) | mant;

  return b.d;
}

void print_binary (uint64_t long_num)
{
  long a = long_num;
  while (a) {
    if (a & 1)
        printf("1");
    else
        printf("0");

    a >>= 1;
  }
  printf("\n");
}

// alternative implementation of my algorithm that doesn't use
// embedded assembly
double my_random_double2()
{
  uint64_t x;
  uint64_t y;
  uint64_t z;
  uint64_t mant;
  uint64_t exp = 1023;
  uint64_t mask = 1;

  union {
    double d;
    uint64_t i;
  } b;

  // generate random bits until we see the first set bit
  while (1) {
    x = (uint64_t) random();
    y = (uint64_t) random();
    z = y << 32 | x;
    if (x == 0 || y == 0) {
      exp -= 63;
    } else {
      break;
    }
  }
 
  // find the location of the first set bit asnd compute the exponent
  while (z & mask) {
    mask <<= 1;
    exp--;
  }

  // use the remaining bit as the mantissa
  mant = z >> 11;

  b.i = (exp << 52) | mant;

  return b.d / 2.0;
}

// return a constant (this is a dummy function for time trials)
float dummy()
{
  float f = 0.5;

  return f;
}

// generate a random integer and convert to float (dummy function)
float dummy2()
{
  int x;
  float f;

  x = random();
  f = (float) x;

  return f;
}

// generate a random float using the standard algorithm
float random_float()
{
  int x;
  float f;

  x = random();
  f = (float) x / (float)RAND_MAX;

  return f;
}


// generate a random double using the standard algorithm
float random_double()
{
  int x;
  double f;

  x = random();
  f = (double) x / (double)RAND_MAX;

  return f;
}


