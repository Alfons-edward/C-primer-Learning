#include <iostream>
#include <vector>
using namespace std;
int main(){
    //初始化赋值
    int array1[] = {0,1,2,3,4,5,6,7,8,9};

    //循环赋值
    int array[10];
    for (int i = 0; i < 10; i++){
        array[i] = i;
        printf("array[i]=%d ", array[i]);
    }
    printf("\n");
    //拷贝给另外一个数组
    int* array3 = array;
    for (auto value : array){
        printf("array3[i]=%d", value);
    }
    for (int i = 0; i < 10; i++){
        array[i] = i;
        printf("array3[i]=%d ", array[i]);
    }
    printf("\n");

    vector<int> vector1{0,1};
    vector<int> vector2(vector1);
    vector<int> vector3 = vector2;
    for (auto value : vector3){
        printf("vector3[%d]=%d ", value, value);
    }

    return 0;
}