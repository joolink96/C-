#include <stdio.h>
#include <string.h>



int main()
{
 int i;
 char a[13]="";

 printf("���ڿ��� �Է� ? :");

 gets(a);

 for(i=12;i>=0;i--)
     printf("%c",a[i]);

}



