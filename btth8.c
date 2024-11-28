#include <stdio.h>
int main(){
    int tong=0, tich=1, array[2][3];
    for(int i=0; i < 2; i++){
        for(int j=0; j < 3; j++){
            printf("nhap phan tu hang %d cot %d: ", i+1, j+1);
            scanf("%d", &array[i][j]);
            tong=tong+array[i][j];
            tich=tich*array[i][j];
        }
    }
    printf("tong cac phan tu la %d\n", tong);
    printf("tich cac phan tu la %d\n", tich);

    return 0;
}