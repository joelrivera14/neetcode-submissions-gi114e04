class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans =0;
        int left =0;
        unordered_map<char, int>freq;
        for(int right = 0; right<s.size(); ++right){
            if(freq.contains(s[right])){
                left = max(left, freq[s[right]]+1);
            }
            freq[s[right]] = right;
            ans=max(right-left+1, ans);
        }
        return ans;
    }
};
