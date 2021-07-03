#include <stdio.h>


int find_min(int *x,int n)
{
    int i;
    int max=999;
    int min;

    for(i=0;i<n;i++)
    {


        if(max>*(x+i))
        max=*(x+i);

    }
   return max;

}
int main()
{

    int a[10]={3,1,4,1,5,9,2,6,5,3};

   int *p=find_min(a,10);

    printf("%d",*p);

}
