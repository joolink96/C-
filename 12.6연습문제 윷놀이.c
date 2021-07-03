
#include <stdio.h>

int main()
{

     FILE *in,*out;

    in=fopen("input.txt","r");
    out=fopen("output.txt","w");


    int i,j;




    int sum[3]={0};

    int a[3][4];

    for(i=0;i<3;i++)
      {for(j=0;j<4;j++)
    fscanf(in,"%d",&a[i][j]);
      }
    for(i=0;i<3;i++)
    {
      for(j=0;j<4;j++)
        sum[i]+=a[i][j];
    }

    for(i=0;i<3;i++)
    {


    if(sum[i]==3)
    fprintf(out,"A\n");

    else if(sum[i]==2)
    fprintf(out,"B\n");



    else if(sum[i]==1)
    fprintf(out,"C\n");


    else if(sum[i]==0)
    fprintf(out,"D\n");



    else if(sum[i]==4)
    fprintf(out,"E\n");


    }
}
