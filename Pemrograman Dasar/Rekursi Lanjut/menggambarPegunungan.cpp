#include <cstdio>
#include <string>

using namespace std;

string pegunungan(int N) {
    if(N == 1) {
        return "*";
    } else {
        string x="*";
        for(int i=2; i<=N; i++) {
            x+="*";
        }
        return pegunungan(N-1) + '\n' + x + '\n' + pegunungan(N-1);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    string s1;
    s1 = pegunungan(N);
    printf("%s", s1.c_str());
}