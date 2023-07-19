#include<iostream>
using namespace std;
//long long int n; // total no of candies
	int t=5;
class candies
{
private:
	long long int inputs[5];
	int count[5];// tescases
	
public:
	int calculate_cases(long long int );
	void display();
	void total_cases();
	void setData();
		
};
void candies ::total_cases(){
	long long int n;
	for(int i=0; i<t ;i++){
		n=inputs[i]; 
		count[i] = calculate_cases(n);
	}
}
int candies:: calculate_cases(long long int n){
	int temp =0;
	long long int a;
	long long int b;
	if(n%2 == 0 && n>2){
		long long int half = n/2;
		a = half+1;
		b = n-a;	
		temp++;
	}else if (n%2!=0 && n>2){
		long long int fractionalHalf = n/2 +1;
		a = fractionalHalf;
		b = n-a;
		temp++;
	}else{
		return 0;
	}
	for(long long int i=a;i<n-1;i++){
		temp++;
	}

	return temp;
}
void candies:: display(){
	cout<<endl;
	for (int i = 0; i < t;i++)
	{
		cout<<count[i]<<endl;
	}
}
void candies:: setData(){
	for(int i=0 ; i<t ; i++){
		cin>>inputs[i];
	}
}
int main()
{
//	int t;
//	cin>>t;
	
	candies kid;
	kid.setData();
	kid.total_cases();
	kid.display();
	return 0;	
}
