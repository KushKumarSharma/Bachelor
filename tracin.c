#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter matrix size (n x n): ");
    scanf("%d", &n);
    
    int mat[n][n];
    if(n!=n){
    	printf("this matrix cant be tracing ");
	}
    
   
    printf("Enter elements:\n");
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            scanf("%d", &mat[i][j]);
		}
		printf("\n");
		}
		   
    printf("\nMatrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    
    
    int trace = 0;
    for (i = 0; i < n; i++)
        trace += mat[i][i];  
    
    printf("\nTrace = %d\n", trace);
    
    return 0;
}
