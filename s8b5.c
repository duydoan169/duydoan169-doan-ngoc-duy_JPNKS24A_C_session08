#include <stdio.h>
int main(){
    int cols=0, rows=0, tong = 0;
    do{
        printf("nhap so hang trong mang: ");
        scanf("%d", &rows);
        printf("nhap so cot trong mang: ");
        scanf("%d", &cols);
    }while(cols<=0 || rows<=0 );

    int array[rows][cols];
    for(int i=0; i < rows; i++){
        for(int j=0; j < cols; j++){
            printf("nhap phan tu hang %d cot %d: ", i+1, j+1);
            scanf("%d", &array[i][j]);
            if(i==0 || i==rows-1 || j==0 || j==cols-1){
                tong=tong+array[i][j];
            }
            }
    }
    printf("tong cac phan tu tren duong bien cua ma tran la: %d", tong);
    return 0;
}