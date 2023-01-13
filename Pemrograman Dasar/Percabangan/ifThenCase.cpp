#include <cstdio>

int main() {
    int a;

    scanf("%d", &a);

    if ((a/10)<=0) {
        printf("satuan");
    } else if ((a/100)<=0) {
        printf("puluhan");
    } else if ((a/1000)<=0) {
        printf("ratusan");
    } else if ((a/10000)<=0) {
        printf("ribuan");
    } else if ((a/100000)<=0) {
        printf("puluhribuan");
    }
}