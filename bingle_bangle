#include <stdio.h>

int main(){
    const int row = 10;
    const int col = 10;
    int arr[col][row];
    for(int i = 0;i < col; i++){
        for(int j = 0;j < row; j++){
            arr[i][j] = 0;
        }
    } //먼저 0으로 이니셜라이징(initializing)
    // 해버렸다....
    
    int turn = 0;
    int count = 0;
    while(count < col * row){
        // right
        for(int j = 0 + turn; j < row - turn; j++){
            count += 1;
            arr[turn][j] = count;
        }
        
        // down
        for(int i = 1 + turn; i < col - turn; i++){
            count += 1;
            arr[i][row - 1 - turn] = count;
        }
        
        // left
        for(int j = row - 2 - turn; j >= 0 + turn; j--){
            count += 1;
            arr[col - 1 - turn][j] = count;
        }
        
        // up
        for(int i = col - 2 - turn; i >= 1 + turn; i--){
            count += 1;
            arr[i][turn] = count;
        }
        turn += 1;
    }
    for(int i = 0;i < col; i++){
        for(int j = 0;j < row; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
