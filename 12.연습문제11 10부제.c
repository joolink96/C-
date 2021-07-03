
#include <stdio.h>

int main()

{
    FILE *in,*out;

    in=fopen("input.txt","r");
    out=fopen("output.txt","w");

    int a[5];

    int i,n;
    int count=0;
    int k=0;
    while(k<3)
    {


fscanf(in,"%d",&n);
    for(i=0;i<5;i++) {
        fscanf(in,"%d",&a[i]);
    }

    for(i=0;i<5;i++){
        if(a[i]==n)
            ++count;
    }

        fprintf(out,"%d\n",count);
        ++k;
    count=0;
    }
}
