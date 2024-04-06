class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // nums1 = m + n 
        int last = m + n - 1; // index for nums1
        int j = 0; // index for nums2
        while (m-1  >= 0 && n-1 >= 0 ) {
            if (nums1[m - 1] < nums2[n - 1]) {
                nums1[last] = nums2[n - 1];
                n--;
            } else { 
                nums1[last] = nums1[m - 1]; 
                m--;
            }
            last--;
        }

        while (n > 0) {
            nums1[last] = nums2[n-1];
            n--;
            last--;
        }
    }
};

/*
how about doing it but avoid duplicates.

*/