class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()) return 0;
        
        int n = needle.size();
        int m = haystack.size();
        
        // We only need to check up to m - n positions
        for(int s = 0; s <= m - n; s++){
            bool match = true;
            for(int i = 0; i < n; i++){
                if(haystack[s + i] != needle[i]){
                    match = false;
                    break;
                }
            }
            
            if(match){
                return s;
            }
        }
        
        return -1;
    }
};