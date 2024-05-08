#include <stdio.h>

int main(){
    int m1,n1,m2,n2;
    printf("enter the row of matrix 1=");
    scanf("%d",&m1);
    printf("enter the column of matrix 1=");
    scanf("%d",&n1);
    printf("enter the row of matrix 2=");
    scanf("%d",&m2);
    printf("enter the column of matrix 2=");
    scanf("%d",&n2);
    if(n1==m2){
        printf("the matrix is compatible\n");
        int matrix1[10][10],matrix2[10][10],result[10][10];
        printf("enter elements of matrix1 \n");
        for ( int i=0;i<m1;i++){
            for(int j=0;j<n1;j++){
                scanf("%d",&matrix1[i][j]);
            }
        }
        printf("\n");
        printf("enter elements of matrix 2\n");
        for ( int i=0;i<m2;i++){
            for(int j=0;j<n2;j++){
                scanf("%d",&matrix2[i][j]);
            }
            printf("\n");
        }
        for ( int i=0;i<n1;i++){
            for(int j=0;j<m2;j++){
                result[i][j]=0;
                for(int k=0;k<n1;k++){
                    result[i][j]+=matrix1[i][k]*matrix2[k][j];
                }
            }
        }
        printf("resultant matrix is \n");
        for ( int i=0;i<m1;i++){
            for(int j=0;j<n2;j++){
                printf("%d\t",result[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("matrix multiplication is not compatible");
    }


    return 0;
}




