#include <stdio.h>

int main()
{

 int i,j;
 int a,b;

 printf("��ĭ ��﷡ ");
 scanf("%d",&a);
 printf("�� �����Դϱ�?");
 scanf("%d",&b);


 printf("�� �� ȭ �� �� �� ��\n");

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







