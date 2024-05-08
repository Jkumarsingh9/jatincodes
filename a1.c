#include<stdio.h>
int main(){
    int first,second,third,n,i;
    first=0;second=1;
    printf("enter nth term");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        third=first+second;
        printf("%d\n",third);
        first=second;
        second=third;
        if(i==(n-2)){
            printf("%d",third);
        }
    }
    return 0;;
}
