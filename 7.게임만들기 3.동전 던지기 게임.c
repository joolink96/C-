#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int n;
    int k;

    while (1)
    {


    printf("동전을 던졌습니다. 앞면 ? 뒷면 ? : ");
    scanf("%d",&n);


    if(n==1)
    {
          printf("사용자 :앞면 ");
    }

    else if(n==2)
    {
        printf("사용자 :뒷면 ");

    }
    k=rand()%2;

    if(k==0)
    {
         printf("동전 :앞면 ");

    }
    if(k==1)
    {
        printf("동전 :뒷면 ");

    }
    if(k+1==n)
    {
        printf("맞았습니다 !\n");

    }
    else
    {
        printf("꽝 ! \n");
    }

    }


}
