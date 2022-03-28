class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (!std::is_sorted(nums1.cbegin(), nums1.cend())) { // Checking for sorted-ness is O(n) which is < O(n*log(n)) quick sort.
            std::sort(nums1.begin(), nums1.end());
        }
        
        if (!std::is_sorted(nums2.cbegin(), nums2.cend())) {
            std::sort(nums2.begin(), nums2.end());
        }
        
        std::vector<int> result;
        
        std::set_intersection(
            nums1.cbegin(), nums1.cend(),
            nums2.cbegin(), nums2.cend(),
            std::back_inserter(result) // Inserts elements into the end of result. Equivalent to std::vector#push_back() or std::vector#emplace_back
        );
        
        return result;
        
    }
};