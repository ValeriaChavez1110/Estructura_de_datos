#include "Amigo.h"
#include <cstring>

Amigo::Amigo() {

    strcpy_s(nombre, sizeof(nombre), "");
    strcpy_s(fechaNacimiento, sizeof(fechaNacimiento), "");

    sexo = ' ';
    estado = ' ';
}

void Amigo::setAmigo(const char nom[], const char fecha[], char sx) {

    strcpy_s(nombre, sizeof(nombre), nom);
    strcpy_s(fechaNacimiento, sizeof(fechaNacimiento), fecha);

    sexo = sx;
    estado = 'A';
}

char* Amigo::getNombre() {

    return nombre;
}

char* Amigo::getFechaNacimiento() {

    return fechaNacimiento;
}

char Amigo::getSexo() {

    return sexo;
}

char Amigo::getEstado() {

    return estado;
}

void Amigo::guardarArchivo(ofstream& fsalida) {

    fsalida.write(reinterpret_cast<char*>(this), sizeof(Amigo));
}

bool Amigo::leerArchivo(ifstream& fentrada) {

    fentrada.read(reinterpret_cast<char*>(this), sizeof(Amigo));

    return !fentrada.eof();
}

bool Amigo::buscar(ifstream& fentrada, int nroReg) {

    fentrada.seekg(sizeof(Amigo) * (nroReg - 1), ios::beg);

    fentrada.read(reinterpret_cast<char*>(this), sizeof(Amigo));

    return !fentrada.eof();
}

bool Amigo::eliminar(fstream& fes, int nroReg) {

    fes.seekg(sizeof(Amigo) * (nroReg - 1), ios::beg);

    fes.read(reinterpret_cast<char*>(this), sizeof(Amigo));

    if (fes.eof()) {

        return false;
    }

    estado = 'E';

    fes.seekp(sizeof(Amigo) * (nroReg - 1), ios::beg);

    fes.write(reinterpret_cast<char*>(this), sizeof(Amigo));

    return true;
}

bool Amigo::modificar(fstream& fes, int nroReg) {

    fes.seekp(sizeof(Amigo) * (nroReg - 1), ios::beg);

    fes.write(reinterpret_cast<char*>(this), sizeof(Amigo));

    return true;
}

int Amigo::getTamBytesRegistro() {

    return sizeof(Amigo);
}
