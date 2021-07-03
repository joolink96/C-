#include <stdio.h>

int main()
{
    int i,j,k=1;
    int a=0,b=4;
    int arr[5][5]={0};

    for(i=0;i<5;i++){
        for(j=a;j<=b;j++)

             arr[i][j]=k++;

          if(i<2)
          {
              a++;
              b--;
          }
          else{
              a--;
              b++;

          }
    }

    for(i=0;i<5;i++){

        {for(j=0;j<5;j++)


          if(arr[i][j]==0)
          {
              printf("   ");
          }
          else
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
}
