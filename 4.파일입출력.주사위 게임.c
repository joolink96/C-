#include <stdio.h>

int main()

{

int i,j;
int n;
int a[1000],b[1000],c[1000];
int result;
 scanf("%d",&n);

for(i=0;i<n;i++)
    scanf("%d %d %d",&a[i],&b[i],&c[i]);

    for(i=0;i<n;i++){
        if(a[i]==b[i]&&b[i]==c[i])

        result=10000+a[i]*1000;
    }

   printf("%d",result);


}
