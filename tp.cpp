#include <iostream>
#include <string>
using namespace std;

void registrarTransacciones(transacciones);
void verTransaccion(void);

const int MAX_TRANSACCION=100;
transacciones D[MAX_TRANSACCION];

struct transacciones
{
string tipo;
string nombre;
int cantidad;
float precio;
};

int main(){

}

void registrarTransacciones(transacciones D){
    cout<<"ingrese tipo (compra/venta)"<<endl;
    cin >> D.tipo;
    cout<<"ingrese el nombre del producto"<<endl;
    cin>>D.nombre;
    cout<<"ingrese la cantidad"<<endl;
    cin>>D.cantidad;
    
    }
void verTransaccion(){
    
}
