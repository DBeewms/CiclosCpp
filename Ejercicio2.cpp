/*
Ejercicio 2:
“El náufrago satisfecho” ofrece hamburguesas sencillas (S), dobles (D) y 
triples (T), las cuales tienen un costo de $20, $25 y $28 respectivamente. La empresa 
acepta tarjetas de crédito con un cargo de 5 % sobre la compra. Suponiendo que los 
clientes adquieren N hamburguesas, las cuales pueden ser de diferente tipo, realice un 
algoritmo para determinar cuánto deben pagar. Utilice el ciclo apropiado. Considere la 
opción salir, la cual retorna al menú principal.*/

#include <iostream>

using namespace std;

void Hambuguesas();
void Menu();

int main(int argc, char const *argv[])
{
    Menu();
    return 0;
}

void Hamburguesas(){
    int opcion;
    int nH, precioH;
    float Total, cargoTarjeta;
    
    do {
        Total = 0; 
        cout << "Inserta la letra de la orden que quieres pedir: " << endl;
        cout << "Hamburguesa sencilla (S) Precio: $20" << endl;
        cout << "Hamburguesa doble (D) Precio: $25" << endl;
        cout << "Hamburguesa triple (T) Precio: $28)" << endl;
        cout << "Salir (X)" << endl;
        cin >> opcion;
        
        switch(opcion) {
            case 'S':
                precioH = 20;
                cout << "Escriba la cantidad de hamburguesas que desea comprar: ";
                cin >> nH;
                Total = nH * precioH;
                cargoTarjeta = Total * 0.05;
                Total = Total + cargoTarjeta;
                cout << "El total de su compra es: " << Total << endl;
                break;
            case 'D':
                precioH = 25;
                cout << "Escriba la cantidad de hamburguesas que desea comprar: ";
                cin >> nH;
                Total = nH * precioH;
                cargoTarjeta = Total * 0.05;
                Total = Total + cargoTarjeta;
                cout << "El total de su compra es: " << Total << endl;
                break;
            case 'T':
                precioH = 28;
                cout << "Escriba la cantidad de hamburguesas que desea comprar: ";
                cin >> nH;
                Total = nH * precioH;
                cargoTarjeta = Total * 0.05;
                Total = Total + cargoTarjeta;
                cout << "El total de su compra es: " << Total << endl;
                break;
            case 'X':
                cout << "Saliendo del programa...";
            default:
                cout << "Opcion invalida";
                break;
        }
        
    } while (opcion != 'X');
}

void Menu(){
    int op;
    do
    {
        system("cls");
        cout << "Bienvenido a El náufrago satisfecho" << endl;
        cout << "Digita tu opcion" << endl;
        cout << "1. Menu de hamburguesas" << endl;
        cout << "2. Salir" << endl;
        cin >> op;
        switch (op)
        {
        case 1:
            Hamburguesas();
            break;
        case 2:
            cout << "Saliendo...";
            break;
        default:
        cout << "Opcion invalida";
            break;
        }
        system("pause");
    } while (op!=2);
    
}