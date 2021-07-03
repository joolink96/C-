#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int i;
    char a[100];
    int b[5]={0};

    printf("컴퓨터 \n");

    for(i=0;i<5;i++)
    { int k=rand()%3;

        printf("%d 번째 : ",i+1);
         if(k==0)
         {
             printf("가위\n");
         }

    else if(k==1)
    {
         printf("바위\n");
    }

    else if(k==2)
    {
         printf("보\n");
    }



    }



    printf("사용자\n");
     for(i=0;i<5;i++)
    {
        printf("%d 번째 : ",i+1);
        scanf(" %s",&a);
         if(a[i*2]=='가')
         {  b[i]=0;

         }
        else if(a[i*4]=='바')
        {
            b[i]=1;
        }
         else if(a[i*4]=='보')
        {
            b[i]=2;
        }


    }
   printf("%s",a);
     for(i=0;i<5;i++)
    { printf("%d",b[i]);

    }

}
