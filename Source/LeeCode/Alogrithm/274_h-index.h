#pragma once
//
//Given an array of citations(each citation is a non - negative integer) of a researcher, write a function to compute the researcher's h-index.
//
//According to the definition of h - index on Wikipedia : "A scientist has index h if h of his/her N papers have at least h citations each, and the other N − h papers have no more than h citations each."
//
//For example, given citations = [3, 0, 6, 1, 5], which means the researcher has 5 papers in total and each of them had received 3, 0, 6, 1, 5 citations respectively.Since the researcher has 3 papers with at least 3 citations each and the remaining two with no more than 3 citations each, his h - index is 3.
//
//Note : If there are several possible values for h, the maximum one is taken as the h - index.
/*************kinght5857*************/

#include "stdafx.h"

namespace Anlogrithm_274
{
    class Solution {
    public:

        int hIndex(vector<int>& citations) {

            sort(citations.begin(), citations.end(), [] (int x, int y){return x > y; });
            for (int i = 0; i < (int)citations.size(); i++)
            {   
                if (i >= citations[i])
                    return i;
            }
            return citations.size();

        }
    };

    void Test_Anlogrithm_274()
    {
        //int citations[5] = { 3, 0, 6, 1, 5 };
        //vector<int> citations = { 3, 0, 6, 1, 5 }; //3
        vector<int> citations = { 10 };    //1
        //vector<int> citations = { 10,8,5,4,3 }; //4
        //vector<int> citations = { 25,8,5,3,3 }; //3

        Solution sls;
        cout << sls.hIndex(citations)<<endl;


    }
 }