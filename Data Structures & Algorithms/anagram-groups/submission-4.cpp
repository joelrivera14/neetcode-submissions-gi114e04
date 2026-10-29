class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        vector<vector<string>> answer;
        for(string& s : strs){
            string key = s;
            sort(key.begin(), key.end());
            groups[key].push_back(s);
        }
    //auto = std::pair<const string, vector<string>>
        for(auto& entries : groups){
            answer.push_back(entries.second);
        }
        return answer;
    }
};
