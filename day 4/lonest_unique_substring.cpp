#include <iostream>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> seen;
    int maxLength = 0, left = 0;

    for (int right = 0; right < s.length(); right++) {
        if (seen.find(s[right]) != seen.end()) {
            left = max(seen[s[right]] + 1, left);
        }
        seen[s[right]] = right;
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    int result = lengthOfLongestSubstring(s);
    cout << "Longest substring without repeating characters: " << result << endl;

    return 0;
}
