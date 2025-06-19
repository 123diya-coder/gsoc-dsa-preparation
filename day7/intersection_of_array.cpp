#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> count;
    for (int n : nums1) count[n]++;
    
    vector<int> result;
    for (int n : nums2) {
        if (count[n] > 0) {
            result.push_back(n);
            count[n]--;
        }
    }
    return result;
}

int main() {
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};
    
    vector<int> result = intersect(nums1, nums2);
    for (int n : result) cout << n << " ";
    return 0;
}
