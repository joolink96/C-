#include <stdio.h>

int main()
{

int i,sum=0;
int a[10];


for(i=0;i<10;i++)
{
   scanf("%d",&a[i]);
}


for(i=0;i<10;i++)
{


    if(a[i]%2==1)
    {
        printf("%2d",a[i]);
        sum+=a[i];

    }

}




    printf("\n");


       printf("%2d",sum);



}
