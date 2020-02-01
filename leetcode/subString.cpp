class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        int lengthOfLongest = 0;
        int i=0,count=0;
        if(len == 1){
            return 1;
        }
        while(i<len && lengthOfLongest < len+1/2){
            count = 0;
            int arr[135] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
            int j = i;
            while(j < len){
                int k =s[j]; 
                if(arr[k] == 0){
                    arr[k] = arr[k]+1;
                    count++;
                }else{
                    break;
                }
                j++;
            }
            i++;
            if(lengthOfLongest<count){
                 lengthOfLongest = count;
            }
            
        }
        return lengthOfLongest;
            
        
    }
};