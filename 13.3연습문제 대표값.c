
#include <stdio.h>

int main()
{

     FILE *in,*out;

    in=fopen("input.txt","r");
    out=fopen("output.txt","w");

    int a[5],i;
    int sum=0;
    int avg;
    int mid;

    for(i=0;i<5;i++)
    fscanf(in,"%d",&a[i]);


      for(i=0;i<5;i++){
         sum+=a[i];
      }

      for(i=0;i<5;i++){
        if(a[i+1]<a[i])
           a[i]=a[i+1];
      }

      avg=sum/5;

      fprintf(out,"%d\n%d",avg,a[2]);








}
