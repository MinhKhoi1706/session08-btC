#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

