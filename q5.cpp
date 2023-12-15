#include <iostream>
using namespace std;

class Hotel{
    private:
        int hotel_no, hotel_rate;
        string hotel_name, hotel_type,hotel_location;
    public:
        Hotel(int hotel_no, string hotel_name, string hotel_type, int hotel_rate, string hotel_location){
            this->hotel_no = hotel_no;
            this->hotel_name = hotel_name;
            this->hotel_type = hotel_type;
            this->hotel_rate = hotel_rate;
            this->hotel_location = hotel_location;
        }
        void getdata(){
            cout << endl << endl << "hotel_no.: " << hotel_no << endl;
            cout << "hotel_name: " << hotel_name << endl;
            cout << "hotel_type: " << hotel_type << endl;
            cout << "hotel_rate: " << hotel_rate << endl;
            cout << "hotel_location: " << hotel_location << endl;
        
        }
}; 

int main(){
	int n,hotel_no, hotel_rate;
    string hotel_name, hotel_type,hotel_location;
    
    cout << "Enter number of hotels: ";
    cin >> n;
    for(int i=0; i<n; i++){
        cout << endl << endl << "hotel_no: ";
        cin >> hotel_no;
        cout << "hotel_name: ";
        cin >> hotel_name;
        cout << "hotel_type: ";
        cin >> hotel_type;
        cout << "hotel_rate: ";
        cin >>  hotel_rate;
        cout << "hotel_location: ";
        cin >> hotel_location;
        Hotel h1( hotel_no, hotel_name, hotel_type, hotel_rate, hotel_location);
        h1.getdata();
    }
}


