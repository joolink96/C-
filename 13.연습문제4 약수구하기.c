

#include <stdio.h>

int main()
{

     FILE *in,*out;

    in=fopen("input.txt","r");
    out=fopen("output.txt","w");

    int a[100]={0};
    int i;


    int n,k;



    fscanf(in,"%d %d",&n,&k);


    for(i=1;i<=n;i++){
        if(n%i==0)
        a[i-1]=i;

    }

    fprintf(out,"%d",a[k]);




}
