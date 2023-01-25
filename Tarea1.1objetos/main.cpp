#include<iostream>
class Materia{
    private:
        int Clave;
        std::string clase;
        std::string Nombre;
        std::string Profesor;
        std::string LibroTexto;
        std::string Nombrealumno;
    protected:
    public:
        Materia(int nueClave,std::string nom,std::string maestro,std::string libro,std::string alumno):Clave(nueClave),Nombre(nom),Profesor(maestro),LibroTexto(libro),Nombrealumno(alumno){};
        void Imprimir(){
             printf("\n********");
        std::cout <<"\nNombre clase: "<<Nombre;
        std::cout <<"\nClave: "<<Clave;
        std::cout <<"\nNombre de alumno: "<<Nombrealumno;
        std::cout <<"\nProfesor: "<<Profesor;
        std::cout<<"\nLibro de texto:"<<LibroTexto;
        printf("\n********\n");}

            void clap(int Nueclave){
                Clave = Nueclave;
            }
            void camnombremat(std::string nom){
            Nombre=nom;
            }
};
int main(){
    int nueClave;
    std::string nom;
    std::string maestro;
    std::string libro;
    std::string alumno;
    int menu;
    Materia Programacion(nueClave=1,nom="Programacion",maestro="Pedro Perez",libro="Programacion",alumno="Luis Garcia");
    Materia  Basededatos(nueClave=2,nom="Bse de datos",maestro="Jose Gonzalez",libro="Base de dato1",alumno="Diego Gonzalez");
    do{
    std::cout<<"1.-Cambio de clave de materia programacion\n";
    std::cout<<"2.-Cambio de nombre matera: base de datos\n";
    std::cout<<"3.-Imprimir los datos de la materia Bases de datos\n";
    std::cout<<"4.-Salir\n";
    std::cin>>menu;
    switch(menu){
    case 1:
        std::cout<<"Clave de clase:";
        std::cin>>nueClave;
        if(nueClave==1){
        std::cout<<"Nueva clave:";
        std::cin>>nueClave;
        Programacion.clap(nueClave);
        }
        if(nueClave==2){
        std::cout<<"Nueva Clave:";
        std::cin>>nueClave;
        Programacion.clap(nueClave);
        }
        break;
    case 2:
        std::cout<<"Nuevo nombre de la materia:";
         std::cin.ignore();
    getline(std::cin,nom);
        Basededatos.camnombremat(nom);
        break;
    case 3:
        Basededatos.Imprimir();
        break;
    case 4:
        break;
    default:
        std::cout<<"Opcion invalida\n";
    break;
    }
    }while(menu!=4);
    return 0;}
