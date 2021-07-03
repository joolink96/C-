#include <stdio.h>

int main()
{
    int n;
    int i,j;
    int cnt;
    int x=0,y=0;
    int xcnt=0,ycnt=0;


    int arr[10][10]={0};


    printf("N= ? ");
    scanf("%d",&n);

    cnt=n;


        for(i=0;i<n*n;i++)
        {
            arr[x--][y++]=cnt++;



            if(x<0&&y<n)
            {
                xcnt++;
                x=xcnt;
                y=ycnt;
            }

          else if(y>=n)
          {   ycnt++;
              x=xcnt;
              y=ycnt;
          }


        }





    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            {
         printf("%3d",arr[i][j]);
    }
    printf("\n");
    }






}
