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


    for(j=4;j>=0;j--){
            {
            for(i=4;i>=0;i--)
        printf("%c",arr[i][j]);
        }
        printf("\n");


    }




}
