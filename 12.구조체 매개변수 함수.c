#include <stdio.h>

struct person
{
  char name[20];
  char part[20];
  int age;
};

int per(struct person a)
{
    printf("�̸� :%s ",a.name);
    printf("�μ� :%s ",a.part);
    printf("���� :%d ",a.age);


}

int main()
{
  struct person kk;
  printf("�̸��� �Է��ϼ��� : ");
  scanf("%s",kk.name);

  printf("�μ��� �Է��Ͻÿ� : ");
  scanf("%s",kk.part);

  printf("���̸� �Է��ϼ��� : ");
  scanf("%d",&kk.age);

  per(kk);

  return 0;





}

