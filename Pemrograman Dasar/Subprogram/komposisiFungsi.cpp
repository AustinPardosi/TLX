#include <cstdio>
#include <cmath>

int func(int i, int j, int l) {
    int final;
    final = abs(i*l+j);
    return final;
}

int main() {
    int a, b, k, x;
    scanf("%d %d %d %d", &a, &b, &k, &x);

    int hasil;
    hasil = abs(a*x+b);

    for(int i=1; i<k; i++) {
        x = hasil;
        hasil = func(a,b,x);
    }
    printf("%d", hasil);
}