#include <iostream>
using namespace std;
void pepo(int &n1,int &n2){
    int n =n2;
    n2=n1;
    n1=n;
    
}

int main(){
    int n1=7;
    int n2=5;
    pepo(n1,n2);
    cout<<n1<<n2<<endl;

}