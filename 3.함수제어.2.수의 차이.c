#include <stdio.h>
int re(int n)
{  int an[10];
    int bn[10];
    int cn[10];

    scanf("%d %d",&an[0],&bn[0]);


       cn[0]=1;

    int i;
     for(i=1;i<n;i++)
        {
            an[i]=an[i-1]+bn[i-1];
            bn[i]=bn[i-1]+cn[i-1];
            cn[i]=i+1;



        }

        printf("N   an   bn  cn\n");
        printf("===================\n");
        for(i=0;i<n;i++){
            printf("%d   %d     %d     %d\n",i+1,an[i],bn[i],cn[i]);
        }
        printf("===================");



}
int main()
{



     int an[10];
    int bn[10];


    int n;

    printf("항의수,a1,b1의 값 :? ");
    scanf("%d",&n);
    re(n);



}
