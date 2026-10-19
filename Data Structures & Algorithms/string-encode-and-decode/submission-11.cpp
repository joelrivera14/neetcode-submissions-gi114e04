class Solution {
public:

    string encode(vector<string>& strs) {
        string n = "";
        for(string& s : strs){
            n += to_string(s.size())+ "#" + s;
        }
        return n;
    }

    vector<string> decode(string s) {
        vector<string> answer;
        int i = 0;
        while(i<s.size()){
            int j = i;
            while(s[j] != '#'){
                ++j;
            }
            int length = stoi(s.substr(i, i+j));
            i = j+1;
            j = i+length;
            answer.push_back(s.substr(i,length));
            i = j;
        }
        return answer;
    }
};
