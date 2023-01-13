#include <cstdio>
#include <string>

using namespace std;

int main() {
    char kata[101];
    scanf("%s", kata);
    string s1;
    s1 = kata;
    string insert = "_";

    if (s1.find(insert) != -1) {
        for(int i=0; i<s1.length(); i++) {
            if(s1[i]=='_') {
                s1.erase(i,1);
                if(s1[i]>='a' && s1[i]<='z') {
                    s1[i] -= ('a'-'A');
                }
            }
        }
    } else{
        for(int i=0; i<s1.length(); i++) {
            if(s1[i]!='_' && (s1[i]>='A' && s1[i]<='Z')) {
                s1.insert(i,insert);
                if(s1[i+1]>='A' && s1[i+1]<='Z') {
                    s1[i+1] += ('a'-'A');
                }
            }
        }
    }

    printf("%s", s1.c_str());
}