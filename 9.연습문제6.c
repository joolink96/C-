
#include <stdio.h>


#define MAX 10

int grade(double *p,int n,double *psum,double *pavg,double *pmax)
{

    int i;

    *psum=0;
    *pmax=*p;
    for(i=0;i<n;i++)
    {
        *psum+=*(p+i);
        if(*pmax<*(p+i))
        *pmax=*(p+i);

    } *pavg=*psum/n;

    return 0;




}
int main()
{

    int i;
    double arr[MAX]={0};
    double sum,avg,max;

    printf("%d ���� �л� ������ �Է��Ͻÿ� \n",MAX);

    for(i=0;i<MAX;i++)
        scanf("%lf",arr+i);

    grade(arr,MAX,&sum,&avg,&max);

    printf("\n �迭�� �޸�ũ�� :%d ����Ʈ \n\n",sizeof(arr));
    printf("�л��� :%d \n",MAX);
    printf("�� �� :%.2lf \n",sum);
    printf("��� :%.2lf \n",avg);
    printf("�ִ밪 :%.2lf \n",max);

    return 0;





}
