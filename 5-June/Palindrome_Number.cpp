class Solution {
public:
    bool isPalindrome(int n) {
        int dup=n;
        int revn=0;
        while(n>0){
            int ld=n%10;
            n=n/10;
            revn=(revn*10)+ld;
        }
        if (dup==revn){
            return true;
        }
        return false;
    }
  
};