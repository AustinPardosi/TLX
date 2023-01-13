#include <cstdio>

int main() {
    int a, x;
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    scanf("%d", &a);
    x = 0;
    for(int i=0; i<a; i++) {
        for(int j=0; j<i+1; j++) {
            if (x>9) {
                x -= 10;
            }
            printf("%d", arr[x]);
            x++;
        }
        printf("\n");
    }
}