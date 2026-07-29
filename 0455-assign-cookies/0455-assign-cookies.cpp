class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int x=g.size();
        int y=s.size();
        int j=0;
        int count=0;
        int i=0;
        while(j<y && i<x){
            if(g[i]<=s[j]){
                count++;
                j++;
                i++;
            }
            else{
                j++;
            }

        }
        return count;
    }
};