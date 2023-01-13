#include <cstdio>

int main() {
    int a, x;
    scanf("%d", &a);
    for(int i=a; i>0; i--){
        if (a%i==0) {
            printf("%d\n", i);
        }
    }
}