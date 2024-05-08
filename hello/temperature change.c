#include<stdio.h>
void main(){
    float fahrenheit,celsius,n;
    printf("enter your choice: 1-celsius to fahrenheit and 2-fahrenheit to celsius -");
    scanf("%f",&n);
    if(n==1){
        printf("enter temperature in celsius-");
        scanf("%f",&celsius);
        fahrenheit=(celsius*9/5)+32;
        printf("temperature in fahrenheit is %f",fahrenheit);
    }
    else if (n==2){
            printf("enter temperature in fahrenheit-");
            scanf("%f",&fahrenheit);
            celsius=(fahrenheit-32)*5/9;
            printf("temperature in celsius is %f",celsius);
    }
    else {
        printf("invalid entry");
    }

}
