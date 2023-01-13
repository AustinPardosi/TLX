#include <cstdio>
#include <cmath>

int main() {
    int a, x;
    scanf("%d", &a);
    for(int i=1; i<=a; i++) {
        scanf("%d", &x);
        if (x==1) {
            printf("YA\n");
        } else {
            bool cek = true;
            int max = 0;
            for(int j=2; j<=sqrt(x); j++) {
                if (x%j==0) {
                    max += 1;
                    if (max==2) {
                        cek = false;
                        break;
                    }
                }
            }
            if (cek) {
                printf("YA\n");
            } else {
                printf("BUKAN\n");
            }
        }
    }
}