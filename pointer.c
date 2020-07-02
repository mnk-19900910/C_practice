#include <stdio.h>
void func(int *p);

int main(void)
{
    int value=10;
    printf("&value= %p\n",&value);
    func(&value);
    printf("value=%d\n",value);
    return 0;
}

void func(int *p){
  printf("&value= %p\n",p);
  *p=123;
  return;
}

