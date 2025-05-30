#include<iostream>
using namespace std;

int lengthOfLongestSubstringKDistinct(string s, int k) {
    int n = s.size();
    if (k == 0 || n == 0) return 0;

    unordered_map<char, int> charCount;
    int left = 0, maxLen = 0;

    for (int right = 0; right < n; right++) {
        charCount[s[right]]++;

        while ((int)charCount.size() > k) {
            charCount[s[left]]--;
            if (charCount[s[left]] == 0) {
                charCount.erase(s[left]);
            }
            left++;
        }

        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}


int main()
{
 return 0;
}