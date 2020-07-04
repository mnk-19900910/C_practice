#include <stdio.h>
#include <string.h>

typedef struct {
  int year;
  int group;
  int number;
  char name[64];
  double height;
  double weight;
}student;

void student_print(student *data);

int main(void){
  student data;
  data.year=3;
  data.group=4;
  data.number=23;
  strcpy(data.name,"MARIO");
  data.height=135.4;
  data.weight=54.2;

  student_print(&data);

  return 0;
}

void student_print(student *data)
{
	printf("[学年]:%d\n",data->year);
	printf("[クラス]:%d\n",data->group);
	printf("[出席番号]:%d\n",data->number);
	printf("[名前]:%s\n",data->name);
	printf("[身長]:%f\n",data->height);
	printf("[体重]:%f\n",data->weight);
	return;
}