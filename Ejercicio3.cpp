/*
Ejercicio 3
: Se requiere un programa para obtener la estatura promedio de un grupo de
personas, cuyo número de miembros se desconoce, el ciclo debe efectuarse siempre y
cuando se tenga una estatura registrada. Utilice el ciclo apropiado. Considere la opción
salir, la cual retorna al menú principal.
*/

#include <iostream>

using namespace std;

void calcAltura();
void Menu();

int main(int argc, char const *argv[])
{
    Menu();
    return 0;
}


void calcAltura(){
    int contar = 0;
    double suma = 0.0;
    double altura;

    while (true)
    {
        cout << "Ingrese la estatura de la persona" << endl;
        cout << "Cuando terminas de ingresar altura, ecribe 0" << endl;
        cin >> altura;

        if (altura == 0){
            break;
        }
        suma = suma + altura;
        contar++;
    }

    if (contar > 0){
        double promedio = suma / contar;
        cout << "La estatura promedio es: " << promedio << endl;
    }
    else{
        cout << "No se han ingresado datos" << endl;
    }
}

void Menu(){
    int opcion;
    do
    {
        system("cls");
        cout << "Bienvenido" << endl;
        cout << "Escribe una una opcion " << endl;
        cout << "1. Calcular alturas " << endl;
        cout << "2. Salir " << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            calcAltura();
            break;
            case 2:
            cout << "Saliendo... " << endl;
            break;
        default:
        cout << "Opcion invalida " << endl;
            break;
        }
        system("pause");
    } while (opcion != 2);
}