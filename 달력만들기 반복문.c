#include <stdio.h>

int main()
{
int i,a[5],j,imsi;

for(i=0;i<5;i++)
    scanf("%d",&a[i]);

  for(i=0;i<5;i++)
  {

      for(j=i+1;j<5;j++)
      {
          if(a[i]>a[j])
          {
              imsi=a[i];
              a[i]=a[j];
              a[j]=imsi;
          }
      }
  }
  for(i=0;i<5;i++)
  {
       printf("2%2d",a[i]);
  }



}







