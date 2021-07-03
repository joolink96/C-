
#include <stdio.h>

int swap(char *a,char *b)
{
    char c[10]="";
    char *z=c;

     z=a;

     a=b;

     b=z;




}



int main()
{
    char a[10]="keyboard";
    char b[10]="mouse";
    swap(a,b);

    printf("%s \n%s",a,b);





}
