#include <stdio.h>
void maxmin(int array[],int max,int min);

int main(void)
{
    int i,max,min,array[10];
    while (array[i]!=-1)
    {
      printf("%d番目の値を入力(-1入力で終了)\n",i+1);
      scanf("%d",&array[i]);
      i++;
    }
    maxmin(array,&max,&min);

    printf("最大値： %d\n",max);
    printf("最小値： %d\n",min);
    return 0;
}

void maxmin(int array[],int max,int min)
{
    int i;
    max=0;
    min=100;
	  while (array[i] != -1) {
	  	if (array[i] > max) max = array[i];
	  	if (array[i] < min) min = array[i];
	  	i++;
	  }
}


