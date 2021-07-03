#include <stdio.h>

int main()
{
    int i,j;
    int n;
    int a[4][8]={0};

       a[0][4]=1;

       do{
    printf("수를 입력하세요 : ");
    scanf("%d",&n);


    if(n==1)
    {


    for(i=1;i<4;i++){
        {for(j=1;j<8;j++)
        a[i][j]=a[i-1][j-1]+a[i-1][j+1];
    }
    printf("\n");
    }

    for(i=0;i<4;i++){
        {for(j=0;j<8;j++)
        if(a[i][j]==0)
            printf(" ");
        else
        printf("%d",a[i][j]);


        }
        printf("\n");
    }

    }

    if(n==2)
    {

         for(i=3;i>=0;i--){
        {for(j=0;j<8;j++)
        if(a[i][j]==0)
            printf(" ");
        else
        printf("%d",a[i][j]);

        }
        printf("\n");
         }
    }

     if(n==3)
     {



         for(i=0;i<4;i++){
        {for(j=0;j<8;j++)
        if(a[i][j]==0)
            printf(" ");
        else
        printf("%d",a[i][j]);

        }
        printf("\n");
         }

         for(i=2;i>=0;i--){
        {for(j=0;j<8;j++)
        if(a[i][j]==0)
            printf(" ");
        else
        printf("%d",a[i][j]);

        }
        printf("\n");
         }

     }

     if(n==4)
     {

         for(j=0;j<8;j++){
        {for(i=3;i>=0;i--)
        if(a[i][j]==0)
            printf(" ");
        else
        printf("%d",a[i][j]);

        }
        printf("\n");
         }

     }

     if(n==5)
     {

     for(j=0;j<8;j++){
        {for(i=0;i<4;i++)
        if(a[i][j]==0)
            printf(" ");
        else
        printf("%d",a[i][j]);

        }
        printf("\n");
         }



     }

     if(n==6)
     {




     }
       } while(n<7);

}
