#pragma once
using namespace std;

class Estudiante
{
    private:
        int codigo[10];
        char nombre[20];
        char apellido[20];
        int direccion[20];
        int telefono[10];
    public:
        Estudiante();
        void actualizar(int, char[20], char[20], int[20], int[10]);
        void imprimir();
        int obtenerCodigo();

};