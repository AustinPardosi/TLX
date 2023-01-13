#include <cstdio>

int main() {
    int x1,y1,x2,y2,hasil1,hasil2,final;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    hasil1 = x1-x2;
    if(hasil1<0) {
        hasil1 *= -1;
    }
    hasil2 = y1-y2;
    if(hasil2<0) {
        hasil2 *= -1;
    }
    printf("%d", hasil1+hasil2);
}