#include <stdio.h>

int main()
{
    int arr[10]={0};
    int i,j;
    int imsi=0;
    for(i=0;i<10;i++)
    {
        printf("Enter.. : ");
        scanf("%d",&arr[i]);
    }

    printf("�迭�� ���� : ");
    for(i=0;i<10;i++)
    {
        printf("%d,",arr[i]);
    }

    printf("\n");




    for(i=0;i<10;i++)
    {
         for(j=i+1;j<10;j++)
         {
             if(arr[i]>arr[j])
             {
                 imsi=arr[i];
                arr[i]=arr[j];
                arr[j]=imsi;
             }

         }

    }

    printf("������ ���� : ");

    for(i=0;i<10;i++)
    {
        printf("%d,",arr[i]);
    }

}
