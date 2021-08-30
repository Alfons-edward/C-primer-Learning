#include <stdio.h>
#include <string>
using namespace std;

string sa[10];
int ia[10];

int main(int argc, char const *argv[])
{
    string empty;
    printf("empty=%s\n", empty);//empty打印是个随机值
    string sa2[10];
    int ia2[10];
    for (int i = 0; i < 10; i ++){
        printf("sa=%d,sa2=%d\n", sa[i], sa2[i]);//empty string，size of every string is 1k,32bit compiler can see put 32
        printf("ia=%d,ia2=%d\n", ia[i], ia2[i]);
    }
    return 0;
}
