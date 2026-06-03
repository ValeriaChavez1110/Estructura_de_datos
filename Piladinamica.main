#include <iostream>
using namespace std;

struct nodo {
    int dato;
    nodo* sig;
};

class pila {
private:
    nodo* cima;
    int contador;
public:
    pila() {
        cima = NULL;
        contador = 0;
    }

    void push() {
        nodo* nuevo = new nodo();
        cout << "Ingrese dato: ";
        cin >> nuevo->dato;
        nuevo->sig = cima;
        cima = nuevo;
        contador++;
    }

    void pop() {
        if (cima == NULL) {
            cout << "Pila vacia\n";
            return;
        }
        nodo* aux = cima;
        cima = cima->sig;
        delete aux;
        contador--;
    }

    void show() {
        nodo* aux = cima;
        while (aux != NULL) {
            cout << aux->dato << " -> ";
            aux = aux->sig;
        }
        cout << "NULL\n";
    }

    void top() {
        if (cima == NULL) {
            cout << "Pila vacia\n";
        } else {
            cout << "Top: " << cima->dato << endl;
        }
    }

    void size() {
        cout << "Size: " << contador << endl;
    }
};

int main() {
    pila l;
    int opcion;
    do {
        system("cls");
        cout << "[:]Pila en lista enlazada" << endl;
        cout << "[1]Push" << endl;
        cout << "[2]Pop" << endl;
        cout << "[3]Mostrar" << endl;
        cout << "[4]Top" << endl;
        cout << "[5]Size" << endl;
        cout << "[0]Salir" << endl;
        cout << "\nIngresa tu opcion: ";
        cin >> opcion;
        switch (opcion) {
        case 1:
            l.push();
            break;
        case 2:
            l.pop();
            break;
        case 3:
            l.show();
            break;
        case 4:
            l.top();
            break;
        case 5:
            l.size();
            break;
        case 0:
            return 0;
        default:
            cout << "Por favor ingresa una opcion correcta.\n";
            break;
        }
        system("pause");
    } while (opcion != 0);
    return 0;
}
