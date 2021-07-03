#include <stdio.h>

int arr[100];
int cnt=0;

int f(int n)
{
    if(n==0)
        return;
    arr[cnt++]=n%10;
    n/=10;
    f(n);



}

int main()
{ int i;
  int n;
  while(1){
    scanf("%d",&n);
if(n==0)

        break;
    f(n);

    for(i=0;i<cnt;i++)
        printf("%d",arr[i]);
    cnt=0;
  }


}

