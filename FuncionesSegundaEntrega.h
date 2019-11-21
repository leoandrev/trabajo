#ifndef PROYECTO_FUNCIONESSEGUNDAENTREGA_H
#define PROYECTO_FUNCIONESSEGUNDAENTREGA_H
#include "librerias.h"

void Limpiarpalabra(string &palabra){
    int l=palabra.length(), i;
    string com;
    for (i=0; i<l; i++){
        com=palabra[i];
        if (com==";" || com=="." || com=="," || com=="!" || com=="¡" || com=="¿" || com=="?")
            palabra.replace(i, 1, "");
    }
}

void Buscarpalabra(string &texto, string &defpalabra, string &buscar, int ref1);

void Reemplazarpalabra(string &texto, string &defpalabra, string &buscar, string &palreemplazo, int ref1){
    if (buscar==defpalabra){
        cout << "La palabra '" << buscar << "' existe en el texto." << endl << endl;
        texto.replace(ref1, buscar.length(), palreemplazo);
    }

}

void Imprimirtexto(vector<string> &vl){
    for (int i=0; i<vl.size(); i++){
        cout << vl[i] << endl;
    }
}

//Funcion para separar cada palabra de cada linea del texto
void Separarpalabra(string &texto, string &buscar, string &reemplazar){
    string comp, defpalabra;
    int ref1, ref2, i;
    int longitud=texto.length();

    for (i=0; i<longitud; i++){
        defpalabra="";
        comp=texto[i];
        if (comp==" " || i==longitud-1){
            if (comp==" ")
                ref2=i-1;
            else if (i==longitud-1)
                ref2=i;
            //cout << "Ref2: " << ref2 << endl;
            for (int j=ref2-1; j>=ref2-20; j--){
                comp=texto[j];
                if (comp==" " || j==0){
                    if (comp==" ")
                        ref1=j+1;
                    else if (j==0)
                        ref1=j;

                    for (int k=ref1; k<=ref2; k++){
                        comp=texto[k];
                        defpalabra+=comp;
                    }

                    Limpiarpalabra(defpalabra);
                    Reemplazarpalabra(texto, defpalabra, buscar, reemplazar, ref1);
                    //v1.push_back(defpalabra);
                    break;
                }

            }

        } //Fin de la condicion if

    } //Fin del primer for
    //for (int i=0; i<v1.size(); i++){
    //cout << v1[i] << endl;
    //}
} //Fin de la función


#endif //PROYECTO_FUNCIONESSEGUNDAENTREGA_H
