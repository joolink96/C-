#include <stdio.h>
#include <string.h>

int main()

{

    char a[15];
    int num;
    char get;
    int i;

    printf("���ڿ��� �Է��ϼ��� :");
    gets(a);

    printf("���ڸ� �Է��ϼ��� :");
    scanf("%d",&num);




        for(i=0;i<num;i++)
        printf(" %s\n",a);


        printf("\n");
       printf("�ٽ� �����Ͻðڽ��ϱ� ? (Y/N) ");

       scanf(" %c",&get);



  while(get!='N')
  {


     if(get=='Y')

       {



         printf("���ڿ��� �Է��ϼ��� :");
        scanf(" %s",a);

        printf("���ڸ� �Է��ϼ��� :");
        scanf("%d",&num);

        for(i=0;i<num;i++)
        printf("%s\n",a);

        while(get!='N')
          {

          printf("�ٽ� �����Ͻðڽ��ϱ� ? (Y/N) ");
           scanf(" %c",&get);

           if(get=='N')
           {
             printf("����");
           }

          else
          {


         printf("���ڿ��� �Է��ϼ��� :");
        scanf(" %s",a);

        printf("���ڸ� �Է��ϼ��� :");
        scanf("%d",&num);

        for(i=0;i<num;i++)
        printf("%s\n",a);
          }

          }
       }

  }




}

