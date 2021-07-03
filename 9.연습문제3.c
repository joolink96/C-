
#include <stdio.h>


int ppt(int n)
{
    int i,j;

    for(i=0;i<n;i++)
    {


        for(j=i;j<n-i;j++)
    {
        printf("*");
    }
    printf("\n");
    }


}
int main()
{

    int n;

    scanf("%d",&n);

    ppt(n);



}
