#include <stdio.h>

int main()
{
    int i,j;
    int arr[100][100]={0};
    int size,seed;
    printf("size,seed : ? ");
    scanf("%d %d",&size,&seed);

    for(i=0;i<size;i++)
    {
        for(j=0;j<=i;j++)
        {
            arr[j][i]=seed++;

            if(seed>9)
            {
                seed=1;
            }
        }
    }

    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[i][j]==0)
            {
                printf("  ");
            }
            else{
                 printf("%2d",arr[i][j]);
            }

        }
        printf("\n");
    }
}
