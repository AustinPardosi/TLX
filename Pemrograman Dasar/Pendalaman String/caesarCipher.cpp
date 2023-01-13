#include <cstdio>
#include <string>

using namespace std;

int main() {
    char kata[101];
    scanf("%s", kata);

    string s1;
    s1 = kata;
    int panjang = s1.length();

    int K;
    scanf("%d", &K);
    for(int i=0; i<panjang; i++) {
        if((s1[i] + K) >= ('a' + 26)) {
            s1[i] = s1[i] + K - 26;
        } else {
            s1[i] += K; 
        }
    }

    printf("%s", s1.c_str());
}