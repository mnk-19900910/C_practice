#include <stdio.h>
#define TAX 0.08
#define IN_TAX 0.1
int main(void){
  int price,i;
  printf("価格は？\n");
  scanf("%d",&price);
  printf("店内->1 持ち帰り->2\n");
  scanf("%d",&i);
  if(i==1){
    price=(1+IN_TAX)*price;
  }else{
    price=(1+TAX)*price;
  }
  printf("税込価格は%d円です\n",price);
  return 0;
}