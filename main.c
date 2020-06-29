#include <stdio.h>
int main(void)
{
    int a, count;
    printf("回数入力");
    scanf("%d",&count);
    for ( a = 0; a < count; a++)
    {
        printf("%d回目\n",a+1);
    }
    
    return 0;
}