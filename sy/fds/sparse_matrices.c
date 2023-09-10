#include<stdio.h>
 
#define MAX 20

void readsparse(int b[MAX][3]){
    int i,t;
    printf("\nenter no. of non-zero elements:");
    scanf("%d",&t);
    b[0][2]=t;
    for(i=1;i<=t;i++){
        printf("\nenter row: ");
        scanf("%d",&b[i][0]);
        printf("\nenter column: ");
        scanf("%d",&b[i][1]);
        printf("\nenter value: ");
        scanf("%d",&b[i][2]);
        printf("\n");
    }
}

void printsparse(int b[MAX][3]){
    int i,n;
    n=b[0][2];
    printf("\ntranspose: \n");
    printf("\nrow\t\tcolumn\t\tvalue\n");
    for(i=1;i<=n;i++){
        printf("%d\t\t%d\t\t%d\n",b[i][0],b[i][1],b[i][2]);
    }
}

void transpose(int b1[][3],int b2[][3]){
    int k,n;
    b2[0][0]=b1[0][1];
    b2[0][1]=b1[0][0];
    b2[0][2]=b1[0][2];
    k=1;
    n=b1[0][2];
    for(int i=1;i<=b1[0][1];i++){
        for(int j=1;j<=n;j++){
            if(i==b1[j][1]){
                b2[k][0]=i;
                b2[k][1]=b1[j][0];
                b2[k][2]=b1[j][2];
                k++;
            }
        }
    }
}
 
int main(){
    int b1[MAX][3],b2[MAX][3],m,n;
    printf("enter the size of matrix\nrows: ");
    scanf("%d",&m);
    printf("\ncolumns: ");
    scanf("%d",&n);
    printf("\n\n");
    b1[0][0]=m;
    b1[0][1]=n;
    readsparse(b1);
    transpose(b1,b2);
    printsparse(b2);
}