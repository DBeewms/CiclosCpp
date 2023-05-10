/*
Ejercicio 5:
Se requiere un programa para determinar el promedio de la las n notas de 
n estudiantes y al final determinar el promedio más alto. Utilice el ciclo apropiado.
Considere la opción salir, la cual retorna al menú principal.
*/

#include <iostream>

using namespace std;

void notas();
void menu();

int main(int argc, char const *argv[])
{
    menu();
    return 0;
}


void notas(){
    int num, i, j;
    float nota, promedio, promedioMax = 0;
    
    while (true) {
        cout << "Escriba la cantida de estudiantes" << endl;
        cout << "Para salir del programa escriba: salir" << endl;
        cin >> num;
        
        if (cin.fail()) {
            cout << "Nos vemos" << endl;
            break;
        }
        
        promedioMax = 0;
        for (i = 1; i <= num; i++) {
            promedio = 0;
            for (j = 1; j <= num; j++) {
                cout << "Ingrese la notas del estudiante N" << i << ": ";
                cin >> nota;
                promedio = promedio + nota;
            }
            
            promedio = promedio/num;
            if (promedio > promedioMax) {
                promedioMax = promedio;
            }
        }
        cout << "El promedio mas alto es: " << promedioMax << endl;
    }
}

void menu(){
int opcion;

    do
    {
        system("cls");
        cout << "Bienvenido" << endl;
        cout << "Escribe una opcion " << endl;
        cout << "1. Ver los promedios " << endl;
        cout << "2. Salir " << endl;
        cin >> opcion;

        switch (opcion){
        case 1:
            notas();
            break;
        case 2:
            cout << "Saliendo..." << endl;
            break;
        default:
        cout << "Opcion invalida..." << endl;
            break;
        }
        system("pause");
    } while (opcion != 2);
}