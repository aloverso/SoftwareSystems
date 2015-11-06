#include <stdio.h>
#include <stdlib.h>

#define STACK_MAX 256


// Used to identify objects' types.
typedef enum {
  OBJ_INT,
  OBJ_PAIR
} ObjectType;


// An object (can be an int or pair).
typedef struct sObject {
  ObjectType type;
  unsigned char marked;

  /* The next object in the linked list of heap allocated objects. */
  struct sObject* next;

  union {
    /* OBJ_INT */
    int value;

    /* OBJ_PAIR */
    struct {
      struct sObject* head;
      struct sObject* tail;
    };
  };
} Object;


// A virtual machine.
// Has a stack to store variables currently in scope.
typedef struct {
  Object* stack[STACK_MAX];
  int stackSize;

  /* The first object in the linked list of all objects on the heap. */
  Object* firstObject;

  /* The total number of currently allocated objects. */
  int numObjects;

  /* The number of objects required to trigger a GC. */
  int maxObjects;
} VM;


void assert(int condition, const char* message) {
  if (!condition) {
    printf("%s\n", message);
    exit(1);
  }
}


// Creates and initialzes a VM.
VM* newVM() {
  VM* vm = malloc(sizeof(VM));
  vm->stackSize = 0;
  vm->firstObject = NULL;
  vm->numObjects = 0;
  vm->maxObjects = 8;
  return vm;
}


// Pushes an object to the VM's stack.
void push(VM* vm, Object* value) {
  assert(vm->stackSize < STACK_MAX, "Stack overflow!");
  vm->stack[vm->stackSize++] = value;
}


// Pops an object from the VM's stack.
Object* pop(VM* vm) {
  assert(vm->stackSize > 0, "Stack underflow!");
  return vm->stack[--vm->stackSize];
}


// Marks an object and all its references.
void mark(Object* object) {
 
  /* FILL ME IN! */

 return 0;
}


// Marks all of the reachable objects.
void markAll(VM* vm)
{

  /* FILL ME IN! */

}


// Sweeps through the VM's list of objects
// and deletes the unmarked ones.
void sweep(VM* vm)
{

  /* FILL ME IN! */
  
}


// Does the garbage collection.
void gc(VM* vm) {
  int numObjects = vm->numObjects;

  markAll(vm);
  sweep(vm);

  vm->maxObjects = vm->numObjects * 2;

  printf("Collected %d objects, %d remaining.\n", numObjects - vm->numObjects,
         vm->numObjects);
}


// Creates a new object of specified type.
Object* newObject(VM* vm, ObjectType type) {
  if (vm->numObjects == vm->maxObjects) gc(vm);

  Object* object = malloc(sizeof(Object));
  object->type = type;
  object->next = vm->firstObject;
  vm->firstObject = object;
  object->marked = 0;

  vm->numObjects++;

  return object;
}


// Pushes an int to the stack.
void pushInt(VM* vm, int intValue) {
  Object* object = newObject(vm, OBJ_INT);
  object->value = intValue;

  push(vm, object);
}


// Pushes a pair to the stack.
Object* pushPair(VM* vm) {
  Object* object = newObject(vm, OBJ_PAIR);
  object->tail = pop(vm);
  object->head = pop(vm);

  push(vm, object);
  return object;
}


// Prints information about an object.
void objectPrint(Object* object) {
  switch (object->type) {
    case OBJ_INT:
      printf("%d", object->value);
      break;

    case OBJ_PAIR:
      printf("(");
      objectPrint(object->head);
      printf(", ");
      objectPrint(object->tail);
      printf(")");
      break;
  }
}


// Frees the VM itself.
void freeVM(VM *vm) {
  vm->stackSize = 0;
  gc(vm);
  free(vm);
}