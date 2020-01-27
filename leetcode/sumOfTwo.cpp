class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        cout<<target<<endl;        
        int l = 0;
        int m= 1;
        for(auto i=nums.begin(); i != nums.end();++i,++l){     
            auto j = i;            
            m=l+1;
            for (auto k = i+1;k != nums.end();++k,++m){
                
                if((*j + *k)==target){
                    result.push_back(l);
                    result.push_back(m);
                }
            }
        }
        return result;
    }
};