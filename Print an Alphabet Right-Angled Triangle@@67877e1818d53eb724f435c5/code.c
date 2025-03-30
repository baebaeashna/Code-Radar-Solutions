#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char ch;
            j=j+64;
            char=(char)j
            printf("%c ",char);
        } 
    printf("\n");
    }
    return 0;
}