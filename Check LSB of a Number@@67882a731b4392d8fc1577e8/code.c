#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int lsb= a & 1;
    printf("%d\n",lsb);
    return 0;
}