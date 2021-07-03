#include <stdio.h>


int main()
{
    FILE *in,*out;

    in=fopen("input.txt","r");
    out=fopen("output.txt","w");

    int a[7],i;
    int sum=0;
    int min=999;

    for(i=0;i<7;i++)
    fscanf(in,"%d",&a[i]);

    for(i=0;i<7;i++)
    {
        if(a[i]%2==1)
         {
             sum+=a[i];
             if(min>a[i])
                min=a[i];
         }





    }

    fprintf(out,"%d \n %d",sum,min);



}
