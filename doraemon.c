#include <stdio.h>
int main(void){
  FILE *fp;
  fp=fopen("doraemon.csv","w");

  fprintf(fp,"番号,名前,テストの平均点\n");
  fprintf(fp,"1,野比のび太,0\n");
  fprintf(fp,"2,源静香,90\n");
  fprintf(fp,"3,剛田武,50\n");
  fprintf(fp,"4,骨川スネ夫,70\n");
  fprintf(fp,"5,出来杉,99\n");

  fclose(fp);
  return 0;
}