#include <stdio.h>
int isprime(int a){
    if(a==0 && a==1)
    printf("Not Prime");
    else if(a==2 || a==7)
    printf("Prime");
    else if(a%2==0)
    printf("Not Prime");
    else if(a%3==0)
    printf("Not Prime");
    else if(a%5==0)
    printf("Not Prime");
    else if(a%7==0)
    printf("Not Prime");
    else if(a%11==0)
    printf("Not Prime");
    else
    printf("Prime");
}
int main() {
    int n;
    scanf("%d",n);
    isprime(n)
 return 0;
}