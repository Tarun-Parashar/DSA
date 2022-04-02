#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string s) {
    for(int i=0; i<s.length(); i++)
        if(s[i] >= 'A' and s[i] <= 'Z') s[i] = s[i] - 'A' + 'a';
    
    int i=0, j=s.length()-1;
    while(i < j)
    {
        if(!((s[i] >= 'a' and s[i] <= 'z') or (s[i] >= '0' and s[i] <= '9')))
        {
            i++;
            continue;
        }
        if(!((s[j] >= 'a' and s[j] <= 'z') or (s[j] >= '0' and s[j] <= '9')))
        {
            j--;
            continue;
        }
        if(s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main()
{
    string str = "A mac, a plan, a canal: Panama";
    cout<<isPalindrome(str);
    return 0;
}