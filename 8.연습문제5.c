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
    printf("���� ���ڿ� : %s \n",a);
    printf("1.���� 2.�κк��� 3.�߰� 4.�κ��߰� 5.���� \n");

    printf("��ȣ�� �Է��ϼ��� ? :  ");
    scanf("%d",&num);

fflush(stdin);
     switch(num)
    {


    case 1:
    printf("���ڿ� ? : ");
    gets(b);
    strcpy(a,b);
    break;


    case 2:
        printf("���ڿ� ? : ");
        gets(c);
        printf("�� ? :");
        scanf("%d",&k);

        strncpy(a,c,k);
        break;


    case 3:
         printf("���ڿ� ? : ");
         gets(d);
         strcat(a,d);
         break;

    case 4:
          printf("���ڿ� ? : ");
          gets(e);
          printf("�� ? :");
          scanf("%d",&k1);

          strncat(a,e,k1);
          break;

    case 5:
        printf("����");
        break;


    }



    }






}
