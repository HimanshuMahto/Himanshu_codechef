#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P)
    {
        return "String is Palindrome";
    }
    else
    {
        return "String is not Palindrome";
    }
}
int main()
{
    string S;
    getline(cin, S);
    cout << isPalindrome(S);

    return 0;
}
