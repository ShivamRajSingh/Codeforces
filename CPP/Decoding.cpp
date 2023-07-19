#include<iostream>
#include<string>
using namespace std;
int main()
{
    int len;
    cin >> len;
    string s;
    getline(cin,s);
    if(len <= 2){
        cout << s;
        return 0;
    }

    char *arr = new char [len+1];
    if (len % 2 != 0){
        for (int i =0; s[i] != '\0' ; i++){
            if( i % 2 == 0){
                
            }else{

            }
        }
    }
    

    delete [] arr;
    return 0;
}