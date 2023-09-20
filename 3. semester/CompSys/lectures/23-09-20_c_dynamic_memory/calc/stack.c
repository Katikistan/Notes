#include <stdlib.h>
#include <assert.h>
#include "stack.h"


struct node {
  void *data;
  struct node *next;
};

struct stack {
  struct node *top;
};

struct stack* stack_new(void) {
  struct stack *stack = malloc(sizeof(struct stack));
  stack -> top = NULL;
  return stack;
}

void stack_free(struct stack* stack) {
  free(stack);
}

int stack_empty(struct stack* stack) {
  assert(stack != NULL);
  return stack -> top == NULL;
}

void* stack_top(struct stack* stack) {
  return stack -> top -> data; 
}

void* stack_pop(struct stack* stack) {
  assert(stack != NULL);
  struct node *old_top = stack -> top;
  if (old_top == NULL){
    return NULL; 
  }
  struct node *new_top = old_top -> next;
  stack -> top = new_top;
  void *data = old_top -> data;
  free(old_top);
  return data;
}

int stack_push(struct stack* stack, void* data) {
  assert(stack != NULL);
  struct node *new = malloc(sizeof(struct node));
  new -> data = data; 
  struct node *old_top = stack -> top;
  stack -> top = new;
  stack -> top -> next = old_top;
}
