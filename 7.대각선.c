#include <stdio.h>

int main()
{

    int a[5][5];

    int i,j;
    int cnt=0;




    for(i=0;i<5;i++)
        {
            for(j=0;j<=i;j++)
                a[j][i-j]=++cnt;

        }




    for(i=1;i<5;i++)
        {
            for(j=i;j<5;j++)
                a[j][4-j+i]=++cnt;

        }





        for(i=0;i<5;i++){
           {

           for(j=0;j<5;j++)
            printf("%3d",a[i][j]);
           }
           printf("\n");
        }















}
