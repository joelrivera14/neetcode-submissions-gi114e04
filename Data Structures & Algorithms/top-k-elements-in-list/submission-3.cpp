class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        vector<pair<int,int>>reordering;
        for(int i : nums){
            freq[i]++;
        }
        for(auto& entries : freq){
            reordering.push_back({entries.second, entries.first});
        }
        sort(reordering.rbegin(),reordering.rend());
        vector<int> results;
        for(int i = 0; i<k; ++i){
            results.push_back(reordering[i].second);
        }
        return results;
    }
};
