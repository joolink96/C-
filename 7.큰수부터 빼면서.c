#include <stdio.h>

int main()
{
    int i,j,k=0;
    int a[5][5]={0};

    for(j=0;j<5;j++){
        for(i=0;i<5;i++)
            if(j>=i)
          a[i][j]=++k;

    }

    for(i=0;i<5;i++){

        {for(j=0;j<5;j++)
           if(j>=i)
            printf("%3d",a[i][j]);
            else
                printf("   ");
        }
        printf("\n");
    }
}
