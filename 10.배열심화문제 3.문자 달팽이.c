#include <stdio.h>

int main()
{

int arr[10][10]={0};
int i,j;


  char c='A';

  char s;
while(s!=27)
{
    int x=0,y=-1;
  int n=5;
  int cnt=1;

 while(n>0)
 {


   for(i=0;i<n;i++)
       {
           arr[x][++y]=c++;
       }
       n--;

       for(i=0;i<n;i++)
       {
           arr[++x][y]=c++;
       }

       for(i=0;i<n;i++)
       {
           arr[x][--y]=c++;
       }
       n--;

         for(i=0;i<n;i++)
       {
           arr[--x][y]=c++;

       }

 }
       for(i=0;i<5;i++)
       {
           for(j=0;j<5;j++)
           {
               printf("%3c",arr[i][j]);
           }
           printf("\n");
       }


    printf("<space>");
    scanf("%c",&s);

    if(s==32)
    {
        arr[0][0]=arr[2][2];
        arr[];

    }



}



