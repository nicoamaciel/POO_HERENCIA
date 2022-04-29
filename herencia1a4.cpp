/*
1) Una empresa de tecnología registra a sus empleados mediante
el DNI, nombre,  apellido, domicilio, email, fecha de nacimiento y cargo (número entre 1 y 10).
A partir de los señalado desarrollar los siguientes puntos.

Crear la clase correspondiente, con:
* sets() y gets() para todas las propiedades
* Un constructor con valores por omisión para los parámetros (o alguno de ellos)
*/


#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

class Persona{
private:
    int _dni, _dia, _mes, _anio;
    char _nombre[20], _apellido[20];

public:
    Persona(int dni=0, int dia=0, int mes=0, int anio=0, const char *nom="Vacio",const char *ape="Vacio"){
        _dni=dni;
        _dia=dia;
        _mes=mes;
        _anio=anio;
        strcpy(_nombre,nom);
        strcpy(_apellido,ape);
    }

    //Gets
    int getDni(){return _dni;}
    int getDia(){return _dia;}
    int getMes(){return _mes;}
    int getAnio(){return _anio;}
    char *getNombre(){return _nombre;}//Va con puntero
    char *getApellido(){return _apellido;}//Va con puntero


    //Sets
    void setDni(int dni){_dni=dni;}
    void setMes(int mes){_mes=mes;}
    void setAnio(int anio){_anio=anio;}
    void setNombre (const char *nomb){strcpy(_nombre,nomb);}
    void setApellido (const char *apell){strcpy(_apellido,apell);}

    void Cargar();
    void Mostrar();


    ~Persona(){};
}; ///FIN DE LA CLASE PERSONA

    void Persona::Cargar(){
    cout << endl << "-------------------" << endl;
    cout << "Cargar nombre: ";
    cin >> _nombre;
    cout << "Cargar apellido: ";
    cin >> _apellido;
    cout << "Cargar dni: ";
    cin >> _dni;
    cout << "Cargar dia: ";
    cin >> _dia;
    cout << "Cargar mes: ";
    cin >> _mes;
    cout << "Cargar anio: ";
    cin >> _anio;
    }

    void Persona::Mostrar(){

    cout << endl << "-------------------" << endl;
    cout <<"Nombre: " << getNombre() << endl;
    cout <<"Apellido: " << getApellido() << endl;
    cout <<"Dni: " << getDni() << endl;
    cout <<"Fecha de nacimiento : " << getDia() << "/" << getMes() << "/" << getAnio() <<  endl;


    }///FIN DE METODOS

    class Empresa{
    protected: //Clase base permite acceder por parte de clases derivadas
        int _cargo; //Va de 1 a 10 verificar en el constructor
        Persona _datos;
    public:
        //GETS
        int getCargo(){return _cargo;}
        Persona getDatos(){return _datos;}


        //SETS
        void setCargo(int cargo){
            if (cargo>=1 && cargo<=10){
                _cargo=cargo;
            }
        }

        void setDatos(Persona datos){
            _datos=datos;
        }

        void Cargar();
        void Mostrar();


    }; //FinDeClaseEmpresa

    void Empresa::Cargar(){
    int c;

    cout << "Cargar cargo: ";
    cin >> c;
    setCargo(c);
    cout << "Cargar datos del empleado: ";
    _datos.Cargar();

    }

    void Empresa::Mostrar(){

    cout << "Cargo: ";
    cout << getCargo() << endl;
    _datos.Mostrar();
    }

    class Invesigadores{
        protected:
            int _unidadAcademica, _categoria, _especialidad;
            Persona _datos2;
        public:
            Invesigadores(int una=0, int catego=0, int espe=0){
                _unidadAcademica=una;
                _categoria=catego;
                _especialidad=espe;
            }

        //Gets
        int getUnidadAcademica(){return _unidadAcademica;}
        int getCategoria(){return _categoria;}
        int getEspecilidad(){return _especialidad;}
        Persona getDatos2(){return _datos2;}

        //Sets

        void setUnidadAcademica(int acade){
        _unidadAcademica=acade;
        }
        void setCategoria(int catego){
        _categoria=catego;
        }
        void setEspecialidad(int especialidad){
        _especialidad=especialidad;
        }
        void setDatos2 (Persona datos2){
            _datos2=datos2;
        }

        ~Invesigadores(){};

        void Cargar();
        void Mostrar();

    };//Fin de clase investigadores

    void Invesigadores::Cargar(){
    int d;
    cout << "Cargar unidad academica: ";
    cin >> d;
    setUnidadAcademica(d);
    cout << "Cargar categoria: ";
    cin >> d;
    setCategoria(d);
    cout << "Cargar especilidad: ";
    cin >> d;
    setEspecialidad(d);
    cout << "Cargar datos del empleado: ";
    _datos2.Cargar();
    }

    void Invesigadores::Mostrar(){
    cout << endl << "---------------" << endl;
    cout << "Unidad academica: ";
    cout << getUnidadAcademica() << endl;
    cout << "Categoria: ";
    cout << getCategoria() << endl;
    cout << "Especilidad: ";
    cout << getEspecilidad() << endl;

    _datos2.Mostrar();
    }





int main() {
    Invesigadores obj;
    obj.Cargar();
    obj.Mostrar();
return 0;
}
