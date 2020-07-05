#include <stdio.h>
int main(void){
  FILE *file;
  int i,j;
  file=fopen("test.txt","r");
  fscanf(file,"%d,%d",&i,&j);
  fclose(file);
  printf("iは%d\njは%d\n",i,j);
  return 0;
}