#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int i;
    printf("숫자의 개수를 입력 = ? ");
    scanf("%d",&n);
    double min=10000;
    double avg;
    int sum=0;
    int arr[10]={0};
    int ans;

    for(i=0;i<n;i++)
    {
        printf("%d번째 숫자 = ? ",i+1);
        scanf("%d",&arr[i]);

    }
     for(i=0;i<n;i++)
    {

        sum+=arr[i];
    }
     avg=(double)sum/5;

    for(i=0;i<n;i++)
    {
       if(fabs(avg-arr[i])<min)
       {
           min=fabs(avg-arr[i]);
           ans=arr[i];

       }
    }

    printf("평균 = %.1f\n",avg);
    printf("차가 가장 적은수 = %d\n",ans);
    printf("평균과의 차 = %.1f ",min);



}
