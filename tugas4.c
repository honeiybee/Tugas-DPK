#include <stdio.h>

#define N 4

int main(void) {
    /* matriks A (4x4) */
    int a[N][N] = {
        {2, 1, 3, 1},
        {1, 4, 2, 3},
        {3, 2, 1, 4},
        {4, 3, 2, 1}
    };

    int x[N] = {1, 2, 3, 4};

    int hasil[N];

    for (int i = 0; i < N; i++) {
        hasil[i] = 0;
        for (int j = 0; j < N; j++)
            hasil[i] += a[i][j] * x[j];
    }

    printf("Matriks A | Vektor x | Hasil\n");
    printf("---------------------------------\n");
    for (int i = 0; i < N; i++) {
        printf("[ ");
        for (int j = 0; j < N; j++)
            printf("%3d ", a[i][j]);
        printf("] [ %3d ]   [ %4d ]\n", x[i], hasil[i]);
    }

    printf("\nRincian perhitungan:\n");
    for (int i = 0; i < N; i++) {
        printf("x%d = ", i);
        for (int j = 0; j < N; j++) {
            printf("(%d*%d)", a[i][j], x[j]);
            if (j < N - 1) printf(" + ");
        }
        printf(" = %d\n", hasil[i]);
    }

    return 0;
}