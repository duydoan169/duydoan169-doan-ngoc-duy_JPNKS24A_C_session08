#include<stdio.h>
int main(){
    int check=0, phanTu, array[2][3]={
                                      {1,2,3},
                                      {4,5,6}
                                     };
    printf("nhap phan tu muon tim: ");
    scanf("%d", &phanTu);
    for(int i=1; i>=0; i--){
        for(int j=2; j>=0; j--){
            if(array[i][j] == phanTu){
                printf("vi tri phan tu trong mang la: array[%d][%d]", i, j);
                check=1;
            }
        }
    }
    if(check==0){
        printf("phan tu khong ton tai trong mang");
    }

    return 0;
}