#include <cstdio>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int matr[R][C];

    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            scanf("%d", &matr[i][j]);
        }
    }

    for(int i=0; i<C; i++) {
        for(int j=R-1; j>=0; j--) {
            printf("%d ", matr[j][i]);
        }
        printf("\n");
    }
}