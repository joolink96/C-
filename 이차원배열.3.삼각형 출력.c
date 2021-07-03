
#include <stdio.h>

int main()
{
    int i,j;
    int n;
    int arr[10][10]={0};

    int c=0;
    printf("n을 입력하세요 : ");
    scanf("%d",&n);
    int b=n-1;
    int a=0;



    for(i=0;i<n;i++)
        {for(j=b;j>=a;j--)
            {arr[i][j]=++c;
            }

            if(i<n/2){
                a++;
                b--;
            }
          else
          {


              a--;
              b++;
          }
        }

        for(i=0;i<n;i++){
            {for(j=0;j<n;j++)
            if(arr[i][j]==0)
                printf("    ");
            else
            printf("%4d",arr[i][j]);

        }
        printf("\n");
        }



}
