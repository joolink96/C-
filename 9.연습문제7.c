#include <stdio.h>


int f(int *a,int n)
{
    int i,sum=0;


    for(i=0;i<n;i++)
       sum+=*(a+i);

    return sum;




}


int main()
{
 int arr[100];
 int n,i;
 printf("수를 입력하세요 : ");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 scanf("%d",&arr[i]);


 printf("%d",f(arr,n));


}
