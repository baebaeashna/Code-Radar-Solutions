#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    float sum=a+b+c;
    float avg=sum/3.0;
    printf("Average: %.2f",avg);
    return 0;
}