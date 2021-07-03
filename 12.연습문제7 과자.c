
#include <stdio.h>

int main()

{
    FILE *in,*out;

    in=fopen("input.txt","r");
    out=fopen("output.txt","w");

    int k,n,m;
    int result;
    fscanf(in,"%d %d %d",&k,&n,&m);

    if(k*n>m)
    {
        result=(k*n)-m;
    }
   else if(k*n<=m)
   {
       result=0;
   }

   fprintf(out,"%d",result);
}
