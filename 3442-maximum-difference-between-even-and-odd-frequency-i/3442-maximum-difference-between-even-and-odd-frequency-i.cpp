class Solution {
public:
    int maxDifference(string s) {
        vector<int>ans(26,0);
        for(int i=0;i<s.size();i++){
            ans[s[i]-'a']++;
        }
        int odd=0;
        int even=INT_MAX;
        for(int i=0;i<ans.size();i++){
            if(ans[i]==0){
                continue;
            }
            else if(ans[i]%2==0){
                even=min(even,ans[i]);
            }
            
            else{
                odd=max(odd,ans[i]);
            }
        }
        return odd-even;
    }
};