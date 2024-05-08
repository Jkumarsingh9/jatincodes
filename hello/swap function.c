#include<stdio.h>
void swap(int ,int);

void swap(int *a,int *b){
    int temp=*b;
    *b=*a;
    *a=temp;
}

int main(){
    int a,b;

    printf("enter first number and second number is");
    scanf("%d%d",&(*a),&(*b));
    printf("numbers before swap is:%d and %d",*a,*b);
    swap(a,b);
    printf("after swapping ,numbers are %d and %d",*a,*b);
    return 0;
}

