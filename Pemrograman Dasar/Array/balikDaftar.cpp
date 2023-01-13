#include <cstdio>

int main() {
    int temp, x;
    int arr[100001];

    x = 0;
    while(scanf("%d", &temp) != EOF) {
        arr[x] = temp;
        x++;
    }

    for(int i=x-1; i>=0; i--) {
        printf("%d\n", arr[i]);
    }
}