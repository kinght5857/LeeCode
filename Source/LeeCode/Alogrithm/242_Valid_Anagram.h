#pragma once
// 242_Valid_Anagram.cpp : Defines the entry point for the console application.
//Given two strings s and t, write a function to determine if t is an anagram of s.
//which means the string s and string t have same count of each charactor
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

//public class Solution {
//    public boolean isAnagram(String s, String t) {
//        int[] alphabet = new int[26];
//        for (int i = 0; i < s.length(); i++) alphabet[s.charAt(i) - 'a']++;
//        for (int i = 0; i < t.length(); i++) alphabet[t.charAt(i) - 'a']--;
//        for (int i : alphabet) if (i != 0) return false;
//        return true;
//    }
//}
namespace Anlogrithm_242
{
    class Solution_242_Valid_Anagram {
    public:
        bool isAnagram(string s, string t) {
            int sCount = s.size();
            int tCount = t.size();
            if (sCount != tCount) return false;
            short result[26] = { 0 };
            for (int i = 0; i < sCount; i++)
                result[s[i] - 'a']++;
            for (int i = 0; i < sCount; i++)
                result[t[i] - 'a']--;
            for (int i : result)
                if (i != 0)
                    return false;
            return true;
        }
    };

    void Test_Solution_242_Valid_Anagram()
    {
        cout << "running Test_Solution_242_Valid_Anagram\n";

        string s1 = "anagram", t1 = "nagaram"; //return true.
        string s2 = "rat", t2 = "car";//return false.
        Solution_242_Valid_Anagram sl;

        if (sl.isAnagram(s1, t1))
            cout << "same!" << endl;
        else
            cout << "diff" << endl;

        if (sl.isAnagram(s2, t2))
            cout << "same!" << endl;
        else
            cout << "diff" << endl;
    }
    //
    //void OtherSolution(){
    //    string s(10000, ' ');
    //    for (int i = 0; i<1000; i++) {
    //        for (int j = 0; j<10000; j++)
    //            s[j] = 'a' + j & 15;
    //        sort(s.begin(), s.end());        //5982ms
    //        //sort((char*)s.c_str(), (char*)s.c_str() + s.size());  // 5873ms
    //    }

    //
    //}

    //class Solution {
    //public:
    //    bool isAnagram(string s, string t) {
    //        if (s.length() != t.length()) return false;
    //        int n = s.length();
    //        unordered_map<char, int> counts;
    //        for (int i = 0; i < n; i++) {
    //            counts[s[i]]++;
    //            counts[t[i]]--;
    //        }
    //        for (auto count : counts)
    //            if (count.second) return false;
    //        return true;
    //    }
    //};
}