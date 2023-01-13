#include <cstdio>

int main() {
    int N,M,P,temp;
    scanf("%d %d %d", &N, &M, &P);
    int arr1[N][M];
    int arr2[M][P];
    int hasil[N][P];

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    for(int i=0; i<M; i++) {
        for(int j=0; j<P; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<P; j++) {
            hasil[i][j] = 0;
            for(int k=0; k<M; k++) {
                hasil[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<P; j++) {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }

}
