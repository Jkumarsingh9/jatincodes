#include<stdio.h>
int main(){
    int i;
    for (i=1;i<=100;i++){
        if(i%3==0){
            printf("fizz\n");
            if (i%5==0){
                printf("buzz\n");
                if(i%3==0 && i%5==0){
                    printf("fizzbuzz");
                }
                else{
                    printf("\n");
                }
            }
            else{
                    printf("\n");
                }

        }
        else{
                printf("%d",i);
        }
    }
    return 0;
}
