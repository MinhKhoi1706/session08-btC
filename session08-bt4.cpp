#include <stdio.h>

int main() {
    int a[3][3] = {{6, 9, 3},{4, 7, 12},{7, 16, 8}};
    int max = a[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    
    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}

