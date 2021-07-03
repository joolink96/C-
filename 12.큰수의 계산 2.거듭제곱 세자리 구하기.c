#include <stdio.h>

int main()
{

    int a,b;
    int m=1;
    int i;

   scanf("%d %d",&a,&b);



  for(i=0;i<b;i++)
  {
      m*=a;
      m%=1000;
  }

  if(m<10)
  {
      printf("00%d",m);

  }
  else if(m<100)
  {

      printf("0%d",m);

  }
  else
  {
      printf("%d",m);
  }

}
