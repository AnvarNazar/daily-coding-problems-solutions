//
// Created by anvar on 20/06/20.
//

/* Given an array of integers, return a new array such that each element at index i of the new array
 * is the product of all the numbers in the original array except the one at i. For example, if our
 * input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was
 * [3, 2, 1], the expected output would be [2, 3, 6].
 *
 * Follow-up: what if you can't use division?
 * */

#include <iostream>
#include <vector>

// solution 1 with division
std::vector<int> arrayProduct(const int *inputArray, int length) {
    std::vector<int> output;
    int product = 1;
    for (int i = 1; i < length; ++i) {
        product *= inputArray[i];
    }
    for (int i = 0; i < length; ++i) {
        const int arrayProduct = product / inputArray[i];
        output.push_back(arrayProduct);
    }
    return output;
}

int main() {
    const int array[5] = {1, 2, 3, 4, 5};
    std::vector<int> output = arrayProduct(array, 5);
    for (auto num : output) {
        std::cout << num << std::endl;
    }
    return 0;
}
