
#include <stdio.h>

int main()

{
    FILE *in,*out;

    in=fopen("input.txt","r");
    out=fopen("output.txt","w");

    int a[7];

    int i,j;
    int imsi;


     for(i=0;i<7;i++){
        fscanf(in,"%d",&a[i]);


     }
        for(i=0;i<7;i++)
        {
          for(j=i+1;j<7;j++)
           {
               if(a[i]<a[j])
               {
                   imsi=a[i];
              a[i]=a[j];
              a[j]=imsi;
               }


           }
     }

     fprintf(out,"%d\n%d",a[0],a[2]);
}
