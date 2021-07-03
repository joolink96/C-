
#include <stdio.h>

int main()
{
    int arr[10][10]={0};
    int n,m;
    char c;

    int i,j;


    while(1)
    {


    printf("줄수 ? ");
    scanf("%d",&n);
     m=n;
    printf("방향(L,R) ? ");
    scanf(" %c",&c);




   int   x=-1,y=0;
     int cnt=1;

     int arr[10][10]={0};


    if(c=='L')
    {

   while(n>0)
    {
        for(i=0;i<n;i++)
        {
            arr[++x][y]=cnt++;
        }
        n--;
        for(i=0;i<n;i++)
        {
            arr[x][++y]=cnt++;
        }

         for(i=0;i<n;i++)
        {
            arr[--x][y]=cnt++;
        }
        n--;

         for(i=0;i<n;i++)
        {
            arr[x][--y]=cnt++;
        }

    }



       for(i=0;i<m;i++){
         for(j=0;j<m;j++)
         {
             printf("%4d",arr[i][j]);
         }
         printf("\n");
       }

    }



    else if(c=='R')
    {





       x=0;
       y=-1;


        while(n>0)
        {
       for(i=0;i<n;i++)
       {
           arr[x][++y]=cnt++;
       }
       n--;

       for(i=0;i<n;i++)
       {
           arr[++x][y]=cnt++;
       }

       for(i=0;i<n;i++)
       {
           arr[x][--y]=cnt++;
       }
       n--;

         for(i=0;i<n;i++)
       {
           arr[--x][y]=cnt++;

       }

        }

     for(i=0;i<m;i++){
         for(j=0;j<m;j++)
         {
             printf("%4d",arr[i][j]);
         }
       printf("\n");
       }



    }




    }




}
