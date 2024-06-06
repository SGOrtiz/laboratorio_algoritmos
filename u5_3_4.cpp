#include <iostream>
using namespace std;

void fare(float &temp){

    temp = (temp * 9/5) + 32;



}




int main(){

    float temp;
    cout<<"ingresa la temperatura que gustes "<<endl;
    cin>>temp;
    fare(temp);
    cout<<temp;

}