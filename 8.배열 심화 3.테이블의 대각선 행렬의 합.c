#include <stdio.h>

int main()
{

 int n;
 int i,j;
 int arr[10][10]={0};
 int brr[10][10]={0};
 int sum=0;
 int cnt=1;
 char c;

while(1)
{
 printf("N= ");
 scanf("%d",&n);






 if(n%4==0||n%8==0)
 {
     for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            arr[i][j]=cnt++;
          }
     }

     for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            if(i==j||i+j==3)
            {
                arr[i][j]=0;
                printf("%3d",arr[i][j]);
            }
            else{
            printf("%3d",arr[i][j]);
            }
          }

          printf("\n");
     }

 }
 else
 {
     continue;
 }
       cnt=1;


      printf("press <SPACE> Key \n");
      scanf(" %c",&c);





      for(i=n-1;i>=0;i--){
        for(j=n-1;j>=0;j--)
        {
            brr[i][j]=cnt++;
          }
     }



     for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            if(i==j||i+j==3)
            {

                printf("%3d",brr[i][j]);

            }
            else{
               brr[i][j]=0;
               printf("%3d",brr[i][j]);
            }
          }

          printf("\n");
     }


      printf("press <SPACE> Key \n");
      scanf(" %c",&c);

      for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            printf("%3d",+arr[i][j]+brr[i][j]);

        }
           printf("\n");
      }

      for(j=0;j<n;j++)
      {   sum+=arr[0][j]+brr[0][j];

      }

      printf("행의합 = %d \n",sum);
      printf("열의합 = %d \n",sum);
      printf("대각선의합 = %d\n",sum);
int arr[10][10]={0};
int brr[10][10]={0};
  sum=0;
}
 }







