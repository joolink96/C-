#include <stdio.h>

int main()
{

    int arr[10]={15,20,31,50,66,72,78,81,96,99};

    int a;
    char c;
    int i,j;
    int imsi;
    for(i=0;i<10;i++)
    {
        printf("%3d",arr[i]);
    }
    printf("\n");
    while(c!='E')
    {
          printf("HOW ? : ");
          scanf("%c %d",&c,&a);

          if(c=='C')
          {
              for(i=0;i<10;i++)
              {
                  if(arr[i]==a)
                  {
                      arr[i]=0;
                  }

              }


               for(i=0;i<10;i++)
              {
                  if(arr[i]==0)
                  {
                      printf("");
                  }
              else{
                  printf("%3d",arr[i]);
              }
              }

             printf("\n");
          }



        while(c!='E')
        {
           printf("HOW ? : ");
          scanf("%c %d",&c,&a);

          if(c=='D')
          {

                  arr[a-1]=0;


               for(i=0;i<10;i++)
              {
                  if(arr[i]==0)
                  {
                      printf("");
                  }
               else
               {
                    printf("%3d",arr[i]);
               }


              }

              printf("\n");




          }

           if(c=='I')
          {
              arr[4]=a;

              for(i=0;i<10;i++)
              {
                  for(j=i+1;j<10;j++)
                  {
                      if(arr[i]>arr[j])
                      {
                          imsi=arr[i];
                          arr[i]=arr[j];
                          arr[j]=imsi;
                      }
                  }
              }


              for(i=0;i<10;i++)
              {
                  if(arr[i]==0)
                  {
                      printf("");
                  }

                  else
                  {
                      printf("%3d",arr[i]);
                  }
              }

              printf("\n");



          }

        }





        }


    }



