
#include <stdio.h>
#include <string.h>


int main()
{
    char a[100]=" ";
    char c1,c2;
    int i;
    printf("원하는 만큼 문자를 입력하라 . ");
    gets(a);

    printf("기존에 있던 문자와 새로운 문자 ");
    scanf("%c %c",&c1,&c2);

    for(i=0;i<strlen(a);i++)
    {


       if(a[i]==c1)

          a[i]=c2;
    }
    printf("변환된 결과값 ");
    printf("%s",a);

}
