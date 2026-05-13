#pragma once

#include <iostream>
#include <string>

#include "Amigo.h"

using namespace std;

class ABAmigo {

private:

    string nomArchivo;
    Amigo amig;

public:

    ABAmigo(string nomArch);

    void introducirDatos(Amigo& newReg);

    void mostrarRegistro(int nroReg);

    void adicionarNuevo();

    void listar();

    int buscarReg();

    void eliminarReg();

    void modificarReg();
};
