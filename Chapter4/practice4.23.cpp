#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "word";
    string p1 = s + s[s.size()-1] == "s" ? "" : "s"; 
    printf("p1=%s\n", p1.c_str());
    return 0;
}