#include <iostream>
using namespace std;

int multi(int &n1){
    n1 *=2;
    return n1;

}
int main(){

    int num = 6;

    cout<<"el resultado de la multi es: "<<multi(num)<<endl;


}
