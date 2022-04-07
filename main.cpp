#include <iostream>
#include "registro.h"
#include "estudiante.h"
#define CL system("cls")
#define PA system("pause")
using namespace std;

    //clase estudiante: codigo, nombre, apellido, direccion, telefono.
    
    int main(int argc, char const *argv[])
    {
        int opcion;
        registro registro;


        do
        {
            CL;
            cout << "1. Ingresar estudiante" << endl;
            cout << "2. Mostrar estudiante" << endl;
            cout << "3. modificar estudiante" << endl;
            cout << "4. Eliminar estudiante" << endl;
            cout << "5. Salir" << endl;
            cout << "Seleccione una opcion: ";
            cin >> opcion;

            switch (opcion)
            {
            case 1: 
                CL;
                int a, c;
                string n, d, t;
                cout <<"Ingrese nombre: ";
                cin >> n;
                cout <<"Ingrese codigo: ";
                cin >> c;
                cout <<"Ingrese apellido: ";
                cin >> a;
                cout <<"Ingrese direccion: ";
                cin >> d;
                cout <<"Ingrese telefono: ";
                cin >> t;
                Estudiante nueva = Estudiante();
                nueva.actualizar(c, _strdup(n.c_str()), a )
                registro.guardar(nueva);
                PA;
                break;
            case 2:
                CL;
                cout << " |DATOS| " << endl;
                registro.mostrar();
                PA;
                break;
            case 3:
                CL;
                int id;
                cout << "codigo de estudiante a modificar: ";
                cin >> id;
                registro.modificar(id);
                PA;
                break;
            case 4:
                CL;
                int id;
                cout << "codigo de estudiante a eliminar: ";
                registro.eliminar(id);

                PA;
                break;
   
            }
         
        }while(opcion != 5);
    }
    
    
