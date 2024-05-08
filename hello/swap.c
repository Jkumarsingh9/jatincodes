#include<stdio.h>
void swap(int *,int *);
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a,b;
    printf("enter value of a and b");
    scanf("%d %d",&a,&b);
    printf("before swap,a=%d and b=%d\n",a,b);
    printf("address ,a=%d and b=%d\n",&a,&b);
    swap(&a,&b);
    printf("after swap, a=%d and b=%d",a,b);
    return 0;
}
