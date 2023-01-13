#include <cstdio>

int main() {
    int a;
    scanf("%d", &a);
    while (a>=2 && a%2==0) {
        a/=2;
    }
    if (a==1) {
        printf("ya");
    } else {
        printf("bukan");
    }
}