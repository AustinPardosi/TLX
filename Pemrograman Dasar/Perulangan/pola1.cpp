#include <cstdio>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i=1; i<=a; i++) {
        if (i%b==0) {
            printf("* ");
        } else {
            printf("%d ", i);
        }
    }
}