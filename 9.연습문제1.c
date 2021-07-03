
#include <stdio.h>


int max(int x,int y)
{
   if(x>y)
    return x;
   else if(x<y)
    return y;


}


int main()
{
    int num1,num2;

    printf(" 입력 :");

    scanf("%d %d",&num1,&num2);



    printf("출력 : %d",max(num1,num2));








}

