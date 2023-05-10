/*
Ejercicio 4:
Se requiere un programa para determinar cuánto ahorrará una persona en
un año, si al final de cada mes deposita variables cantidades de dinero; además, se
requiere saber cuánto lleva ahorrado cada mes. Utilice el ciclo apropiado. Considere la
opción salir, la cual retorna al menú principal.
*/

#include <iostream>
using namespace std;

void ahorros();
void menu();

int main(int argc, char const *argv[])
{
    menu();
    return 0;
}


void ahorros()
{
    cout << "Calculare tus ahorros a lo largo del año" << endl;
    float inicioA, ahorradoMes[12], total;
    cout << "Dime tus ahorros a inicios del año" << endl;
    cin >> inicioA;

    for (int i = 0; i <= 11; i++)
    {
        cout << "Ingrese tus ahorros del mes " << endl;
        cin >> ahorradoMes[i];
    }

    total = inicioA;
    cout << "A inicios del año los ahorros fueron de C$" << inicioA << endl;
    for (int i = 0; i <= 11; i++)
    {
        total += ahorradoMes[i];
        cout << "Mes " << i + 1 << ":C$ " << total << endl;
    }
}

void menu(){
    int opcion;
    do{
        system("cls");
        cout << "Bienvenido" << endl;
        cout << "Selecciona una opcion " << endl;
        cout << "1. Ver ahorros " << endl;
        cout << "2. Salir " << endl;
        cin >> opcion;

        switch (opcion){
        case 1:
            ahorros();
            break;
        case 2:
            cout << "Adios..." << endl;
            break;

        default:
        cout << "Opcion invalida..." << endl;
            break;
        }
        system("pause");
    } while (opcion != 2);
}
