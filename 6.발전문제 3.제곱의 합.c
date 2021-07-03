
#include <stdio.h>

int main()
{
    int n;
    int i;
    int cnt=1;
    int sum=0;
    scanf("%d",&n);

    for(i=n;i>=1;i--)
      {


       sum+=(i*cnt)*(i*cnt);
       ++cnt;

      }
    printf("%d",sum);

}
