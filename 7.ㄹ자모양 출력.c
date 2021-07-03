
#include <stdio.h>

int main()

{



int a[5][5]={0};

    int i,j,k=1;
    int t=0;
    int x=0,y=0;
  for(i=1;i<=25;i++)
  {

    a[x][y]=i;
printf("%d %d %d\n",x,y,t);
    if(i%5==0){
        x++;
        t=1-to;
    }
    else if(t==0)
    {
         y++;
    }

    else if(t==1)
    {
         y--;
    }

  }



    for(i=0;i<5;i++)
    {

        for(j=0;j<5;j++)
        {

          printf("%3d",a[i][j]);



        }
          printf("\n");

    }



}
