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
namespace Solution_349
{
    void printdetails(vector<int> nums)
    {
        for (int i : nums)
            cout << i << ", ";
        cout << endl;
    }

    class Solution_349_Intersection_of_Two_Arrays {
    public:
        vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
        {
            //map<int, int> numMap;
            //vector<int> Result;
            //for (int i : nums1)
            //{
            //    int temp = i;
            //    if (numMap.end() == numMap.find(i))
            //        numMap.insert(std::pair<int, int>(temp, 1));

            //}
            //for (int i : nums2)
            //{
            //    if (numMap.find(i) != numMap.end() && numMap[i] != 0)
            //    {
            //        numMap[i] = 0;
            //        Result.push_back(i);
            //    }
            //}

            //return Result;
            if (nums1.size() == 0 || nums2.size() == 0) return vector<int>(0);
            //if (nums1.size() == 0 || nums2.size() == 0) return ((nums1.size() == 0)? nums1: nums2);

            set<int> numSet(nums1.begin(),nums1.end());
            vector<int> Result;

            for (int i : nums2)
            {
                if (numSet.erase(i))
                    Result.push_back(i);
            }

            return Result;
        }
    };

    void Test_Solution_349_Intersection_of_Two_Arrays()
    {
        cout << "running Test_Solution_349_Intersection_of_Two_Arrays\n";

        vector<int>nums1 = { 1, 2, 2, 3, 1 };
        vector<int>nums2 = { 2, 2, 3 };
        Solution_349_Intersection_of_Two_Arrays sls;
        printdetails(sls.intersection(nums1, nums2));
    }
}
