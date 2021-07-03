

#include <stdio.h>

int main()
{

     FILE *in,*out;

    in=fopen("input.txt","r");
    out=fopen("output.txt","w");

    int n;
    int i;
    int a[3];
    int b[3];
    char c[3];
    int result[3];
    fscanf(in,"%d",&n);
    for(i=0;i<n;i++)
    {
    fscanf(in,"%d %c %d",&a[i],&c[i],&b[i]);

      switch(c[i]){

case '+':
    result[i]=a[i]+b[i];
    break;
case '-':
    result[i]=a[i]-b[i];
    break;
case '/':
    result[i]=a[i]/b[i];
    break;
case '%':
    result[i]=a[i]%b[i];
    break;

    }
    }

    for(i=0;i<n;i++)
        fprintf(out,"%d\n",result[i]);
}
