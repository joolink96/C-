#include <stdio.h>
#include <string.h>


int main()
{

    char arr[5][5]={'4',' ',' ',' ',' ',
    '4',' ',' ','4',' ',
    '4',' ',' ','4',' ',
    '4','4','4','4','4'
    ,' ',' ',' ','4',' '};

    int i,j;


    for(i=0;i<5;i++){
            {
            for(j=0;j<5;j++)
        printf("%c",arr[i][j]);
        }
        printf("\n");


    }




}
