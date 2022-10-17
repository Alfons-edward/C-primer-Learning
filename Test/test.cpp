#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;

uint func() {
    printf("helloworld");
    return 0;
}
int main(int argc, char const *argv[])
{
    //Everyone stuied the coding languge like to print the "hello world" first time 
    // printf("hello world\n");
    // char *env = getenv("SHELL");
    // printf("env=%s", env);
    // string str("");
    // cout << str.size() << endl;
    // char *cstr = "";
    // cout << strlen(cstr) << endl; 
    // char *cstr1 = "\0";
    // cout << strlen(cstr1) << endl;
    // char *cstr2 = "hello";
    // cout << strlen(cstr2) << endl;
    // char cstr3[] = "hello";
    // cout << strlen(cstr3) << endl;

    // for (auto i : cstr3){
    //     cout << i << endl;
    // }
    // int x[10], *p = x;
    // printf("%lu\n",sizeof(x));
    // printf("%lu\n",sizeof(*x));
    // printf("%lu\n",sizeof(p));
    // printf("%lu\n",sizeof(*p));

    // int x = 0, y = 1;
    // printf("%lu\n",sizeof x + y);
    printf("%lu\n",sizeof func());
    // printf("%lu\n",sizeof(*x));
    uint a = -1;
    printf("%u\n", a);
    return 0;
}
