class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>freq;
        vector<pair<int,int>>values;
        vector<int>answer;
        for(int n : nums){
            freq[n]++;
        }
        for(auto& entries : freq){
            values.push_back({entries.first,entries.second});
        }
        sort(values.begin(), values.end(), [](auto& a, auto&b){
            return a.second>b.second;
        });
        for(int i = 0; i<k; ++i){
            answer.push_back(values[i].first);
        }
        return answer;
    }
};
