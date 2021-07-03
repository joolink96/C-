#include <stdio.h>

int main()
{

    int a,n;
    int r;
    int z;

    int i,j;


    int m;
    int cnt=1;
    int arr[100][100]={0};

    printf("A,N ? : ");
    scanf("%d %d",&a,&n);


    if(a==1)
    {
         m=-n;

    }
    else
    {
        m=n;
    }


    if(a==1)
    {

       n=-n;







        while(n>0)
        {


        for(j=n-1;j>=n-1;j--)
        {
            for(i=0;i<n;i++)
            {
                arr[i][j]=cnt;
            }
        }

        for(i=n-1;i>=n-1;i--)
        {
            for(j=n-2;j>=0;j--)
            {
                arr[i][j]=cnt;
            }
        }
        n--;
        cnt++;




        }
    }


    else if(a==2)
    {

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                {
                    arr[i][j]=cnt++;
                }
            }


        }


        cnt=1;


        for(i=n-7;i<n-6;i++)
        {
            for(j=n-6;j<n;j++)
            {
                arr[i][j]=cnt++;

            }
            n++;
            cnt=1;
        }





        cnt=1;
        n=m;

        for(i=n-6;i<n-5;i++)
        {
            for(j=0;j<n-6;j++)
            {
                arr[i][j]=cnt++;

            }
            n++;
            cnt=1;
        }





    }


    else if(a==3)
    {



        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                {
                    arr[i][j]=cnt;
                    cnt+=2;
                }
            }


        }


        cnt=2;
        r=2;


        for(i=n-8;i<n-7;i++)
        {     cnt=r;
            for(j=n-7;j<n;j++)
            {
                arr[i][j]=cnt*2;

                 cnt++;
            }

            n++;

            r+=3;


        }

        printf("%d",arr[1][6]);






        n=m;
        z=4;

        cnt=z;

        for(i=n-7;i<n-6;i++)
        {   cnt=z;
            for(j=n-8;j>=0;j--)
            {
                arr[i][j]=cnt++;


            }
            n++;
            z+=2;
        }












    }

    for(i=0;i<m;i++)
       {
        for(j=0;j<m;j++)
        {
            printf("%2d",arr[i][j]);
        }

     printf("\n");
    }



}
