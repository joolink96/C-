#include <stdio.h>

int main()
{

 int i,j;
 int a,b;

 printf("몇칸 띄울래 ");
 scanf("%d",&a);
 printf("총 몇일입니까?");
 scanf("%d",&b);


 printf("일 월 화 수 목 금 토\n");

 for(i=1;i<=a;i++)
    {
         printf("   ");
    }


    for(j=1;j<=b;j++)
    {

        a++;
        printf("%3d",j);

        if(a%7==0)
        {
             printf("\n");
        }

    }




}







