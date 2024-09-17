#include <iostream>
#include <vector>
using namespace std;
struct punto{
    int x;
    int y;    
};
void ingreso(vector <punto> &plano){
    int i=0;
    punto punto1;
    while(i>=0){
        cout<<"ingrese la coordenada en x del punto: "<<endl;
        cin>>punto1.x;
        cout<<"ingrese la coordenada en y del punto: "<<endl;
        cin>>punto1.y;
        cout<<"si quiere salir ingrese un numero menor a 0"<<endl;
        cin>>i;
        plano.push_back(punto1);
    }
    for(int i=0;i<plano.size();i++){
        cout<<"("<<plano[i].x<<";"<<plano[i].y<<")"<<endl;
    }
}
void iguales_o_no(vector <punto> plano){
    int auxx;
    int auxy;
    vector <punto> vectores_que_se_repiten;
    punto punto_repetido;
    for(int i=0;i<plano.size();i++){
        auxx = plano[i].x;
        auxy = plano[i].y;
        for(int j=i+1;j<plano.size();j++){
            if(auxx==plano[j].x && auxy==plano[j].y){
                punto_repetido.x=auxx;
                punto_repetido.y=auxy;
                vectores_que_se_repiten.push_back(punto_repetido);
            }
        }
    }
    cout<<"los vectores que se repiten son: "<<endl;
    for(int i=0;i<vectores_que_se_repiten.size();i++){
        cout<<"("<<vectores_que_se_repiten[i].x<<";"<<vectores_que_se_repiten[i].y<<")"<<endl;
    }
}

int main(){
    vector <punto> plano;
    ingreso(plano);
    iguales_o_no(plano);
}