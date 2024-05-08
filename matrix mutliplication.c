#include<stdio.h>
int main(){
    int m1,n1,m2,n2;

    printf("enter the number of rows and column for first matrices:\n");
    scanf("%d%d",&m1,&n1);

    printf("enter the number of rows and column for second matrices:\n");
    scanf("%d%d",&m2,&n2);

    if (n1!= m2){
        printf("matrix multiplication is not possible");
        }
    else{
                printf("matrix is possible ");
        int matrix1[m1][n1],matrix2[m2][n2],result[m1][n2],i,j,k;
        printf("enter number of %dx%d matrix\n",m1,n1);
        for(i=0;i<m1;i++){
            for(j=0;j<n1;j++){
                scanf("%d",&matrix1[i][j]);
            }
            printf("\n");
    }
    printf("enter number of %dx%d matrix\n",m2,n2);
    for(i=0;i<m2;i++){
            for(j=0;j<n2;j++){
                scanf("%d",&matrix2[i][j]);
            }
            printf("\n");
    }
    for(i=0;i<m1;i++){
            for(j=0;j<n2;j++){
                result[i][j]=0;
                for(k=0;k<n1;k++){
                        result[i][j]=result[i][j]+matrix1[i][k]*matrix2[k][j];
                }
            }
    }
    printf("multiplication of two matrices is:\n");
    for(i=0;i<m1;i++){
            for(j=0;j<n2;j++){
                printf("%d\t",result[i][j]);
            }
            printf("\n");
    }
    return 0;
        }
}




