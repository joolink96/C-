#include <stdio.h>

int main()
{
    int min_cnt=10;
    int min_num=0;
    int max_cnt=10;
    int max_num=0;
   int i;
   for(i=1;i<=9;i++)
   {
       int cnt=0;
       int num=i;
       while(1)
       {

       if(num==4){
        printf("4(%d)\n",cnt);
        break;
       }
       printf("%d ->",num);
       if(num%2==0)
       {
           num=num/2;
           cnt++;
       }
       else if(num%2==1)
       {
           num=num*3+1;
           cnt++;
       }

    if(min_cnt>cnt){
        min_cnt=cnt;
        min_num=i;


    }
    if(max_cnt<cnt){

        max_cnt=cnt;
        max_num=i;

    }
       }


   }


  printf("가장 긴연결 : %d\n",max_num);
       printf("가장 짧은연결 :%d",min_num);

}
