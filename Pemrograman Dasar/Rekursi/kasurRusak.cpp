#include <cstdio>
#include <string>

using namespace std;

bool palindrom(string s) {
    int n = s.length();
    if(n==0) {
        return true;
    } else {
        return (s[0] == s[n-1]) && palindrom(s.substr(1, n-2));
    }
}

int main() {
    char kata[101];
    scanf("%s", kata);
    string s1;
    s1 = kata;
    bool hasil;
    hasil = palindrom(s1);

    if(hasil) {
        printf("YA");
    } else {
        printf("BUKAN");
    }

}