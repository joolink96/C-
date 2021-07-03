#include <stdio.h>

int main()
{
int i,j,imsi,n;
int a[10];
int q;



for(i=0;i<10;i++)
{
      scanf("%d",&a[i]);
}
printf("\n");


scanf("%d",&q);


  for(i=0;i<10;i++)
  {

      for(j=i+1;j<10;j++)
      {
          if(a[i]<a[j])
          {
              imsi=a[i];
              a[i]=a[j];
              a[j]=imsi;
          }
      }
  }


 for(int i=0;i<q;i++)
       printf("%2d",a[i]);




}
