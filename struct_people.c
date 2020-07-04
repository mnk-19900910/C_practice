#include <stdio.h>
#include <string.h>

typedef struct{
  char name[256];
  int age;
  int sex;
}People;

void InputPeople(People *data);
void ShowPeople(People data);

int main(void){
  People.data[3];
  int i;

  for(i=0;i<3;i++){
    InputPeople(&data[i]);
  }
    for(i=0;i<3;i++){
    ShowPeople(data[i]);
  }
  return 0;
}

void InputPeople(People *data){
  printf("名前は？");
  scanf("%s",data->name);
  printf("年齢は？");
  scanf("%d",&data->age);
  printf("性別は？(男->1,女->2)");
  scanf("%d",&data->sex);
  printf("\n");
}

void ShowPeople(People data){
  printf("名前：%s\n",data.name);
  printf("年齢：%d\n",data.age);
  if(data.sex==1){
    printf("性別：男\n");
  }else{
    printf("性別：女\n");
  }
}