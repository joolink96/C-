#include <stdio.h>

int main()
{   int arr[5][7]={0};
    int m,d,n=0;
    int cnt=1;
    int i,j;

    printf("����ϰ����ϴ� �ް� ���� ����? : ");
    scanf("%d %d",&m,&d);

    printf(" �� �� ȭ �� �� �� ��\n");

    for(i=0;i<d-1;i++)
            {
                n++;
                printf("  ");
            }
    if(m==2)
    {



     for(i=0;i<1;i++)
        {


            for(j=n;j<7;j++)
            {


                arr[i][j]=cnt++;

                if(j%6==0)
                    printf("\n");
            }
        }


        for(i=1;i<5;i++)
        {


            for(j=0;j<7;j++)
            {

                 if(cnt==29)
                    break;
                arr[i][j]=cnt++;

                if(j%7==0)
                    printf("\n");
            }
        }







         for(i=0;i<5;i++)
        {
            for(j=0;j<7;j++)
            {
                if(arr[i][j]==0)
                    printf("   ");
                else
                {
                       printf("%3d",arr[i][j]);
                }






            }

            printf("\n");
        }

    }
    else
    {




        for(i=0;i<1;i++)
        {


            for(j=n;j<7;j++)
            {


                arr[i][j]=cnt++;

                if(j%6==0)
                    printf("\n");
            }
        }


        for(i=1;i<5;i++)
        {


            for(j=0;j<7;j++)
            {

                 if(cnt==32)
                    break;
                arr[i][j]=cnt++;

                if(j%7==0)
                    printf("\n");
            }
        }











         for(i=0;i<5;i++)
        {
            for(j=0;j<7;j++)
            {
                if(arr[i][j]==0)
                    printf("   ");
                else
                {
                       printf("%3d",arr[i][j]);
                }






            }
            printf("\n");

        }


    }
}





