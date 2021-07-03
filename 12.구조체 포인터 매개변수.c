#include <stdio.h>

struct person
{
  char name[20];
  char part[20];
  int age;
};

int per(struct person *a)
{
  int i;
  for(i=0;i<3;i++)
  {


  printf("이름 : %s \n",a->name);
  printf("부서 : %s \n",a->part);
  printf("나이 : %d \n",a->age);

   a++;
  }

}

int main()
{
  struct person kk[3];
  int i;
  for(i=0;i<3;i++)
  {


  printf("이름을 입력하세요 : ");
  scanf("%s",kk[i].name);

  printf("부서를 입력하시오 : ");
  scanf("%s",kk[i].part);

  printf("나이를 입력하세요 : ");
  scanf("%d",&kk[i].age);

  }
  per(kk);

  return 0;





}
