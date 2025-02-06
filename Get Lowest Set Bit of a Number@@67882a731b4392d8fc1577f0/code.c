#include <stdio.h>
int findlow(int num){
    if(num==0){
        return -1;
    }
    int finlow=num & -num;
    int pos=0;
    while(findflow >>=1){
        pos++;
    }
    return pos;
}
int main(){
    int num;
    scanf("%d",&num);
    int pos = findflow(num);
    if(pos==1){
        printf("No\n");
    }
    else{
        printf("%d\n",pos);
    }
}