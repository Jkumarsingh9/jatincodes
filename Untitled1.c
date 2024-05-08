#include<stdio.h>
#include<stdbool.h>
int isprime(int num, int div){
    if(num<=1){
        return false;
    }
    if(div==1){
        return true;
    }
    if(num%div==0){
        return false;
    }
    return isprime(num,div-1);
}

int main(){
    int num;
    printf("enter any number");
    scanf("%d",&num);
    if (isprime(num,num/2)){
        printf("prime number");
    }
    else{
        printf("not prime");
    }
    return 0;
}
