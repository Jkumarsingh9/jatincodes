#include<stdio.h>
int main(){
    int i,n;
    printf("enter a number");
    scanf("%d",&n);
    for( i=2;i<n;i++){
        if(n%i==0){
            printf(" not prime");

        }
        else{
            printf(" prime");
        }
        break;
    }
    return 0;
}
