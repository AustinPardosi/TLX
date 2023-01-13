#include <cstdio>

int main() {
    int a, max, min, x;
    scanf("%d", &a);
    scanf("%d", &max);
    min = max;
    for(int i=1; i<a; i++) {
        scanf("%d", &x);
        if (x>max) {
            max = x;
        } if (x<min) {
            min = x;
        }
    }
    printf("%d ", max);
    printf("%d", min);
}