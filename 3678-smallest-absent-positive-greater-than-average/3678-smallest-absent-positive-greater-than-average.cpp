class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        double sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        long  y=nums.size();
        double x=sum/y;
        int av=floor(x)+1;
          if(av <= 0)
            av = 1;

        set<int> st(nums.begin(),nums.end());
        while(st.count(av)){
           
                av++;
            
        }
        return av;
    }
};