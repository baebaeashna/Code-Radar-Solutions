#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        char ch=(char)j+64;
            printf("%c ",ch);
        } 
    printf("\n");
    }
    return 0;
}