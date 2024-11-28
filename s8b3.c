#include <stdio.h>
int main(){
    int tong=0, tich=1, size;
    do{
        printf("nhap kich co mang: ");
        scanf("%d", &size);
    }while(size<=0);
    int array[size][size];
    for(int i=0; i < size; i++){
        for(int j=0; j < size; j++){
            printf("%d ", size);
        }
        printf("\n");
    }
    return 0;
}