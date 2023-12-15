#include<iostream>

using namespace std;

class Account{
	
	public:
		double acc_no, acc_balance;
		string acc_type, acc_name, acc_branch;
		
	public:
		
		void setdata(){
			
			cout << "enter acc_no.\t: ";
			cin  >> acc_no;
			cout << "enter acc_name\t: ";
			cin  >> acc_name;
			cout << "enter acc_type\t: ";
			cin  >> acc_type;
			cout << "enter acc_branch\t: ";
			cin  >> acc_branch;
			cout << "enter acc_balance\t: ";
			cin  >> acc_balance;
		}
		
		void getdata(){
			
			cout << "acc_no.:" << acc_no << endl;
			cout << "acc_name:" << acc_name << endl;
			cout << "acc_type:" << acc_type << endl;
			cout << "acc_branch:" << acc_branch << endl;
			cout << "acc_balance:" << acc_balance << endl;
		}
};

int main(){
	
	int n;
	
	cout << "enter total accounts: ";
	cin  >> n;
	
	Account a1[n];
	
	for(int i=0; i<n; i++){
		
		a1[i].setdata();
	}
	
	double acc_number;
	cout << "search acc_no: ";
	cin >> acc_number;
	
	for(int i=0; i<n; i++){
		
		if(a1[i].acc_no==acc_number){
			
			a1[i].getdata();
		}
	}
}


