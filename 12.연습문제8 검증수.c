
#include <stdio.h>

int main()

{
    FILE *in,*out;

    in=fopen("input.txt","r");
    out=fopen("output.txt","w");

    int a[5];
    int k;
    int sum=0;
    int i;

    for(i=0;i<5;i++)
    {
     fscanf(in,"%d",&a[i]);
    }

     sum=a[0]*a[0]+a[1]*a[1]+a[2]*a[2]+a[3]*a[3]+a[4]*a[4];

      k=sum%10;

    fprintf(out,"%d",k);
}
