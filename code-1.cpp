#include <iostream>
using namespace std;
class rectangular{
    public:
    double lnth,wdth;
    void area (){
        cout<<"Enter Length: ";
        cin>>lnth;
        cout<<"Enter Width: ";
        cin>>wdth;
        cout<<"Area is "<<lnth*wdth<<endl;
    }
    void perimeter (){
        cout<<"Enter Length: ";
        cin>>lnth;
        cout<<"Enter Width: ";
        cin>>wdth;
        cout<<"Perimeter of Rectangle= "<<2*(lnth+wdth);
    }
};
int main(){
    cout<<"------To Find Area-------"<<endl;
    rectangular b1;
    b1.area();
    cout<<"------To Find Perimeter-------"<<endl;
    b1.perimeter();

}