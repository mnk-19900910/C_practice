#include <stdio.h>
int main(void)
{
    int array1[] = {5,2,7,1,9,10};
    int array2[] = {15,12,17,11,19,110};
    int i;
    int array2_count = sizeof(array2)/sizeof(array2[0]);
    for (i=0;i<array2_count;i++)
    {
        printf("%d回目： %d\n",i+1,array2[i]);
    }
    for (i=0;i<array2_count;i++)
    {
        array2[i] = array1[i];
    }
    printf("\n");
    for (i=0;i<array2_count;i++)
    {
        printf("%d回目： %d\n",i+1,array2[i]);
    }
    return 0;
}

