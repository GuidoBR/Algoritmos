from typing import List
'''
53. Maximum Subarray
https://leetcode.com/problems/maximum-subarray/

Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

Example 2:
Input: nums = [1]
Output: 1

Example 3:
Input: nums = [5,4,-1,7,8]
Output: 23
 

Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104
'''
def maxSubArray(nums: List[int]) -> int:
    """
    Kadane's Algorithm - https://en.wikipedia.org/wiki/Maximum_subarray_problem#Kadane's_algorithm
    >>> maxSubArray([-2,1,-3,4,-1,2,1,-5,4])
    6
    >>> maxSubArray([1])
    1
    >>> maxSubArray([5,4,-1,7,8])
    23
    """
    current_max, max_untill_now = 0, -105
    for num in nums:
        current_max = max(num, current_max + num)
        max_untill_now = max(max_untill_now, current_max)
    return max_untill_now


if __name__ == '__main__':
    import doctest ; doctest.testmod()
