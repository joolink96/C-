#include <stdio.h>

int main()
{
    int arr[100];
    int n,cnt=0;
    int i;

    scanf("%d",&n);



    while(1)
    {

        if(n==0)
            break;
        if(n%2==1)
        {
            arr[cnt]=1;
        }
        else if(n%2==0)
            {
            arr[cnt]=0;
        }
        cnt++;
        n/=2;

    }

    for(i=cnt-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }

}









