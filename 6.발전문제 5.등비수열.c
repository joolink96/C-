#include <stdio.h>

int a[15];


int f(int n)
{
    int i;


    if(n==1)
    {
        return a[0];
    }
    else
    {
        return f(n-1)*3;
    }






}
int main(){

    int sum=0;
int n;

printf("ù�� : ");
scanf("%d",&a[0]);

printf("���° ���� ?: ");
scanf("%d",&n);

for(int i=1;i<=6;i++)
{
    sum+=f(i);

}

printf("%d",sum);


}
