#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int i;
    char a[100];
    int b[5]={0};

    printf("��ǻ�� \n");

    for(i=0;i<5;i++)
    { int k=rand()%3;

        printf("%d ��° : ",i+1);
         if(k==0)
         {
             printf("����\n");
         }

    else if(k==1)
    {
         printf("����\n");
    }

    else if(k==2)
    {
         printf("��\n");
    }



    }



    printf("�����\n");
     for(i=0;i<5;i++)
    {
        printf("%d ��° : ",i+1);
        scanf(" %s",&a);
         if(a[i*2]=='��')
         {  b[i]=0;

         }
        else if(a[i*4]=='��')
        {
            b[i]=1;
        }
         else if(a[i*4]=='��')
        {
            b[i]=2;
        }


    }
   printf("%s",a);
     for(i=0;i<5;i++)
    { printf("%d",b[i]);

    }

}
