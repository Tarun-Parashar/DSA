bool isPalindrome(string s, int l, int r)
{
    while(l < r)
    {
        if(s[l] != s[r])    return false;
        l++;
        r--;
    }
    return true;
}

class Solution {
public:
    bool validPalindrome(string s) {
    int l=0, r=s.length()-1, numDels=1;
    while(l < r)
    {
        if(s[l] != s[r])
        {
            if(numDels == 0)
                return false;
            return (isPalindrome(s, l, r-1) || isPalindrome(s, l+1, r));
        }
        l++;
        r--;
    }
    return true;
    }
};
