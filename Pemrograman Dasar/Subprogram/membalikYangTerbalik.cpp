#include <cstdio>

int reverse(int x) {
    int temp = x;
    int ret  = 0;

    while (temp > 0) {
        ret  = (ret * 10) + (temp % 10);
        temp = temp / 10;
    }

    return ret;
}

int main() {
    int a1, b1, c1, a2, b2, c2;
    scanf("%d %d", &a1, &b1);

    a2 = reverse(a1);
    b2 = reverse(b1);
    c1 = a2 + b2;
    printf("%d", reverse(c1));
}