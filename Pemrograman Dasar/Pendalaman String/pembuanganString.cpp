#include <cstdio>
#include <string>

using namespace std;

int main() {
    string s1, s2;
    char buff1[101];
    char buff2[101];

    scanf("%s %s", buff1, buff2);
    s1 = buff1;
    s2 = buff2;

    int posisi;
    int panjang = s2.length();
    while (s1.find(s2) != -1) {
        posisi = s1.find(s2);
        s1.erase(posisi,panjang);
    }

    printf("%s", s1.c_str());

}