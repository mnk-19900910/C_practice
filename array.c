#include <stdio.h>
#include <memory.h>

int main(void)
{
    int array1[] = {5,2,7,1,9};
    int array2[] = {1,2,3,4,5,6};
    int flag[] = {};
    
    int i;
    int array2_count = sizeof(array2)/sizeof(array2[0]);
    for (i=0;i<array2_count;i++)
    {
        if(i==0){
          printf("変更前\n");
        }
        printf("%d回目： %d\n",i+1,array2[i]);
    }

    for (i=0;i<array2_count;i++)
    {
        if(array1[i]!=array2[i]){
          flag[i]=1; //変更あり
        }
        else{
          flag[i]=0; //変更なし
        }
    }

	  memcpy(array2,array1,sizeof(array1));

    printf("\n");

    for (i=0;i<array2_count;i++)
    {
        if(i==0){
          printf("変更後\n");
        }

        if(flag[i]==0){
          printf("%d回目： %d\n",i+1,array2[i]);
        }
        else{
          printf("%d回目： %d 変更あり\n",i+1,array2[i]);
        }
    }
    return 0;
}

