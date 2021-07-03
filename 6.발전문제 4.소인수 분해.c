
#include <stdio.h>

int main()
{
  int i;
  int n;
scanf("%d",&n);
  while(n!=1)
  {
      for(i=2;i<=n;i++)
      {
          if(n%i==0)
          {
              printf("%d",i);
              n/=i;
              break;

          }
      }
  }


}
