#include <stdio.h>

int main()
{
    int arr[5][5]={0};
    int x=0,y=-1;
    int n,m,cnt=0;
    int i,j;
    scanf("%d",&n);

    m=n;

    while(n>0)
    {
        for(i=0;i<n;i++)
            arr[x][++y]=++cnt;

        n--;
        for(i=0;i<n;i++)
            arr[++x][y]=++cnt;

        for(i=0;i<n;i++)
            arr[x][--y]=++cnt;
        n--;
        for(i=0;i<n;i++)
            arr[--x][y]=++cnt;

    }

        for(i=0;i<5;i++){
           {

           for(j=0;j<5;j++)
            printf("%3d",arr[i][j]);
           }
           printf("\n");
        }

}
