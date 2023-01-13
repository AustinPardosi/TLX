#include <cstdio>
#include <cmath>
#include <string>

int main() {
    int a, x;
    scanf("%d", &a);
    for(int i=1; i<=a; i++) {
        scanf("%d", &x);
        if (x==1) {
            printf("BUKAN\n");
        } else {
            bool cek = true;
            for(int j=2; j<=sqrt(x); j++) {
                if (x%j==0) {
                    cek = false;
                    break;
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