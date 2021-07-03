#include <stdio.h>





int main()
{

    int n;



   while(n!=0){

        scanf("%d",&n);

        if(n%10>=5)
        {
             n=(n-n%10)+10;
        }

            else if(n%10<5)
        {
             n=n-n%10;
        }

        int a=n/10000;
    int b=(n%10000)/5000;
    int c=n%10000%5000/1000;
    int d=n%10000%5000%1000/500;
    int e=n%10000%5000%1000%500/100;
    int f=n%10000%5000%1000%500%100/50;
    int g=n%10000%5000%1000%500%100%50/10;






        printf("10000=%d\n",a);
        printf("5000=%d\n",b);
        printf("1000=%d\n",c);
        printf("500=%d\n",d);
        printf("100=%d\n",e);
        printf("50=%d\n",f);
        printf("10=%d\n",g);


   }



}
