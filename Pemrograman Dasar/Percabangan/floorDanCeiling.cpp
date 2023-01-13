#include <cstdio>
#include <cmath>

int main() {
    double a;
    int b;

    scanf("%lf", &a);
    b = trunc(a);
    if (b-a!=0){
        if (a<0) {
            printf("%d\n", b-1);
            printf("%d", b);
        } else if (a>0) {
            printf("%d\n", b);        
            printf("%d", b+1);
        }
    } else {
        printf("%d\n", b);
        printf("%d", b);
    }
}