#include <stdio.h>

int main()
{
    int i,j,k=1;
    int a=2,b=2;
    int arr[5][5]={0};

    for(j=4;j>=0;j--){
        for(i=a;i>=b;i--)

             arr[i][j]=k++;

          if(j>2)
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
