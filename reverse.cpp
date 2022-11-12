#include <bits/stdc++.h>
using namespace std;

int brackets(char paranthesis[20])
{
    int n = 20;
    stack<int> st;
    int result = 0;
    st.push(-1);
    for (int i = 0; i < 20; i++)
    {
        if (paranthesis[i] == '(')
            st.push(i);
        else if (paranthesis[i] == ')')
        {
            st.pop();
            if (st.empty())
                st.push(i);
            else
                result = max(result, i - st.top());
        }
    }
    return result;
}
int main()
{
    char ch[20];
    cin >> ch;
    cout << brackets(ch) << endl;

    return 0;
}
