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
    int codigo,precio,cantidad=0,stock,cantidad_de_ventas=0;
    string nombre;
};
struct fecha{
    int dia,mes,anio;
};
struct venta{
    vector <productos> productitos;
    fecha fecha_venta;
};

void ingresar_la_venta(vector <venta> &ventas,vector<productos> &compra,vector <productos> catalogo){
    bool condicion=true;
    int codi;
    int cantidades;
    int dia,mes,anio;
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
            cout<<"ingrese la cantidad del producto: "<<endl;
            cin>>cantidades;
            for(int i=0;i<catalogo.size();i++){
                if(codi==catalogo[i].codigo){
                    if(cantidades>catalogo[i].stock){
                        cout<<"no tenemos suficiente stock en este momento";
                    }
                    else{
                        catalogo[i].cantidad_de_ventas+=cantidades;
                        catalogo[i].cantidad=cantidades;
                        compra.push_back(catalogo[i]);
                    }
                }
            }
        }
    }
    cout<<"ingrese el dia,mes y año de la venta: "<<endl;
    cin>>dia;
    cin>>mes;
    cin>>anio;    
    venta nuevaVenta; // Crear una nueva venta
    nuevaVenta.productitos = compra;
    nuevaVenta.fecha_venta.dia=dia;
    nuevaVenta.fecha_venta.mes=mes;
    nuevaVenta.fecha_venta.anio=anio;
    ventas.push_back(nuevaVenta); // Agregar la venta al vector
}
void mostrar_ventas(vector<venta> &ventas) {
    for (size_t i = 0; i < ventas.size(); i++) {
        cout << "Venta #" << (i + 1) << ":" << endl;
        for (const auto &producto : ventas[i].productitos) {
            cout << "Código: " << producto.codigo
                << ", Nombre: " << producto.nombre
                << ", Precio: " << producto.precio
                << ",cantidad: "<<producto.cantidad
                 << endl; // La cantidad se muestra en función de la cantidad vendida
        }
        cout << "-----------------------" << endl;
    }
}
void productos_mas_vendidos(vector <venta> ventas){
    int max=0;
    productos producto_mas_vendido;
    for(int i=0;i<ventas.size();i++){
        for(int j=0;j<ventas[i].productitos.size();j++){
            int cant=ventas[i].productitos[j].cantidad_de_ventas;
            if(max<cant){
                max=ventas[i].productitos[j].cantidad_de_ventas;
                producto_mas_vendido=ventas[i].productitos[j];
            }
        }
    }
    cout<<"El producto mas vendido es: "<<producto_mas_vendido.nombre<<endl;
}
void cantidad_de_ventas_en_un_dia (vector <venta> ventas){
    bool condicion;
    int dia;
    int mes;
    int anio;
    vector <venta> ventas_en_un_dia;
    int cantidad_en_un_dia;
    while(condicion){
        cout<<"ingrese el dia que quiere ver las ventas: "<<endl<<"ingrese dia -1 para salir"<<endl;
        cin>>dia;
        cin>>mes;
        cin>>anio;
        if(dia==-1){
            condicion=false;
            continue;
        }
        for(int i=0;i<ventas.size();i++){
            if(dia==ventas[i].fecha_venta.dia&&mes==ventas[i].fecha_venta.mes&&anio==ventas[i].fecha_venta.anio){
                cantidad_en_un_dia++;
            }
        }
        break;
    }
    cout<<"La cantidad de ventas este dia son: "<<cantidad_de_ventas_en_un_dia<<endl;
}
void ver_producto(vector <productos> catagolo){
    int codigo_falso;
    cout<<"Ingrese el codigo del producto que quieres ver: "<<endl<<"ingrese -1 para salir"<<endl;
    cin>>codigo_falso;
    for(int i=0;i<catagolo.size();i++){
        if(codigo_falso==catagolo[i].codigo){
            cout<<" codigo: " <<catagolo[i].codigo<<" precio: " <<catagolo[i].precio<<" nombre: " <<catagolo[i].nombre<<endl;
        }
    }
}

int main(){
    vector <venta> ventas;
    vector <productos> compra;
    vector <productos> catalogo;
    productos producto1,producto2;
    producto1.nombre="Lata de tomates";
    producto1.codigo=1;
    producto1.precio=5800;
    producto1.stock=60;
    producto2.nombre="Paquete de fideos";
    producto2.codigo=2;
    producto2.precio=3000;
    producto2.stock=30;
    catalogo.push_back(producto1);
    catalogo.push_back(producto2);
    ingresar_la_venta(ventas,compra,catalogo);
    mostrar_ventas(ventas);
    productos_mas_vendidos(ventas);
    cantidad_de_ventas_en_un_dia(ventas);
    ver_producto(catalogo);
}