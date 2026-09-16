#include "iter.hpp"


static void printStr(std::string s){
    std::cout << s << std::endl;
}
static void printNum(int n){
    std::cout << n << std::endl;
}
int main(void){
    std::string arr[4] = {"hello", "world", "42Heilbronn", "42Paris"};
    int nums[5] = {1, 5, 6 ,8};
    size_t len = 4;
    ::iter(arr, len, printStr);
    ::iter(nums, len, printNum);
}