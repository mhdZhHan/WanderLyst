#include<iostream>
#include<fstream>
#include<iomanip>
// #include<string>

using namespace std;

class Customers{
    public:
        string name, gender, address;
        int age, mobile_no,cus_id;
        char all_details[999];
        
        void get_details(){
            ofstream out("old_customers.txt", ios::app);
            {
                cout<<"Enter customer id: ";
                cin>>cus_id;
                cout<<"Enter Name: ";
                cin>>name;
                cout<<"Enter Age: ";
                cin>>age;
                cout<<"Enter Gender: ";
                cin>>gender;
                cout<<"Enter Mobile Number: ";
                cin>>mobile_no;
                cout<<"Enter Address: ";
                cin>>address;
            }
            out << "\nCustomer ID: " <<cus_id <<"\nName: " <<name
                <<"\nAge: " <<age <<"\nGender" <<gender <<"\nMobile No: " <<mobile_no
                <<"\nAddress: " <<address;
            out.close();
            cout<<"\nSAVED \nNOTE: We save your details record for future purpose"<<endl;
        }

        void show_details(){
            ifstream in("old_customers.txt");
            {
                if(!in){
                    cout<<"File error" <<endl;
                }
                while (!(in.eof())){
                    in.getline(all_details, 999);
                    cout<<all_details<<endl;
                }
                in.close();
            }
        }
};

class Cabs{
    public:
        int cab_choice;
        int kilometers;
        float cost;

        void cabs_details(){
            cout<<"We collaborated with fastest, safest, and smartest cab service around the country"<<endl;
            cout<<"================ABC Cabs================"<<endl;
            cout<<"1. Rent a Standard Cab - Rs:15 for 1km"<<endl;
            cout<<"1. Rent a Luxury Cab - Rs:25 per 1km"<<endl;

            cout<<"\nTo calculate the cost for your jurney:"<<endl;

            cout<<"Enter which kind of cab you need: ";
            cin>>cab_choice;

            cout<<"Enter kilometers you have to travel: ";
            cin>>kilometers;
            
        }
};

class Booking{

};

class Charges{
    
};

int main(){
    cout<<"Hello wold";

    return 0;
}