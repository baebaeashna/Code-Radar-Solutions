#include <stdio.h>
int main(){
    int a,b;
    char o;
    scanf("%d%d",&a,&b);
    scanf("%c",&o);
    if(a+b)
    printf("%d",a+b);
    else if(a-b)
    printf("%d",a-b);
    else if(a*b)
    printf("%d",a*b);
    else if(a/b)
    printf("%d",a/b);
    else
    printf(error);
    return 0;
}