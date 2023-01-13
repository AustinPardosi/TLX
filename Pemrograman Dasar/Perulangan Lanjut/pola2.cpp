#include <cstdio>

int main() {
    int a;
    scanf("%d", &a);

    for(int i=0; i<a; i++) {
        for(int j=0; j<a-i-1; j++) {
            printf(" ");
        }
        for (int j=a-i-1; j<a; j++) {
            printf("*");
        }
        printf("\n");
    }
}