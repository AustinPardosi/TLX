#include <cstdio>
#include <cmath>

int komposisi(int a, int b, int k, int x){
    if (k==1) {
        return abs(a*x+b);
    } else {
        return abs(a * komposisi(a, b, k-1, x) + b);
    }
}

int main() {
    int a, b, k, x, hasil;
    scanf("%d %d %d %d", &a, &b, &k, &x);
    hasil = komposisi(a,b,k,x);
    printf("%d", hasil);
}