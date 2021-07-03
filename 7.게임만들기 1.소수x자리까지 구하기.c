#include <stdio.h>
int a[100]={0};


int f(int m,int n,int x)
{

   int i=0;
   while(i<=x+1)
    {
        if(i==0)
        {
            a[i++]=m/n;
            m=m%n;
        }
        else {
                if(n>m)
       {
           m=m*10;
            a[i++]=m/n;
            m=m%n;
       }
    else{
           a[i++]=m/n;
           m=m%n;
    }
    }
    }

    printf("%d.",a[0]);
    for(i=1;i<=x;i++)
    printf("%d",a[i]);



}

int main()
{
    int m,n;
    int x;
    printf("µÎ ¼ö : ");
    scanf("%d %d",&m,&n);

    printf("ÀÚ¸´¼ö : ");

    scanf("%d",&x);


    f(m,n,x);








}
