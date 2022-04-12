#include <stdio.h>

int main(){
    const int row = 15;
    const int col = 10;
    int arr[col][row];
    for(int i = 0;i < col; i++){
        for(int j = 0;j < row; j++){
            arr[i][j] = 0;
        }
    }
    int x = 0;
    for(int i = 0;i < col; i++){
        if(i%2 ==0){
            for(int j = 0;j < row; j++){
                x += 1;
                arr[i][j] = x;
                
            }
        }
        else{
            for(int j = row - 1;j >= 0; j--){
                x += 1;
                arr[i][j] = x;
            }
        }
    }
    for(int i = 0;i < col; i++){
        for(int j = 0;j < row; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
