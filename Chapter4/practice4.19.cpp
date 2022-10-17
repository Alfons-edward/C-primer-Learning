#include <stdio.h>
#include <vector>
#include <iterator>
#include "../define.h"

int main(int argc, char const *argv[])
{
    int *ptr = nullptr, ival = 0;
    std::vector<int> vec{1, 10};
    ptr = &vec[0];

    if (ptr != 0 && *ptr++){
        out("a true");
    }
    out("%d",*ptr);
    // if (ival++ && ival){
    //     out("b true");
    // }

    if (vec[ival++] <= vec[ival]) {
        out("c true");
    }

    std::vector<int>::iterator iter = vec.begin();
    ++*iter;
    // iter.empty();
// 
    return 0;
}
