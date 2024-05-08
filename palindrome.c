#include<stdio.h>
int main(){
    int num,reverse=0;
    printf("enter a number");
    scanf("%d",&num);
    int original=num;
    while(num>0){
        int rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
    }
    if(original==reverse){
        printf("yes palindrome");
    }
    else{
        printf("no");
    }
    return 0;
}
