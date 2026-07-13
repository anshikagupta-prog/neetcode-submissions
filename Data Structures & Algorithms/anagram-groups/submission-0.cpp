class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string, vector<string>> mp;
        int m=strs.size();
        for(int i=0;i<m;i++){
            string temp=strs[i];
            sort(temp.begin(), temp.end());
            mp[temp].push_back(strs[i]);
        }
        for(auto entry :mp){
            ans.push_back(entry.second);
        }
        return ans;
    }
};
