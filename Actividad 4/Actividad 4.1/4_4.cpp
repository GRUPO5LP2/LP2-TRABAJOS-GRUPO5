#include <iostream>
#include <vector>
using namespace std;


class Tienda{
    public:
        string nombre;
        string direccion;
        string tipo;
        vector<string> productos_disponibles;
        vector<float> precios;
        vector<string> compras;
        Tienda(string nombre, string direccion, string tipo){
            this->nombre = nombre;
            this->direccion = direccion;
            this->tipo = tipo;
        }

        void generar_lista_productos(){
            string producto;
            float precio;
            cout<<"Ingrese el nombre del producto: ";
            cin>>producto;
            cout<<"Ingrese el precio del producto: ";
            cin>>precio;
            productos_disponibles.push_back(producto);
            precios.push_back(precio);
        }
        void ver_lista_productos_disponibles(){
            for(int i = 0; i < productos_disponibles.size(); i++){
                cout<<productos_disponibles[i]<<" - "<<precios[i]<<endl;
            }
        }

        void ver_lista_de_compras(){
            for(int i = 0; i < compras.size(); i++){
                cout<<compras[i]<<endl;
            }
        }

};

class Cliente {
    public:
        string nombres;
        string apellidos;
        string direccion;
        float cuenta;
        vector<string> lista_compras;
        Cliente(string nombres, string apellidos, string direccion){
            this->nombres = nombres;
            this->apellidos = apellidos;
            this->direccion = direccion;

        }
    
        void agregar_productos_lista(){
            string producto;
            cout<<"¿Que producto desea agregar? " ;
            cin>>producto;
            lista_compras.push_back(producto);
        }

        void pagar_cuenta(Tienda tienda){
            float total = 0;
            float pago = 0;
            for(int i = 0; i < lista_compras.size(); i++){
                for(int j = 0; j < tienda.productos_disponibles.size(); j++){
                    if(lista_compras[i] == tienda.productos_disponibles[j]){
                        total += tienda.precios[j];
                    }
                }
            }
            cout << "El precio total es: " << total << endl;
            cout << "¿Con cuanto pagará su cuenta? ";
            cin >> pago;
            if(pago >= total){
                cout << "Su vuelto es: " << pago - total << endl;
                tienda.compras.insert(tienda.compras.end(), lista_compras.begin(), lista_compras.end());
            } else {
                cout << "No tiene suficiente dinero" << endl;
            }
            
        }
};

int menu(){
    int opcion;
    cout<<"Menu"<<endl;
    cout<<"1. Agregar productos a la tienda"<<endl;
    cout<<"2. Ver lista de productos disponibles"<<endl;
    cout<<"3. Agregar productos a la lista de compras"<<endl;
    cout<<"4. Ver lista de compras"<<endl;
    cout<<"5. Calcular total y pagar"<<endl;
    cout<<"6. Salir"<<endl;
    cout<<"Elija una opción: ";
    cin>>opcion;
    return opcion;
}

int main(){
    vector<Tienda> tiendas;
    vector<Cliente> clientes;
    string nombre, direccion, tipo, nombres, apellidos, direccion_cliente;
    int opcion;
    while(true){
        cout<<"Nombre de la tienda: ";
        cin>>nombre;
        cout<<"Direccion de la tienda: ";
        cin>>direccion;
        cout<<"Tipo de tienda: ";
        cin>>tipo;
        Tienda tienda(nombre, direccion, tipo);
        tiendas.push_back(tienda);
        cout << endl;
        cout<<"Nombres del cliente: ";
        cin>>nombres;
        cout<<"Apellidos del cliente: ";
        cin>>apellidos;
        cout<<"Direccion del cliente: ";
        cin>>direccion_cliente;
        Cliente cliente(nombres, apellidos, direccion_cliente);
        clientes.push_back(cliente);
        cout << endl;
        while(true){
            cout<<"Ingrese el nombre de la tienda: ";
            cin>>nombre;
            for(int i = 0; i < tiendas.size(); i++){
                if(tiendas[i].nombre == nombre){
                    cout<<"Ingrese el nombre del cliente: ";
                    cin>>nombres;
                    cout<< endl;
                    for(int j = 0; j < clientes.size(); j++){
                        if(clientes[j].nombres == nombres){
                            while(true){
                                opcion = menu();
                                if(opcion == 1){
                                    tiendas[i].generar_lista_productos();
                                } else if(opcion == 2){
                                    tiendas[i].ver_lista_productos_disponibles();
                                } else if(opcion == 3){
                                    clientes[j].agregar_productos_lista();
                                } else if(opcion == 4){
                                    tiendas[i].ver_lista_de_compras();
                                } else if(opcion == 5){
                                    clientes[j].pagar_cuenta(tiendas[i]);
                                } else if(opcion == 6){
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}