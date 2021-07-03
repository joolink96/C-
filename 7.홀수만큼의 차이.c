#include <stdio.h>

int main()
{




int a[5][5]={0};

    int i,j,k=1;

    for(i=0;i<5;i++)
     {
        for(j=0;j<5;j++)
        {


        if(j>=i)
        {
              a[i][j]=(k*k);
              k++;
        }
       else
        a[i][j]=0;
        }
     }

    for(i=0;i<5;i++)
    {

        for(j=0;j<5;j++)
        {
          if(a[i][j]==0)
            printf("    ");
          else
          printf("%4d",a[i][j]);



        }
          printf("\n");

    }



}

