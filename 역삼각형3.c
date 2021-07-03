
#include <stdio.h>

int main()


{



int a[5][5]={0};

    int i,j,k=1;

    for(i=0;i<5;i++)
     {
        for(j=0;j<5;j++)
        {


        if(i>=j)
        {
              a[j][i]=k++;
        }
       else
       {


        a[j][i]=0;
        }
     }
     }
    for(i=0;i<5;i++)
    {

        for(j=0;j<5;j++)
        {
          if(a[i][j]==0)
            printf("   ");
          else
          printf("%3d",a[i][j]);



        }
          printf("\n");

    }



}


