class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int longest=0;
        int current;
        int length =1;
        for (int num : nums) {
            st.insert(num);}
        for(int num:st){
            if(st.find(num-1)==st.end()){
                current=num;
                length=1;
            }
            while(st.find(current+1)!=st.end()){
                current++;
                length++;
            }
            longest = max(longest,length);
        }
        return longest;
    }
};
