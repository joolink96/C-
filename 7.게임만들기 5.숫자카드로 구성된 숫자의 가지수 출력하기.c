#include <stdio.h>
#include <math.h>
int main()
{

    int n;



    int i,j,k;
    int a[10];
    int b[100];
    int m;
    int cnt=0;
    int sum=0;
    int min=10000;
    int near=0;
    double avg;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
           {
               for(k=0;k<n;k++)
                {
                    if(i!=j&&j!=k&&i!=k)
                    {
                        m=a[i]*100+a[j]*10+a[k]*1;
                        if(m>=100){
                            printf(" %2d",m);
                            sum+=m;
                            b[cnt++]=m;
                            if(cnt%10==0)
                                printf("\n");
                        }
                    }
                }
           }
        }
       avg=sum/(double)cnt;


        for(i=0;i<20;i++)
       {
           if(fabs(avg-b[i])<min)
           {
               min=fabs(avg-b[i]);
            near=b[i];

           }
           //abs==���� ���� �Լ�
           //fabs=���� �Ǽ� �Լ�


       }




        printf("���� ���� :%d\n",cnt);
        printf("���� �� :%d\n",sum);
        printf("���� ��� : %.4f",avg);
        printf("���� ������ : %d",near);











}
