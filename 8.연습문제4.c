#include <stdio.h>
#include <string.h>

int main()
{
    char a[30],b[30];
    int d;
    char find;
    int i;
    int result;

    printf("문자열 두개를 입력 ? :");
    scanf("%s %s",a,b);

    strcat(a,b);



    printf("총문자열의 길이는 %d이다\n",strlen(a));

    printf("찾고자 하는 문자는 : ? ");
    scanf(" %c",&find);


    for(i=0;i<20;i++)
    {
        if(a[i]==find)
             {
                 result=i;
                 break;
             }



    }
    printf("문자열 중에서 %d번째 위치에서 처음으로 %c문자가 발견되었다.",i+1,find);





}
