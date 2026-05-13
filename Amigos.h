#pragma once

#pragma once

#include <iostream>
#include <fstream>

using namespace std;

class Amigo {

private:

    char nombre[30];
    char fechaNacimiento[15];
    char sexo;
    char estado;

public:

    Amigo();

    void setAmigo(const char nom[], const char fecha[], char sx);

    char* getNombre();

    char* getFechaNacimiento();

    char getSexo();

    char getEstado();

    void guardarArchivo(ofstream& fsalida);

    bool leerArchivo(ifstream& fentrada);

    bool buscar(ifstream& fentrada, int nroReg);

    bool eliminar(fstream& fes, int nroReg);

    bool modificar(fstream& fes, int nroReg);

    int getTamBytesRegistro();
};
