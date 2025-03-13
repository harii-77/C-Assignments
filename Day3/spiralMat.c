#include <stdio.h>
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int arr[m][n];
    for(int i=0; i < m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    int left = 0, right = n-1,top =0, bottom = m-1;
    
    while(left <=right && top<=bottom){
        for(int i = left; i<= right; i++) printf("%d ", arr[top][i]);
        top++;
        
        for(int i = top; i<=bottom; i++) printf("%d ", arr[i][bottom]);
        right--;
        
        if(top<=bottom){
            for(int i=right; i>= left; i--) printf("%d ", arr[bottom][i]);
            bottom--;
        }
        
        if(top<=bottom){
            for(int i=bottom; i>= top; i--) printf("%d ", arr[i][left]);
            left++;
        }
    }
}