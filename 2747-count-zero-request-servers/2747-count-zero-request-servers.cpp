class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        int start=0;
        int end=0;
        sort(logs.begin(),logs.end(),[](auto &a,auto &b){
            return a[1]<b[1];
        });
        unordered_map<int,int>mp;
        int i=0;
        vector<int>arr(queries.size());
        vector<vector<int>>a(queries.size(),vector<int>(2));
        for(int i=0;i<queries.size();i++){
            a[i][0]=queries[i];
            a[i][1]=i;
        }
        sort(a.begin(),a.end());
        for(auto query:a){
            
            int min=query[0]-x;
            int max=query[0];
            while(end<logs.size() && logs[end][1]<=max){
                mp[logs[end][0]]++;
                end+=1;
            }
            while(start<end && logs[start][1]<min){
                mp[logs[start][0]]--;
                if( mp[logs[start][0]]==0){
                    mp.erase(logs[start][0]);
                }
                start=start+1;
            }
           arr[a[i][1]]=(n-mp.size());
           i++;
        }
return arr;
    }
};