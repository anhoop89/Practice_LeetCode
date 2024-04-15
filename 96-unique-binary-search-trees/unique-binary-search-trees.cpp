// class Solution {
// public:
//     int numTrees(int n) {
//         // store all the combination ways
//         map<int, int> arr;
//         arr[0] = 0;
//         arr[1] = 1;
//         if (n == 0)
//             return 0; 
//         int i = n; 
//         int j = 1; 
//         int result;
        
//         while (i >= 1 && j <= n) {
//             result += findCombination(n-i, arr) + findCombination(n-j, arr);
//             i++;
//             j--;
//         }

//         return result; 
        
//     }
//     int findCombination(int num, map<int, int> & arr) {
//         int ways = 0;
//         if (arr.find(num) == arr.end()) {
//             for (int i = 1; i <= num ; i++) {
//               //  arr[i+1]= arr[i] * num; 
//                  ways = findCombination(i-1, arr) *
//             }
//              arr[num] = ways;
//         }
//         return arr[num];
//     }
// };

// /*
// Analyze the problem: 
// n = 3: 
// 1 2 3 

// 1: left 0 * right 2 ways 
// 2: left 1 ways * right 1
// 3: left 0 * 2 ways. 
// */

// 1 way
// class Solution {
// public:
//     int numTrees(int n) {
//         // Store all the combination ways
//         map<int, int> arr;
//         arr[0] = 1; // Base case for factorial: 1 way to arrange 0 nodes
//         arr[1] = 1; // Base case for factorial: 1 way to arrange 1 node
        
//         if (n == 0)
//             return 0; 
        
//         return findCombination(n, arr);
//     }

//     int findCombination(int num, map<int, int> &arr) {
//         if (arr.find(num) == arr.end()) {
//             int ways = 0;
//             for (int i = 1; i <= num; ++i) {
//                 ways += findCombination(i - 1, arr) * findCombination(num - i, arr);
//             }
//             arr[num] = ways;
//         }
//         return arr[num];
//     }
// };

//the other way
class Solution {
public:
    int numTrees(int n) {
        // Store all the combination ways
        map<int, int> arr;
        arr[0] = 1; // Base case for factorial: 1 way to arrange 0 nodes
        arr[1] = 1; // Base case for factorial: 1 way to arrange 1 node
        
        // Calculate combination ways iteratively
        for (int i = 2; i <= n; ++i) {
            int ways = 0;
            for (int j = 1; j <= i; ++j) {
                ways += arr[j - 1] * arr[i - j];
            }
            arr[i] = ways;
        }

        return arr[n];
    }
};
