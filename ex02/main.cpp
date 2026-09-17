#include "Array.hpp"

int main(void){
    // default constructor: empty array
    Array<int> empty;
    std::cout << "empty.size() = " << empty.size() << std::endl;

    // constructor with n: default-initialized elements
    Array<int> nums(5);
    std::cout << "nums.size() = " << nums.size() << std::endl;
    for (unsigned int i = 0; i < nums.size(); i++)
        std::cout << "nums[" << i << "] = " << nums[i] << std::endl;

    // write through operator[]
    for (unsigned int i = 0; i < nums.size(); i++)
        nums[i] = i * 10;
    std::cout << "after writes:" << std::endl;
    for (unsigned int i = 0; i < nums.size(); i++)
        std::cout << "nums[" << i << "] = " << nums[i] << std::endl;

    // copy constructor: deep copy check
    Array<int> copyOfNums(nums);
    copyOfNums[0] = 999;
    std::cout << "nums[0] = " << nums[0] << " (should be unchanged)" << std::endl;
    std::cout << "copyOfNums[0] = " << copyOfNums[0] << " (should be 999)" << std::endl;

    // assignment operator: deep copy check
    Array<int> assigned;
    assigned = nums;
    assigned[1] = 777;
    std::cout << "nums[1] = " << nums[1] << " (should be unchanged)" << std::endl;
    std::cout << "assigned[1] = " << assigned[1] << " (should be 777)" << std::endl;

    // self-assignment should be a no-op, not a crash
    assigned = assigned;
    std::cout << "assigned[1] after self-assign = " << assigned[1] << std::endl;

    // const correctness: reading through a const reference
    const Array<int> &constNums = nums;
    std::cout << "constNums[2] = " << constNums[2] << std::endl;
    // constNums[2] = 1; // would not compile: operator[] const returns const T&

    // out of bounds on non-const array
    try {
        nums[nums.size()] = 1;
        std::cout << "ERROR: no exception thrown" << std::endl;
    } catch (const std::exception &e) {
        std::cout << "caught: " << e.what() << std::endl;
    }

    // out of bounds on const array
    try {
        std::cout << constNums[100] << std::endl;
        std::cout << "ERROR: no exception thrown" << std::endl;
    } catch (const std::exception &e) {
        std::cout << "caught: " << e.what() << std::endl;
    }

    // works with a non-primitive type too
    Array<std::string> words(3);
    words[0] = "hello";
    words[1] = "world";
    words[2] = "42";
    for (unsigned int i = 0; i < words.size(); i++)
        std::cout << "words[" << i << "] = " << words[i] << std::endl;

    return 0;
}
