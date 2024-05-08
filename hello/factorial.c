#include<stdio.h>
void main(){

    int i,n,fac=1;
    printf("enter number");
    scanf("%d",&n);
    for (i=n;i>=1;i--){
        fac=fac*i;

    }
    printf("factorial of %d is %d",n,fac);
    return 0;
}
