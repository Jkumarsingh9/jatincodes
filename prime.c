#include<stdio.h>
int main(){
    int num;
    printf("enter a number");
    scanf("%d",&num);
    for( int i=2;i<=num;i++){
        if (i%num==0){
            printf("no");
            break;
        }
        else{
            printf("prime");
        }
    }
    return 0;
}
