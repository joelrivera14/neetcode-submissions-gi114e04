class Solution {
public:

    string encode(vector<string>& strs) {
        string nString = "";
        for(string& s : strs){
            nString += to_string(s.size()) + "#" + s;
        }
        return nString;
    }

    vector<string> decode(string s) {
        vector<string> answer;
        int i = 0;
        while(i<s.size()){
            int j  = i;
            while(s[j] != '#'){
                j++;
            }
            int length = stoi(s.substr(i,j-i));
            i = j+1;
            j = i + length;
            answer.push_back(s.substr(i, length));
            i =j;
        }
        return answer;
    }
};
