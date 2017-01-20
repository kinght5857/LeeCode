#pragma once
#include "stdafx.h"

#include <algorithm>
#include <sstream>

namespace LagestNumber_179
{
    class Solution {
    public:
        string largestNumber(vector<int>& nums) {

            //sort(nums.begin(), nums.end(), [](int l, int r) {
            //    stringstream ss;
            //    ss << l;
            //    int lcount = ss.str().size();

            //    stringstream ss2;
            //    ss2 << r;
            //    int rcount = ss2.str().size();
            //    if (lcount == rcount) return l > r;
            //    if (lcount > rcount)
            //    {
            //        int temp = r;
            //        for (; rcount < lcount; rcount++)
            //            temp = temp * 10;
            //        return l > temp;
            //    }
            //    else
            //    {
            //        int temp = l;
            //        for (; lcount < rcount; lcount++)
            //            temp = temp * 10;
            //        return temp > r;
            //    }
            //});
            
            
            //if (0 == nums.size()) return string("");
            //if (1 == nums.size()) return string("");

            sort(nums.begin(), nums.end(), [](int l, int r) {
                stringstream ss1,ss2;
                ss1 << l << r;
                ss2 << r << l;
                return ss1.str() > ss2.str();

            });

            stringstream ss;
            for (int i : nums)
                ss << i;
            string   temp = ss.str();

            if (temp[0] == '0') return string("0");

            return ss.str();

        }
    };

    void Test_LagestNumber_179()
    {
        cout << "running LagestNumber_179\n";

        //vector<int>nums1 = { 3, 30, 34, 5, 9 };
        vector<int>nums1 = { 121 , 12 };
        vector<int>nums2 = { 999999998,999999997,999999999 };
        vector<int>nums3 = { 0,0 };
        Solution sls;
        cout << sls.largestNumber(nums1)<<endl;
        cout << sls.largestNumber(nums2) << endl;
        cout << sls.largestNumber(nums3) << endl;
    }
}
