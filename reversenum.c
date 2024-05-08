#include<stdio.h>
int main(){
    int num,rem,reverse;
    printf("enter a number");
    scanf("%d",&num);
    while(num>0){
        rem=num%10;
        reverse=reverse*10+rem;
        num/=10;
    }

    printf("reverse number is %d ",reverse);
    return 0;
}
