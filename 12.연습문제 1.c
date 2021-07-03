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


        printf("번호 입력 : ");
        scanf("%d",&(pt+i)->num);

        printf("이름 입력 : ");
        scanf("%s",(pt+i)->name);

        printf("국어 입력 : ");
        scanf("%d",&(pt+i)->kor);


        printf("영어 입력 : ");
        scanf("%d",&(pt+i)->eng);


        printf("수학 입력 : ");
        scanf("%d",&(pt+i)->mat);
    }

   for(i=0;i<10;i++)
   {
       (pt+i)->tot=(pt+i)->kor+(pt+i)->eng+(pt+i)->mat;
       (pt+i)->avg=(pt+i)->tot/3.0;
   }

  for(i=0;i<10;i++)
    {


        printf("번호 %d : \n",(pt+i)->num);


        printf("이름 :%s\n",(pt+i)->name);

        printf("국어 :%d\n",(pt+i)->kor);

        printf("영어 :%d\n",(pt+i)->eng);

        printf("수학 :%d\n",(pt+i)->mat);

        printf("총점 :%d\n",(pt+i)->tot);

        printf("평균 :%.2f\n",(pt+i)->avg);


    }


}
