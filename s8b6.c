#include <stdio.h>
int main(){
    int size=0, tong = 0;
    do{
        printf("nhap kich thuoc mang: ");
        scanf("%d", &size);
    }while(size<=0);

    int array[size][size];
    for(int i=0; i < size; i++){
        for(int j=0; j < size; j++){
            printf("nhap phan tu hang %d cot %d: ", i+1, j+1);
            scanf("%d", &array[i][j]);
            if(i+j==size-1){
                tong=tong+array[i][j];
            }
            }
    }
    printf("tong cac phan tu tren duong cheo chinh cua ma tran la: %d", tong);
    return 0;
}