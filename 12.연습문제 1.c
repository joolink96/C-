#include <stdio.h>

struct sungjuk
{
    int num;
    char name[20];
    int kor;
    int eng;
    int mat;
    int tot;
    double avg;



};
int main()
{

    int i;

    struct sungjuk aa[3];
    struct sungjuk *pt=aa;
    for(i=0;i<10;i++)
    {


        printf("��ȣ �Է� : ");
        scanf("%d",&(pt+i)->num);

        printf("�̸� �Է� : ");
        scanf("%s",(pt+i)->name);

        printf("���� �Է� : ");
        scanf("%d",&(pt+i)->kor);


        printf("���� �Է� : ");
        scanf("%d",&(pt+i)->eng);


        printf("���� �Է� : ");
        scanf("%d",&(pt+i)->mat);
    }

   for(i=0;i<10;i++)
   {
       (pt+i)->tot=(pt+i)->kor+(pt+i)->eng+(pt+i)->mat;
       (pt+i)->avg=(pt+i)->tot/3.0;
   }

  for(i=0;i<10;i++)
    {


        printf("��ȣ %d : \n",(pt+i)->num);


        printf("�̸� :%s\n",(pt+i)->name);

        printf("���� :%d\n",(pt+i)->kor);

        printf("���� :%d\n",(pt+i)->eng);

        printf("���� :%d\n",(pt+i)->mat);

        printf("���� :%d\n",(pt+i)->tot);

        printf("��� :%.2f\n",(pt+i)->avg);


    }


}
