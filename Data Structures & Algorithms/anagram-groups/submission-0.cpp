class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>groups;
        vector<vector<string>>gStrings;

        for(string& s : strs){
            string key = s;
            sort(key.begin(),key.end());
            groups[key].push_back(s);
        }
        for(auto& entries : groups){
            gStrings.push_back(entries.second);
        }
        return gStrings;
    }
};
