#pragma once

//Given two arrays, write a function to compute their intersection.
//
//Example:
//Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return[2].
//
//Note :
//    Each element in the result must be unique.
//    The result can be in any order.
//    Subscribe to see which companies asked this question

#include "stdafx.h"
void printdetails(vector<int> nums)
{
    for (int i : nums)
        cout << i << ", ";
    cout << endl;
}

class Solution_349_Intersection_of_Two_Arrays {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        printdetails(nums1);
        printdetails(nums2);

        return vector<int>(2);
    }
};

void Test_Solution_349_Intersection_of_Two_Arrays()
{
    cout << "running Test_Solution_349_Intersection_of_Two_Arrays\n";

    vector<int>nums1 = { 1, 2, 2, 1 };
    vector<int>nums2 = { 2, 2 };
    Solution_349_Intersection_of_Two_Arrays sls;
    sls.intersection(nums1, nums2);
}