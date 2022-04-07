#include "estudiante.h"
#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>



Estudiante::Estudiante()
{
    this -> codigo = 0;
    this -> direccion = 0;
    this -> telefono = 0;
    strncpy_s(this -> nombre, "\0");
    strncpy_s(this -> apellido, "\0");
}

void Estudiante::actualizar(int codigo, char nombre[20], char apellido[20], int direccion, int telefono)
{
    this -> codigo = c;
    this -> direccion = d;
    this -> telefono = t;
    strncpy_s(this -> nombre, n);
    strncpy_s(this -> apellido, a);

}

void Estudiante::imprimir()
{
    cout << "Codigo: " << this -> codigo << endl;
    cout << "Nombre: " << this -> nombre << endl;
    cout << "Apellido: " << this -> apellido << endl;
    cout << "Direccion: " << this -> direccion << endl;
    cout << "Telefono: " << this -> telefono << endl;

}

int Estudiante::obtenerCodigo()
{
    return this -> codigo;
}