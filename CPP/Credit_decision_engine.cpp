#include<iostream>
#include<string>
#define ll long long
using namespace std;

class Bureau{
    public:
        string firstName,lastName;
        ll annualSpend, totalAssets, totalLiability;
        bool homeOwnership;
        ll bureauScore;
        ll creditLimit;
    
    public:
        Bureau(string firstName,string lastName, ll annualSpend, ll totalAssets, ll totalLiability, bool homeOwnership, ll bureauScore, ll creditLimit){
            this.firstName = firstName;
            this.lastName = lastName;
            this.annualSpend = annualSpend;
            this.totalAssets = totalAssets;
            this.totalLiability = totalLiability;
            this.homeOwnerShip = homeOwnership;
            this.bureauScore = bureauScore;
            this.creditLimit = creditLimit;
        }
};

class Application{
    private:
        string applicationID, firstName, lastName;
        ll Income;
    public:
        Application(string applicationID, string firstName, string lastName, ll income){
            this.applicationID = applicationID;
            this.firstName = firstName;
            this.lastName = lastName;
            this.income = income;
        }
};

int main()
{
    int n;
    cin >> n;
    vector<Bureau> arr;
    while(n--){
        Bureau obj;
        cin >> obj.firstName;
        cin >> obj.lastName;
        cin >> obj.annualSpend;
        cin >> obj.totalAssets;
        cin >> obj.totalLiability;
        cin >> obj.homeOwnership;
        cin >> obj.bureauScore;
        cin >> obj.creditLimit;

        arr.push_back(obj);
    }   
}