#include<stdio.h>
int main(){
    int name[50];
    for(int i=0;i<5;i++){
        scanf("%d",&name[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d",name);
    }
    //printf("%c",name[2]);
    return 0;
}
