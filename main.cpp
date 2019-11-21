<<<<<<< HEAD
#include "FuncionesPrimeraEntrega.h"
#include "FuncionesSegundaEntrega.h"

int main() {
    srand(time(NULL));
=======
#include <iostream>
#include <fstream>
using namespace std;

void lectura(ifstream &archivo,int &val, string &nombreArchivo);
void ADerecha(string &texto);
void AIzquierda(string &texto);
void CTexto(string &texto);


int main() {
>>>>>>> 32f3b4253d2a4b9ddcfc0e6b85a57437018f509d
    ifstream archivo;
    int opcion = 0;
    int val = 0;
    string texto;
    string validacion;
    string nombreArchivo;
<<<<<<< HEAD
    vector<string> lineas;

    lectura(archivo, val, nombreArchivo);

    while (!archivo.eof())
        getline(archivo, texto);

    Ajustelinea(texto, lineas);
    cout << "\nArchivo ajustado con exito.\n" << endl;
    archivo.close(); //Cerramos el archivo

    if (val == 1) {
        cout << "Estas son las opciones: " << endl;
        cout << "1. Centrar texto" << endl;
        cout << "2. Alinear texto a la izquierda" << endl;
        cout << "3. Alinear texto a la derecha" << endl;
        cout << "5. Buscar palabra" << endl;
        cout << "6. Reemplazar palabra" << endl;

        do{
            cout << "Elige alguna opcion:\n";
            cin >> opcion;
            if (opcion == 1) {
                CTexto(lineas);
            }
            else if (opcion == 2) {
                AIzquierda(lineas);
            }
            else if (opcion == 3) {
                ADerecha(lineas);
            }
            else if (opcion==5 || opcion==6){
                string buscar;
                cout << "Ingresa la palabra a buscar: ";
                cin >> buscar;
                if (opcion==6){
                    string reemplazar;
                    cout << "\nReemplazar por: ";
                    cin >> reemplazar;
                    for (int i=0; i<lineas.size(); i++){
                        Separarpalabra(lineas[i], buscar, reemplazar);
                    }

                }
            }
            cout << "\nDeseas realizar un cambio mas?\n";
            cin >> validacion;
            if (validacion == "Si")
                opcion = 0;
            else
                opcion = 4;
        }while (opcion != 4);

        //cout << "¿Desea guardar los cambios?" << endl;
        //cin >> validacion;
        return 0;
    }
}
//C:\Users\Rommel\Desktop\EllaNoMeAma.txt

=======
    lectura(archivo, val, nombreArchivo);
    if (val == 1) {
        cout << "Estas son las opciones: " << endl;
        cout << "1. Centrar texto" << endl;
        cout << "2. Alinear texto a la izquierda" << endl;
        cout << "3. Alinear texto a la derecha" << endl;

        do{
            cout << "Elige alguna opcion:\n";
            cin >> opcion;
            if (opcion == 1) {
                archivo.open(nombreArchivo.c_str(), ios::in);
                while (!archivo.eof()) { //mientras no sea final del archivo
                    getline(archivo, texto);
                    CTexto(texto);
                }
                archivo.close();
                int op;
                cout <<"1. Guardar";
                cin >> op;
                if(op==1){
                    ofstream archivo;
                    archivo.open("C://Users/Irvin Coronado/Proyecto/Registro.txt",ios::out);
                    archivo<<texto;
                    archivo.close();
                }
            }
            else if (opcion == 2) {
                archivo.open(nombreArchivo.c_str(), ios::in);
                while (!archivo.eof()) { //mientras no sea final del archivo
                    getline(archivo, texto);
                    AIzquierda(texto);
                }
                archivo.close();
                int op;
                cout <<"1. Guardar";
                cin >> op;
                if(op==1){
                    ofstream archivo;
                    archivo.open("C://Users/Irvin Coronado/Proyecto/Registro.txt",ios::out);
                    archivo<<texto;
                    archivo.close();
                }
            }
            else if (opcion == 3) {
                archivo.open(nombreArchivo.c_str(), ios::in);
                while (!archivo.eof()) { //mientras no sea final del archivo
                    getline(archivo, texto);
                    ADerecha(texto);
                }
                archivo.close();
                int op;
                cout <<"1. Guardar";
                cin >> op;
                if(op==1){
                    ofstream archivo;
                    archivo.open("C://Users/Irvin Coronado/Proyecto/Registro.txt",ios::out);
                    int i=0;
                    while(i<=100){
                        archivo<<texto[i];
                        i=i+1;
                    }
                    archivo.close();
                }
            }
            cout << "Deseas realizar un cambio mas?\n";
            cin >> validacion;
            if (validacion == "Si")
                opcion = 0;
            else
                opcion = 4;
        }while (opcion != 4);

        //cout << "¿Desea guardar los cambios?" << endl;
        //cin >> validacion;
        return 0;
    }
}
void lectura(ifstream &archivo, int &val, string &nombreArchivo){
    string texto;
    string validacion;
    cout << "Digite el nombre o la ubicacion del archivo o fichero:\n";
    getline(cin, nombreArchivo);
    archivo.open(nombreArchivo.c_str(), ios::in); //Abrimos el archivo en modo lectura

    if (archivo.fail()) {
        cout << "Lo siento. No se pudo abrir el archivo";
        exit(1);
    }
    else {
        cout << "Archivo abierto con exito." << endl;
        val=1;
        archivo.close(); //Cerramos el archivo
    }
}

void ADerecha(string &texto) {
    string agregar;
    int espacios;
    espacios=80-texto.length();
    for (int i = 0; i < espacios; i++) {
        agregar += " ";
    }
    agregar+=texto;
    texto=agregar;
    cout << texto << endl;
}

void AIzquierda(string &texto) {
    string compr;
    int cont=0;
    compr = texto[0];
    if (compr == " ") {
        for (int i = 0; i <= texto.length(); i++) {
            compr = texto[i];
            if (compr == " ")
                cont++;
            else
                break;
        }
        texto.erase(0, cont);
    }
    cout << texto << endl;
}

void CTexto(string &texto) {
    int espacios;
    espacios = (80 - texto.length()) / 2;
    for (int i = 1; i <= espacios; i++) {
        cout << " ";
    }
    cout << texto << endl;
}
>>>>>>> 32f3b4253d2a4b9ddcfc0e6b85a57437018f509d
