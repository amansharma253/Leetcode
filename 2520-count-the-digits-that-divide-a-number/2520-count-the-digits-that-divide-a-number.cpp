class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int n =num ;
        int digit=0 ;
        while(num>0)
        {
        digit=num%10;
            if( n%digit==0) count++;
            num=num/10;
        }
return count;
    }
};