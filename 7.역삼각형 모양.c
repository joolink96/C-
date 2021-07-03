#include <stdio.h>

int main()
{
    int i,j,k=0;
    int a[5][5]={0};

    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
          a[i][j]=j+1;

    }

    for(i=0;i<5;i++){

        {for(j=0;j<5;j++)
           if(j>=i)
            printf("%2d",a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }










}
