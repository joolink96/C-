#include <stdio.h>

int main()
{
  int n=77;
  int a=1;
  int arr[6]={75,87,81,78,76,77};
  int i;
  char h,y;
  printf("당신이 생각하고 있는 숫자가 50입니까 ? ");
  printf("%d\n",a);


  for(i=0;i<6;i++)
  {
        printf("그럼 당신이 생각하고 있는 숫자가 %d입니까?",arr[i]);
        if(n>arr[i])
        {
            printf("%d\n",a);

        }
        else if(n<arr[i])
        {
            printf("h\n");
        }
        else if(n==arr[i])
        {
            printf("y\n");
            printf("%d번만에 맞추었지요 !",i+2);
        }
  }





}
