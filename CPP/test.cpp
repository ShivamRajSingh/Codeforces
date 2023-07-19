#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "X/../X";
    vector<string> v;
    int i =0;
    string temp;
    while(s[i] != '\0'){
        temp.push_back(s[i]);
        if(s[i] == '/'){
            // st.push(temp);
            cout << temp << "\n";
            temp = "";
        }else if (s[i] == '.' && s[i+1] == '')
        i++;
    }
}