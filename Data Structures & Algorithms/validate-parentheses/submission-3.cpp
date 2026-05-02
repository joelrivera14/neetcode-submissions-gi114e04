class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> hmap={
            {'{','}'},
            {'[',']'},
            {'(',')'}
        };
        string nS = "";
        for(char c : s){
            if(hmap.contains(c)){
                nS.push_back(c);
            } else{
                if(nS.empty() || c != hmap[nS.back()]) return false;
                nS.pop_back();
            }
        }
        return nS.size() == 0;   
    }
};
