#include <stdio.h>

int main()
{
    int i,j;
    int n;
    int sum;
    int nsum=0;
    int m;


    printf(" ¼±ÅÃ(1,2,3)= ");
    scanf("%d",&m);
    printf("¹Ýº¹ È½¼ö = ");
    scanf("%d",&n);

    if(m==3)
        return;

    switch(m)
    {

  case 1:
    {



        for(i=1;i<=n;i++)
        {
            printf( "(");
            sum=0;
            for(j=1;j<=i;j++)
            {
               if(j%2==0)
            {
                  printf("%d",-j);
                  sum+=-j;
            }
               else{
             printf("%d",j);
                sum+=j;
              }
              if(j!=i&&j%2==0)
              {
                  printf("+");
              }
            }
          printf( ")=%d \n",sum);


        if(i>1)
        {
            if(i%2==0)
                nsum+=sum;
                else
                    nsum+=-sum;
        }
        else
        {
            nsum=sum;
        }

        }


    }

    }

    printf("ÃÑÇÕ :%d",nsum);
}
