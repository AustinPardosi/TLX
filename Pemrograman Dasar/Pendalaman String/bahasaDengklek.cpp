#include <cstdio>
#include <string>

using namespace std;

int main() {
    char kata[101];
    scanf("%s", kata);
    string s1;
    s1 = kata;

    'A';
    for(int i=0; i<s1.length(); i++) {
        if(s1[i] >= 'a' && s1[i] <= 'z') {
            s1[i] -= ('a' - 'A');
        } else if (s1[i] >= 'A' && s1[i] <= 'Z') {
            s1[i] += ('a' - 'A');
        }
    }

    printf("%s", s1.c_str());
}