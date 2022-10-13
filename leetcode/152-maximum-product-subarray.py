from typing import List
'''
152. Maximum Product Subarray
https://leetcode.com/problems/maximum-product-subarray/

Given an integer array nums, find a contiguous non-empty subarray within the array that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.

A subarray is a contiguous subsequence of the array.

 

Example 1:

Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
Example 2:

Input: nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
 

Constraints:

1 <= nums.length <= 2 * 10^4
-10 <= nums[i] <= 10
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
'''
def maxProduct(nums: List[int]) -> int:
    """
    Kadane's Algorithm - https://en.wikipedia.org/wiki/Maximum_subarray_problem#Kadane's_algorithm
    >>> maxProduct([2,3,-2,4])
    6
    >>> maxProduct([-2,0,-1])
    0
    >>> maxProduct([1])
    1
    >>> maxProduct([-2])
    -2
    >>> maxProduct([-2,3,-4])
    24
    >>> maxProduct([1,-2,-3,0,7,-8,-2])
    112
    """
    current_max = nums[0]
    max_untill_now = nums[0]
    min_until_now = nums[0]

    for num in nums[1:]:
        temp = max(max(num, num * current_max), num * min_until_now)
        min_until_now = min(min(num, num * current_max), num * min_until_now)
        current_max = temp
        max_untill_now = max(current_max, max_untill_now)
    return max_untill_now


if __name__ == '__main__':
    import doctest ; doctest.testmod()
