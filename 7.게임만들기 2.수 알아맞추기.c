#include <stdio.h>

int main()
{
  int n=77;
  int a=1;
  int arr[6]={75,87,81,78,76,77};
  int i;
  char h,y;
  printf("����� �����ϰ� �ִ� ���ڰ� 50�Դϱ� ? ");
  printf("%d\n",a);


  for(i=0;i<6;i++)
  {
        printf("�׷� ����� �����ϰ� �ִ� ���ڰ� %d�Դϱ�?",arr[i]);
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
            printf("%d������ ���߾����� !",i+2);
        }
  }





}
