class Solution {
public:
    // first solution using find function
    // int strStr(string haystack, string needle) {
    //     return haystack.find(needle);
    // }

    // another way
    int strStr(string haystack, string needle) {
        int len1 = haystack.size();
        int len2 = needle.size();
        int j = 0; 
        for (int i = 0; i < len1; i++) {
            if (haystack[i] == needle[j]) {
                if (j == (len2 - 1) )    return i - j;
                j++;
            }
            else 
                {
                    // current i in the for loop. Update a new index.  After each iteration, i is incremented by 1. end of the iteration i = (i - j) + 1 (loop increment)
                    i -= j;  // Move back to the start of potential match
                    j = 0;   // Reset j to start over
                }
        }
        //  nothing
        return -1; 
    }
};