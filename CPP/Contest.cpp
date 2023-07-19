#include<iostream>
#include<algorithm>
using namespace std;
double first ( double points){
    return 0.3 * points;
}
double second ( double points , double time){
    points -= ( points*time )/250;   
    return points;
}
int main()
{
    double a,b,c,d;
    cin >> a >> b >> c >> d;
    double misha = max( first(a) , second(a ,c));
    double vasya = max( first(b) , second(b ,d));
    if(misha == vasya){
        cout<<"Tie";
    }else if (misha > vasya){
        cout<<"Misha";
    }else{
        cout<<"Vasya";
    }
}