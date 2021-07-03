#include <stdio.h>

int arr[100][100];
int k;
int cnt=0;

int f(int i,int k)
{
    if(k==0)
        return;
    arr[i][cnt++]=k%10;
    k/=10;

    f(i,k);




}


int main()
{ int i,j;

  int n;
    printf("N= ");
    scanf("%d",&n);

   for(i=0;i<n;i++)
   {
    scanf("%d",&k);
      f(i,k);
      cnt=0;
   }

   for(j=3;j>=0;j--){
   int sum=0;
  {
      for(i=0;i<6;i++)
    sum+=arr[i][j];

  }
  printf("ÀÚ%d \n",sum);
   }




  }



