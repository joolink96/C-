#include <stdio.h>
#include <string.h>

int main()
{
    char a[30],b[30];
    int d;
    char find;
    int i;
    int result;

    printf("���ڿ� �ΰ��� �Է� ? :");
    scanf("%s %s",a,b);

    strcat(a,b);



    printf("�ѹ��ڿ��� ���̴� %d�̴�\n",strlen(a));

    printf("ã���� �ϴ� ���ڴ� : ? ");
    scanf(" %c",&find);


    for(i=0;i<20;i++)
    {
        if(a[i]==find)
             {
                 result=i;
                 break;
             }



    }
    printf("���ڿ� �߿��� %d��° ��ġ���� ó������ %c���ڰ� �߰ߵǾ���.",i+1,find);





}
