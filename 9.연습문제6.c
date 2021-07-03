
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

    printf("%d 명의 학생 점수를 입력하시오 \n",MAX);

    for(i=0;i<MAX;i++)
        scanf("%lf",arr+i);

    grade(arr,MAX,&sum,&avg,&max);

    printf("\n 배열의 메모리크기 :%d 바이트 \n\n",sizeof(arr));
    printf("학생수 :%d \n",MAX);
    printf("총 합 :%.2lf \n",sum);
    printf("평균 :%.2lf \n",avg);
    printf("최대값 :%.2lf \n",max);

    return 0;





}
