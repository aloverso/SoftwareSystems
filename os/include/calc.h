#ifndef GPIO_H
#define GPIO_H
#include "gpio.h"
#endif

#ifndef STRUTIL_H
#define STRUTIL_H
#include "strutil.h"
#endif

int convert_to_int (unsigned char instr[]);

void convert_to_str(int int_in, unsigned char res[]);

int do_math(unsigned char instr[], int array_size);

int calc_init();