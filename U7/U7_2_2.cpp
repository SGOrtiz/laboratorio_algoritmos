#include <iostream>
#include <vector>
using namespace std;

/*Realizar un sistema para el control de ventas en un local. Cada
producto tiene los siguientes datos: Código, nombre, cantidad y
precio (agregar los datos que necesiten). Se deberá poder
registrar una venta, pidiendo el código del producto y la cantidad
(tener en cuenta el stock del mismo), mostrar el total de ventas
realizadas en el día (Utilizar una estructura de fecha con el día,
mes y año como strings), mostrar los productos mas vendidos y
una función para buscar un producto por su código.*/

struct productos{
    int codigo,precio,stock,cantidad_de_ventas=0;
    string nombre;
};
struct fecha{
    string dia,mes,anio;
};
struct venta{
    vector <productos> productitos;
};

void ingresar_la_venta(vector <venta> &ventas,vector<productos> &compra,vector <productos> catalogo){
    bool condicion=true;
    int codi;
    cout<<"ingresar los productos de la venta"<<endl;
    while(condicion){
        cout<<"ingrese el codigo del producto que quiere agregar a la venta: "<<endl;
        cout<<"para salir ingrese el codigo -1"<<endl;
        cin>>codi;
        if(codi==-1){
            condicion=false;
            continue;
        }
        else{
            for(int i=0;i<catalogo.size();i++){
                if(codi==catalogo[i].codigo){
                    if(catalogo[i].stock<1){
                        cout<<"no tenemos suficiente stock en este momento";
                    }
                    else{
                        catalogo[i].cantidad_de_ventas ++;
                        compra.push_back(catalogo[i]);
                    }
                }
            }
        }
    }    
    venta nuevaVenta; // Crear una nueva venta
    nuevaVenta.productitos = compra; // Asignar productos
    ventas.push_back(nuevaVenta); // Agregar la venta al vector
}
void mostrar_ventas(vector<venta> &ventas) {
    for (size_t i = 0; i < ventas.size(); i++) {
        cout << "Venta #" << (i + 1) << ":" << endl;
        for (const auto &producto : ventas[i].productitos) {
            cout << "Código: " << producto.codigo
                << ", Nombre: " << producto.nombre
                << ", Precio: " << producto.precio
                 << endl; // La cantidad se muestra en función de la cantidad vendida
        }
        cout << "-----------------------" << endl;
    }
}
void productos_mas_vendidos(vector <venta> ventas){
    int max=0;
    for(int i=0;i<ventas.size();i++){
        for(int j=0;j<ventas[i].productitos.size();j++){
            int cant=ventas[i].productitos[j].cantidad_de_ventas;
            if(max<cant){
                max=ventas[i].productitos[j].cantidad_de_ventas;
            }
        }
    }
    
}

int main(){
    vector <venta> ventas;
    vector <productos> compra;
    vector <productos> catalogo;
    catalogo.push_back({1,7000,80,"pepo"});
    catalogo.push_back({2,6775,80,"pepito"});
    ingresar_la_venta(ventas,compra,catalogo);
    mostrar_ventas(ventas);
}