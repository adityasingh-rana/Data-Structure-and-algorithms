// Given an array nums of n integers, find the most frequent element in it i.e., the element that occurs the maximum number of times. If there are multiple elements that appear a maximum number of times, find the smallest of them.



// Please note that this section might seem a bit difficult without prior knowledge on what hashing is, we will soon try to add basics concepts for your ease! If you know the concepts already please go ahead to give a shot to the problem. Cheers!


// Examples:
// Input: nums = [1, 2, 2, 3, 3, 3]

// Output: 3

// Explanation: The number 3 appears the most (3 times). It is the most frequent element.

// Input: nums = [4, 4, 5, 5, 6]

// Output: 4

// Explanation: Both 4 and 5 appear twice, but 4 is smaller. So, 4 is the most frequent element.

// Input: nums = [2, 4, 3, 2, 5, 4]

// Output:
// 2
// Constraints:
// 1 <= n <= 105
// 1 <= nums[i] <= 104

// SOLUTION LOGIC:

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        int maxElement = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            maxElement = max(maxElement,nums[i]);
        }
        int hashTable[maxElement + 1] = {0};
        for(int i = 0; i < nums.size(); i++){
            hashTable[nums[i]]++;
        }
        int maxHash = INT_MIN;
        int answer = 0;
        for(int i = 0; i <= maxElement; i++){
            if(maxHash < hashTable[i]){
                maxHash = hashTable[i];
                answer = i;
            }
        }
        return answer;
    }
};

// Time Complexity: O(n + m) where n is the size of the array and m is the largest element in the array.
// Space Complexity: O(m)