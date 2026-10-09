class Solution {
public:
    string finalString(string st) {
        string s="";
        
        for(int i=0;i<st.size();i++){
            if(st[i]=='i'){
                int x=0;
                int y=s.size()-1;
                while(x<=y){
                    swap(s[x],s[y]);
                    x++;
                    y--;

                }
            }
            else {
                s=s+st[i];
            }
        }
        return s;

    }
};