#include <stdio.h>

int main()
{
int i,j,imsi,n;
int b;



scanf("%d",&n);

int a[n];


for(i=0;i<n;i++)
{
      scanf("%d",&a[i]);
}



scanf("%d",&b);


  for(i=0;i<n;i++)
  {

      for(j=i+1;j<n;j++)
      {
          if(a[i]<a[j])
          {
              imsi=a[i];
              a[i]=a[j];
              a[j]=imsi;
          }
      }
  }



       printf("%2d",a[b-1]);




}







