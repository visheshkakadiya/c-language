#include<iostream>
using namespace std;

class Exception{
	
	protected:
		int a,b,ans;
		string error = "cannot divided by zero";
	
	public: 
	
		void setdata(){
			
			cout << "enter a: ";
			cin  >> a;
			cout << "enter b: ";
			cin >> b;
			
		try{
		
			if(b==0){
				throw error;
			}
			else{
				
				cout << endl << a << "/" << b << ":" << a/b << endl;
			}
		}
		
		catch(string e){
			
			 cout << e << endl;
		}
	}
};

int main(){
	
	Exception e1;
	e1.setdata();
}


