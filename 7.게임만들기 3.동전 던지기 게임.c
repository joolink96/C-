#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int n;
    int k;

    while (1)
    {


    printf("������ �������ϴ�. �ո� ? �޸� ? : ");
    scanf("%d",&n);


    if(n==1)
    {
          printf("����� :�ո� ");
    }

    else if(n==2)
    {
        printf("����� :�޸� ");

    }
    k=rand()%2;

    if(k==0)
    {
         printf("���� :�ո� ");

    }
    if(k==1)
    {
        printf("���� :�޸� ");

    }
    if(k+1==n)
    {
        printf("�¾ҽ��ϴ� !\n");

    }
    else
    {
        printf("�� ! \n");
    }

    }


}
