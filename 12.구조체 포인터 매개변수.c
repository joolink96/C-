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


  printf("�̸� : %s \n",a->name);
  printf("�μ� : %s \n",a->part);
  printf("���� : %d \n",a->age);

   a++;
  }

}

int main()
{
  struct person kk[3];
  int i;
  for(i=0;i<3;i++)
  {


  printf("�̸��� �Է��ϼ��� : ");
  scanf("%s",kk[i].name);

  printf("�μ��� �Է��Ͻÿ� : ");
  scanf("%s",kk[i].part);

  printf("���̸� �Է��ϼ��� : ");
  scanf("%d",&kk[i].age);

  }
  per(kk);

  return 0;





}
