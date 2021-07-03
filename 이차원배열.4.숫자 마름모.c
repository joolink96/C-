
#include <stdio.h>

int main()
{


    int i,j;
    int n,m;

    printf("n과 m을 입력하시오 : ");
    scanf("%d %d",&n,&m);

    int arr[n][n*2];

    int a=n-1;
    int b=n-1;

    for(j=3;j<7;j++)
       for(i=0;i<4;i++)
       {
          a[i][j]=m--;
       }

}

