class Solution {
public:
    int countPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans = 0;
        sort(nums.begin(), nums.end());
        for (auto num : nums) {
            // count all almost equal nums
            string s = to_string(num);
            int n = s.size();
            ans += m[num];
            unordered_set<int> vis;
            for (int i = 0; i < n; i++) {
                for (int j = i+1; j < n; j++) {
                    if (s[i] == s[j]) continue;
                    swap(s[i], s[j]);
                    int curr = stoi(s);
                    if (!vis.count(curr)) {
                        ans += m[curr];
                        vis.insert(curr);
                        //if (m[curr] > 0) 
                            //cout << "1 swap  - num: " << num << " ct: " << stoi(s) << '\n';
                    }
                    for (int k = 0; k < n; k++) {
                        for (int l = k+1; l < n; l++) {
                            if (i == k && j == l) continue;
                            if (s[k] == s[l]) continue;
                            swap(s[k], s[l]);
                            int curry = stoi(s);
                            if (!vis.count(curry)) {
                                ans += m[curry];
                                vis.insert(curry);
                                //if (m[curry] > 0)
                                    //cout << "2 swaps - num: " << num << " ct: " << stoi(s) << '\n';
                            }
                            
                            swap(s[k], s[l]);
                        
                        }
                    }
                    swap(s[i], s[j]);
                }
            }
            m[num]++;
        }
        return ans;
    }
};