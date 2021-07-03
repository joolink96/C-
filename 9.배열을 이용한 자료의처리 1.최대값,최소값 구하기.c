#include <stdio.h>

int main()
{
    int arr[10]={0};
    int i;
    int max=0;
    int min=1000;
    for(i=0;i<10;i++)
    {
        printf("Enter.. : ");
        scanf("%d",&arr[i]);
    }

    for(i=0;i<10;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        else if(arr[i]<min)
            min=arr[i];

    }

    printf("최대값 : %d\n",max);
    printf("최소값 : %d\n",min);



}
