class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        vector<char>tm;
        vector<char>sm;
        for(int i=0;i<s.size();i++){
            sm.push_back(s[i]);
            tm.push_back(t[i]);
        }
        sort(sm.begin(),sm.end());
        sort(tm.begin(),tm.end());
        if(tm==sm){
            return true;
        }
        else{
            return false;
        }
    }
};
