class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>freq;
        vector<pair<int,int>>collection;
        vector<int>answer;

        for(int n : nums){
            freq[n]++;
        }
        for(auto entries : freq){
            collection.push_back({entries.first, entries.second});
        }

        sort(collection.begin(), collection.end(), [](const auto& a, const auto& b){
            return a.second>b.second;
        });

        for(int i = 0; i<k; ++i){
            answer.push_back(collection[i].first);
        }
        return answer;
    }
};
