#include<stdio.h>

    //return
    int add(int a,int b);
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int sum=add(a,b);
    printf("%d",sum);

    return 0;
}
int add(int a,int b){

    return a+b;
}
