#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 0;
    int inputNumber = 0;
    scanf("%d", &n);
    if (!n) {
        printf(0);
    }
    vector<int> vector;
    for (int i = 0; i < n; i++) {
        scanf("%d", &inputNumber);
        vector.push_back(inputNumber);
    }
    
    return 0;
}
