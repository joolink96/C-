#include <stdio.h>

struct person
{
  char name[20];
  char part[20];
  int age;
};

int per(struct person a)
{
    printf("이름 :%s ",a.name);
    printf("부서 :%s ",a.part);
    printf("나이 :%d ",a.age);


}

int main()
{
  struct person kk;
  printf("이름을 입력하세요 : ");
  scanf("%s",kk.name);

  printf("부서를 입력하시오 : ");
  scanf("%s",kk.part);

  printf("나이를 입력하세요 : ");
  scanf("%d",&kk.age);

  per(kk);

  return 0;





}

