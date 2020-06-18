//
// Created by anvar on 18/06/20.
//

/* Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
 * For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
 * Bonus: Can you do this in one pass?
 * */

#include <iostream>
#include <map>

int main() {
    int nums[4]{10, 15, 13, 7};
    int sum = 28;
    std::map<int, int> traversedNumbers;

    for (int i = 0; i < 4; ++i) {
        int num = nums[i];
        try {
            const int num2 = nums[traversedNumbers.at(sum - num)];
            std::cout << "Numbers found: " << num2 << " + " << num << " = " << sum << std::endl;
        } catch (std::out_of_range &exception) {
            traversedNumbers.insert(std::make_pair(num, i));
        }
    }
}
