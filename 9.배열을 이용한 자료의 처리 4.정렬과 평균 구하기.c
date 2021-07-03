#include <stdio.h>

int main()
{

    int arr[9]={90,10,30,50,20,40,60,70,80};
    int imsi=0;
    int n;
    int m;
    double avg;
    int sum=0;
    int i,j=0;





  while(n!=0)
{
   sum=0;

    for(i=0;i<9;i++){
     for(j=i+1;j<9;j++)
    {
        if(arr[i]>arr[j])
            {imsi=arr[i];
            arr[i]=arr[j];
            arr[j]=imsi;
            }

    }

    }
    for(i=0;i<9;i++)
    {
        sum+=arr[i];
    }

    avg=(double)sum/9;


    for(i=0;i<9;i++){
    printf("%3d",arr[i]);
    }
    printf("\n");

    printf("정렬된 수의 평균 = %.1f\n",avg);


     printf("새로 입력 하는수 = ");
     scanf("%d",&m);

     if(m==0)
        break;
     if(m>avg)
     {
         arr[0]=m;

          for(i=0;i<9;i++){
        for(j=i+1;j<9;j++)
    {
        if(arr[i]>arr[j])
            {imsi=arr[i];
            arr[i]=arr[j];
            arr[j]=imsi;
            }
    }

    }


     }
     else if(m<avg)
     {
         arr[8]=m;

           for(i=0;i<9;i++){
        for(j=i+1;j<9;j++)
    {
        if(arr[i]>arr[j])
            {imsi=arr[i];
            arr[i]=arr[j];
            arr[j]=imsi;
            }
    }

    }
     }

}
}
