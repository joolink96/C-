#include <stdio.h>

int main()
{
    int arr[10]={0};
    int brr[10]={0};

    int i,j;
    int imsi=0;
    int cnt=1;
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


    for(i=0;i<10;i++){
        brr[i]=1;
            for(j=0;j<10;j++)
            {
                if(arr[i]>arr[j])
                {
                    brr[i]++;
                }
            }
}

printf("���� ���� : ");
for(i=0;i<10;i++)
{
    printf("%d(%d),",arr[i],brr[i]);
}
}

