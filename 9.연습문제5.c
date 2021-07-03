#include <stdio.h>

int lcm(int a,int b)
{
    int i;

    for(i=2;i<=a;i++)
    {
     if(a%i==0&&b%i==0)

        return i*lcm(a/i,b/i);
     else
        return (a*b);
    }


}

int main()
{

    int a=8,b=12;



    printf("%d",lcm(a,b));
}
