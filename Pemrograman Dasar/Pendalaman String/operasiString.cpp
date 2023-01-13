#include <cstdio>
#include <string>

using namespace std;

int main() {
    char kata1[101];
    char kata2[101];
    char kata3[101];
    char kata4[101];
    scanf("%s", kata1);
    scanf("%s", kata2);
    scanf("%s", kata3);
    scanf("%s", kata4);

    string s1, s2, s3, s4;
    s1 = kata1;
    s2 = kata2;
    s3 = kata3;
    s4 = kata4;

    s1.erase(s1.find(s2), s2.length());
    s1.insert(s1.find(s3)+s3.length(), s4);
    printf("%s", s1.c_str());
}