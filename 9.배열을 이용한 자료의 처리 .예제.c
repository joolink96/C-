#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int i;
    printf("������ ������ �Է� = ? ");
    scanf("%d",&n);
    double min=10000;
    double avg;
    int sum=0;
    int arr[10]={0};
    int ans;

    for(i=0;i<n;i++)
    {
        printf("%d��° ���� = ? ",i+1);
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

    printf("��� = %.1f\n",avg);
    printf("���� ���� ������ = %d\n",ans);
    printf("��հ��� �� = %.1f ",min);



}
