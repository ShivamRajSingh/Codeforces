#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long int p;
    cin >> p;

    vector<long long int> v(11,1);
    for(int i =1; i<11; i++)
        v[i] = (i+1)*v[i-1];
    
    long long int count =0;
    while(p > 0){
        long long int t = -1;
        for(int i =0; i < 11;i++){
            if(p < v[i]){
                break;
            }
            t++;
        }
        long long int k = p/ v[t];
        p -= k*v[t];
        count += k;
    }
    cout << count << "\n";

    return 0;
}