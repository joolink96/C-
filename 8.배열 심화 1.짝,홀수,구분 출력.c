#include <stdio.h>

int main()
{
    int n,m;
    int i,j;
    int cnt=1;
    int x=0,y=-1;
    int arr[100][100];

     printf("INPUT N= ? ");
    scanf("%d",&n);

     m=n;


    if(n%2==1)
    {
        while(n>0)
        {
            for(i=0;i<n;i++)
        {
            arr[x][++y]=cnt++;

        }
         n--;
            for(i=0;i<n;i++)
            {
                arr[++x][y]=cnt++;
            }

            for(i=0;i<n;i++)
            {
                arr[x][--y]=cnt++;

            }
            n--;

            for(i=0;i<n;i++)
            {
                    arr[--x][y]=cnt++;
            }
        }
    }
    else if(n%2==0)
        {   x=-1;
            y=0;
        while(n>0)
        {


        for(i=0;i<n;i++)
        {
            arr[++x][y]=cnt++;

        }
        n--;

        for(i=0;i<n;i++)
        {
             arr[x][++y]=cnt++;
        }

        for(i=0;i<n;i++)
        {
             arr[--x][y]=cnt++;

        }
         n--;
        for(i=0;i<n;i++)
        {
            arr[x][--y]=cnt++;
        }

        for(i=0;i<n;i++)
        {
             arr[++x][y]=cnt++;

        }
 n--;
        for(i=0;i<n;i++)
        {
             arr[x][++y]=cnt++;
        }

        for(i=0;i<n;i++)
        {
            arr[--x][y]=cnt++;
        }
         n--;
        }
    }


    for(i=0;i<m;i++){
        for(j=0;j<m;j++)
            {
         printf("%3d",arr[i][j]);
    }
    printf("\n");
    }






}
