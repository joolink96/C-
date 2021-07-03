
#include <stdio.h>

int main()
{
    int i;
    int n;
    int arr[20]={0};
    scanf("%d",&n);
    int sum=2;


    int a=1,b=1;

    arr[0]=a+b;
    arr[1]=b+arr[0];

    for(i=2;i<n;i++)
        arr[i]=arr[i-1]+arr[i-2];

        for(i=0;i<n;i++)
        {
            sum+=arr[i];
        }

    printf("%d번째 까지의 핪 : %d\n",n,sum);

    printf("%d번째 위치값 :%d",n,arr[n-1]);





}
