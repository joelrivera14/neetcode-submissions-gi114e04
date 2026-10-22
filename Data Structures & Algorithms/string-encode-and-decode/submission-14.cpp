class Solution {
public:

    string encode(vector<string>& strs) {
        string n = "";
        for(string& s : strs){
            n += to_string(s.size())+"#"+s;
        }
        return n;
    }

    vector<string> decode(string s) {
        vector<string>answers;
        int i = 0;
        while(i<s.size()){
            int j = i;
            while(s[j] != '#'){
                ++j;
            }
            int length = stoi(s.substr(i,j));
            i = j+1;
            string r = s.substr(i,length);
            answers.push_back(r);
            i = i + length;
        }
        return answers;
    }
};
