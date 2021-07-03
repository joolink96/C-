#include <stdio.h>

int gcm(int a,int b)
{
    int i;

    for(i=2;i<=a;i++)
    {
     if(a%i==0&&b%i==0)

        return i*gcm(a/i,b/i);
     else
        return 1;
    }


}

int main()
{

    int a=8,b=12;



    printf("%d",gcm(a,b));
}
