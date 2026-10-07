class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<pair<int,int>> temp;
        vector<int> answer;
        for(int i : nums){
            freq[i]++;
        }
        for(auto entries : freq){
            temp.push_back({entries.first, entries.second});
        }
        sort(temp.begin(), temp.end(), [](auto& a, auto& b){
            return a.second>b.second;
        });
        for(int i = 0; i<k; ++i){
            answer.push_back(temp[i].first);
        }
        return answer;
    }
};
