

#include <stdio.h>


int min(int *x,int a)
{

    int answer=999;
    int i;

   for(i=0;i<a;i++)
   {


   if(answer>*(x+i))
     answer=*(x+i);
   }
   return answer;


}


int main()
{
    int n;
    int i;
   int arr[100];

    printf(" N?  :");
    scanf("%d",&n);

     for(i=0;i<n;i++)
    scanf("%d" ,&arr[i]);



    printf("Ãâ·Â : %d",min(arr,n));








}
