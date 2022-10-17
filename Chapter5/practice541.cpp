#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, next;
    int count = 0;
    int max = 0;
    while(cin >> s) {
        cout << "s=" << s << endl;
        if (!next.length()) {
            next = s;
            continue;
        }
        cout << "next="<< next << endl;
        if (s == next) {
            count ++;
        }

        if (count > max) {
            next = s;
            max = count;
        }
    }

    cout << next << " " << max << endl;

    return 0;
}