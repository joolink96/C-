
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

    printf(" �Է� :");

    scanf("%d %d",&num1,&num2);



    printf("��� : %d",max(num1,num2));








}

