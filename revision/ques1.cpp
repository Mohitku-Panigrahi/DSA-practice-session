//find the longest palindromic substring
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:

    string longestPalindrome(string s) {

        if (s.length() <= 1)
            return s;

        int start = 0;
        int max_len = 0;

        auto expand = [&](int l, int r) {

            while (l >= 0 &&
                   r < s.length() &&
                   s[l] == s[r]) {

                l--;
                r++;
            }

            int len = r - l - 1;

            if (len > max_len) {
                max_len = len;
                start = l + 1;
            }
        };

        for (int i = 0; i < s.length(); i++) {

            // Odd length palindrome
            expand(i, i);

            // Even length palindrome
            expand(i, i + 1);
        }

        return s.substr(start, max_len);
    }
};