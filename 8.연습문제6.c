
#include <stdio.h>
#include <string.h>


int main()
{
    char a[100]=" ";
    char c1,c2;
    int i;
    printf("���ϴ� ��ŭ ���ڸ� �Է��϶� . ");
    gets(a);

    printf("������ �ִ� ���ڿ� ���ο� ���� ");
    scanf("%c %c",&c1,&c2);

    for(i=0;i<strlen(a);i++)
    {


       if(a[i]==c1)

          a[i]=c2;
    }
    printf("��ȯ�� ����� ");
    printf("%s",a);

}
