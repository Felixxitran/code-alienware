#include <stdlib.h>
#include <stdio.h>
  
struct item {
  int ref_count;
  int data; 
};

struct item *adder = NULL;
int number = 0;

void keep_ref(struct item *i) {
  i->ref_count++;
}
void free_ref(struct item* i) {
  i->ref_count--;
  if (i->ref_count == 0)
    free(i);
}

struct item *process(struct item *temp) {
  adder = temp;
  keep_ref(adder);
  adder->data = adder->data + 1;
  return adder;
}

struct item *make_item() {
  struct item* i = (struct item*)malloc(sizeof(struct item));
  i->ref_count = 1;
  i->data = number++;
  struct item *j = process(i);
  keep_ref(j);
  return i;
}

int main (void) {
  struct item *i1 = make_item();
  keep_ref(i1);
  struct item *i2 = make_item();
  keep_ref(i2);
  printf("i1's ref count: %d", i1->ref_count);
  //What should i1->ref_count be here?
  // ...
}
