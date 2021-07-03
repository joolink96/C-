#include <stdio.h>

int main()
{

    int i,j;
    int cnt=1;
    int arr[10][10]={0};
    printf("N=? ");
    scanf("%d",&n);

    int x=0
    int y=n/2;
     x y
     2 1
    for(i=0;i<n*n;i++)
    {
        arr[x--][y++]=cnt++;
    }

    if(x<0)
    {
        x=2;
    }
    else if(y>=3)
    {
        y=0;
    }







}
