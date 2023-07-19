#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    bool flag = false;
    getline(cin,s);
    if((s[0]>= 97 && s[0] <= 122) && (s[1] >=65 && s[1] <= 90)){
        int i = 1;
        while(s[i] != '\0'){
            if(s[i]>= 97 && s[i] <= 122){
                flag = true;
                break;
            }
            i++;
        }
    }else if( (s[0]>= 65 && s[0] <= 90) && (s[1] >=65 && s[1] <= 90) ){
        int i = 1;
        while(s[i] != '\0'){
            if(s[i]>= 97 && s[i] <= 122){
                flag = true;
                break;
            }
            i++;
        }
    }else{
        cout<<s;
        return 0;
    }
    if(flag){
        cout<<s;
    }else{
        if(s[0] >= 97 && s[0] <= 122){
            s[0] -=32;
        }
        int i = 1;
        while(s[i] != '\0'){
            s[i] += 32;
            i++;
        }
        cout<<s;
    }
    
}