class Solution {
public:
    int reverse(int x) {
        int revn=0;
        while(x!=0){
            int ld=x%10;
            x=x/10;
            revn=(revn*10)+ld;
        }
        return revn;
    }
};
