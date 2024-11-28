#include <stdio.h>
int main(){
    int cols=0, rows=0, lonNhat=0;
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
            if(lonNhat<=array[i][j]){
                lonNhat=array[i][j];
            }
        }
    }
    printf("so lon nhat trong mang vua nhap la: %d", lonNhat);
    return 0;
}