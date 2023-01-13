#include <cstdio>

int main() {
    int N, Nmax, loc;
    int frek[1001];

    scanf("%d", &N);

    for(int i=0; i<1001; i++) {
        frek[i] = 0;
    }

    int bil[N];
    Nmax = 0;
    loc = 0;
    for(int i=0; i<N; i++) {
        scanf("%d", &bil[i]);
        frek[bil[i]] += 1;
        if(frek[bil[i]] > Nmax) {
            Nmax = frek[bil[i]];
            loc = bil[i];
        } else if (frek[bil[i]] == Nmax) {
            if (bil[i] > loc) {
                loc = bil[i];
            }
        }
    }

    printf("%d", loc);

}