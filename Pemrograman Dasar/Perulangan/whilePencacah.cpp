#include <cstdio>

int main() {
    int a, sum=0;
    while(scanf("%d", &a) != EOF) {
        sum += a;
    }
    printf("%d", sum);
}