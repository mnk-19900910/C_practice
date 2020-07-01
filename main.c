#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[]="1234";
    int kazu = atoi(str);
    printf("%d\n",kazu);

    char a[10];
    strcpy(a,"MAC");
    printf("%s\n",a);

    printf("**************************\n");

    char s[16],t[10];
    int u;

    printf("文字列\n");
    scanf("%s",s);

    int h;
    h=strlen(s);
    printf("%d\n",h);


    printf("%sを何文字カット？\n",s);
    scanf("%d",&u);

    strncpy(t,s,u);
    t[u]='\0';
    printf("%s\n",t);

    printf("**************************\n");

    char e[32]="fake",f[]="star";
    strcat(e,f);
    printf("%s\n",e);

    printf("**************************\n");
    char l[20];
    sprintf(l,"%s%s%d\n",e,t,u);
    printf("%s",l);

    printf("**************************\n");

    return 0;
}

