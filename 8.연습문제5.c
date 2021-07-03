#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    int input;
    int k;
    int k1;
    char a[30]=" ";
    char b[30]=" ";
    char c[30]=" ";
    char d[30]=" ";
    char e[30]=" ";


    while(num!=5)
    {
    printf("현재 문자열 : %s \n",a);
    printf("1.복사 2.부분복사 3.추가 4.부분추가 5.종료 \n");

    printf("번호를 입력하세요 ? :  ");
    scanf("%d",&num);

fflush(stdin);
     switch(num)
    {


    case 1:
    printf("문자열 ? : ");
    gets(b);
    strcpy(a,b);
    break;


    case 2:
        printf("문자열 ? : ");
        gets(c);
        printf("수 ? :");
        scanf("%d",&k);

        strncpy(a,c,k);
        break;


    case 3:
         printf("문자열 ? : ");
         gets(d);
         strcat(a,d);
         break;

    case 4:
          printf("문자열 ? : ");
          gets(e);
          printf("수 ? :");
          scanf("%d",&k1);

          strncat(a,e,k1);
          break;

    case 5:
        printf("종료");
        break;


    }



    }






}
