#include <cstdio>

int main() {
    int a, sum, x;
    scanf("%d", &a);
    sum = 0;
    for(int i=0; i<a; i++) {
        scanf("%d", &x);
        sum += x;
    }
    printf("%d", sum);
}