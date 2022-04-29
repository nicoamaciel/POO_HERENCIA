
/*
4) La NASA guarda los siguientes datos de las misiones espaciales que realiza:
Número de misión, nombre de la misión, nombre del astronauta  a cargo, fecha de inicio, fecha de fin
, presupuesto disponible.
A partir de los señalado desarrollar los siguientes puntos.
Diseñar la clase correspondiente, con:
* sets() y gets() para todas las propiedades
* Un constructor que asigne la palabra “nada” como valor por omisión para las propiedades de tipo cadena
*/



#include <iostream>
#include <cstring>

using namespace std;

class Nasa{
private:
    int _mision, _fechaInicio, _fechaFin, _presupuesto;
    char _nombreMision[15], _astronauta[15];
public:
    Nasa(int mision=0, int fechaInicio=0, int fechaFin=0, int presupuesto=0, const char *nombreMision="Vacio", const char *astronauta="Vacio")
    {
        _mision=mision;
        _fechaInicio=fechaInicio;
        _fechaFin=fechaFin;
        _presupuesto=presupuesto;
        strcpy(_nombreMision, nombreMision);
        strcpy(_astronauta, astronauta);

    }

    //Gets

    int getMision (){return _mision;}
    int getInicio (){return _fechaInicio;}
    int getFin (){return _fechaFin;}
    int getPresupuesto(){return _presupuesto;}
    char *getNombreMision() {return _nombreMision;}
    char *getAstronauta() {return _astronauta;}

    //Sets
    void setMision(int mis){_mision=mis;}
    void setInicio(int ini){_fechaInicio=ini;}
    void setFin(int fin){_fechaFin=fin;}
    void setnombreMision(const char *nomMision){strcpy(_nombreMision,nomMision);}
    void setAstronauta(const char *astro){strcpy(_astronauta,astro);}

    void Cargar();
    void Mostrar();
    ~Nasa(){};
};


    void Nasa::Cargar(){

    cout << "Cargar mision: ";
    cin >> _mision;
    cout << "Cargar fecha de inicio: ";
    cin >> _fechaInicio;
    cout << "Cargar fecha de fin: ";
    cin >> _fechaFin;
    cout << "Cargar nombre de mision: ";
    cin >> _nombreMision;
    cout << "Cargar nombre de astronauta: ";
    cin >> _astronauta;

    }

    void Nasa::Mostrar(){
    cout << endl << "-------------------" << endl;
    cout << "Mision: " << getMision() << endl;
    cout << "Fecha de inicio: " << getInicio() << endl;
    cout << "Fecha de fin: " << getFin() << endl;
    cout << "Nombre de mision: " << getNombreMision() << endl;
    cout << "Astronauta: " << getAstronauta() << endl;

    }







int main(){
    Nasa obj;
    obj.Cargar();
    obj.Mostrar();



return 0;
}
