
#include <stdio.h>

int f(int num)
{
     if(num==1)
        return 1;
     num--;
     return 2*f(num);

}

int main()
{

  int n;
  int re;
  int sum;
  while(n!=0){
  scanf("%d",&n);
  re=f(n);
   sum=(2*re)-1;
  printf("%d번째 값 : %d\n8",n,re);
  printf("합계 = %d\n",sum);
  }
}

