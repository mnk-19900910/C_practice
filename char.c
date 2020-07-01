#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("**************************\n");

    char r1[256],r2[256];

    printf("１文字目の入力\n");
    scanf("%s",r1);
    printf("２文字目の入力\n");
    scanf("%s",r2);

    if(strcmp(r1,r2)==0){
      printf("同じ\n");
    }else{
      printf("違う\n");
    }
    
    return 0;
}

