#include <stdio.h>
#include <string.h>

int main()

{

    char a[15];
    int num;
    char get;
    int i;

    printf("문자열을 입력하세요 :");
    gets(a);

    printf("숫자를 입력하세요 :");
    scanf("%d",&num);




        for(i=0;i<num;i++)
        printf(" %s\n",a);


        printf("\n");
       printf("다시 실행하시겠습니까 ? (Y/N) ");

       scanf(" %c",&get);



  while(get!='N')
  {


     if(get=='Y')

       {



         printf("문자열을 입력하세요 :");
        scanf(" %s",a);

        printf("숫자를 입력하세요 :");
        scanf("%d",&num);

        for(i=0;i<num;i++)
        printf("%s\n",a);

        while(get!='N')
          {

          printf("다시 실행하시겠습니까 ? (Y/N) ");
           scanf(" %c",&get);

           if(get=='N')
           {
             printf("종료");
           }

          else
          {


         printf("문자열을 입력하세요 :");
        scanf(" %s",a);

        printf("숫자를 입력하세요 :");
        scanf("%d",&num);

        for(i=0;i<num;i++)
        printf("%s\n",a);
          }

          }
       }

  }




}

