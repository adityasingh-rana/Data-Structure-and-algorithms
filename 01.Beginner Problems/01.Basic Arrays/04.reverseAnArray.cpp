// Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.


// Examples:
// Input: n=5, arr = [1,2,3,4,5]



// Output: [5,4,3,2,1]



// Explanation: The reverse of the array [1,2,3,4,5] is [5,4,3,2,1]

// Input: n=6, arr = [1,2,1,1,5,1]



// Output: [1,5,1,1,2,1]



// Explanation: The reverse of the array [1,2,1,1,5,1] is [1,5,1,1,2,1].

// Input: n=3, arr = [1,2,1]

// Output:
// [1,2,1]
// Constraints:
// 1 <= n <= 104

// 1 <= arr[i] <= 105

// SOLUTION LOGIC:

class Solution {
   public:
    void reverse(int arr[], int n) {
        for (int i = 0; i < n/2; i++){
            swap(arr[i],arr[n-1-i]);
        }
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)
