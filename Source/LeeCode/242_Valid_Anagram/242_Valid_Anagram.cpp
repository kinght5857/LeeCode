// 242_Valid_Anagram.cpp : Defines the entry point for the console application.
//Given two strings s and t, write a function to determine if t is an anagram of s.
//
//For example,
//s = "anagram", t = "nagaram", return true.
//s = "rat", t = "car", return false.
//
//Note:
//You may assume the string contains only lowercase alphabets.
//
//Follow up :
//What if the inputs contain unicode characters ? How would you adapt your solution to such case ?
/*************kinght5857*************/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class Solution1 {
public:
    bool isAnagram(string s, string t) {
        //int count = s


        return true;
    }
};

int main()
{
    string s1 = "anagram", t1 = "nagaram"; //return true.
    string s2 = "rat", t2 = "car";//return false.
    Solution1 sl;
    if (sl.isAnagram(s1, t1))
        cout << "pass!" << endl;
    else
        cout << "failed" <<endl;

    if (!sl.isAnagram(s2, t2))
        cout << "pass!" << endl;
    else
        cout << "failed" << endl;

    return 0;
}

