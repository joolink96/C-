#include <stdio.h>
#include <string.h>



int main()
{
 int i;
 char a[13]="";

 printf("문자열을 입력 ? :");

 gets(a);

 for(i=12;i>=0;i--)
     printf("%c",a[i]);

}



