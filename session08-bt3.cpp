#include <stdio.h>

int main() {
    int n;
    
    printf("nhap vao mot so nguyen: ");
    scanf("%d", &n);
    
    int a[n][n];
    
    printf("nhap matrix \n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("nhap phan tu a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("cac phan tu trong ma tran la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

