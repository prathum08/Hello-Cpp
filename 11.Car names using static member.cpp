#include<iostream>
using namespace std;

class Car{
    string name;
    static int count;

    public:
        void getdata();
        void dispdata();
};

int Car :: count; // default value of the staic function

void Car :: getdata(){
    cout << "Enter the name of the car brand :- ";
    getline(cin ,name);;
    count++;
}
void Car :: dispdata(){
    cout << count << ". " << name << endl;
}


int main(){
    Car c1,c2,c3,c4,c5,c6;
    c1.getdata();
    c1.dispdata();

    c2.getdata();
    c2.dispdata();

    c3.getdata();
    c3.dispdata();

    c4.getdata();
    c4.dispdata();

    c5.getdata();
    c5.dispdata();

    c6.getdata();
    c6.dispdata();

    return 0;
}