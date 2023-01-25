#include<iostream>
class Empleado {
   private:
    int ClaveEmpleado;
    std::string Nombre;
    std::string Domicilio;
    float Sueldo;
    std::string ReportaA;
    protected:
   public:
    Empleado(int nuevaClave,std::string nuevoDomicilio,float porcentaje,std::string nuevoJefe,std::string nom):ClaveEmpleado(nuevaClave),Nombre(nom),Domicilio(nuevoDomicilio),Sueldo(porcentaje),ReportaA(nuevoJefe){}
    void Imprime() {
        printf("\n********");
        std::cout <<"\nNombre empleado: "<<Nombre;
        std::cout <<"\nDomicilio: "<<Domicilio;
        std::cout <<"\nSueldo: "<<Sueldo;
        std::cout <<"\nReportaA: "<<ReportaA;
        printf("\n********\n");
    }

    void CambiaDomic(std::string NuevoDomicilio) {
        Domicilio = NuevoDomicilio;
    }

    void CambiarReportaA(std::string NuevoJefe) {
        ReportaA = NuevoJefe;
    }

    void ActualSueldo(float porcentaje) {
        Sueldo = ((Sueldo*porcentaje)/100)+Sueldo;
    }

};
int main (){
    int menu;
    int nuevaClave;
    std::string nuevojefe;
    std::string nuevoDomicilio;
    float porcentaje;
    std::string nom;
    Empleado JefePlanta(nuevaClave=1,nuevoDomicilio="Belisario",porcentaje=120.50,nuevojefe="Pedro Moreno",nom="Luis Garcia");
    Empleado JefePersonal(nuevaClave=2,nuevoDomicilio="Juan Pablo ll",porcentaje=200.30,nuevojefe="Joseluis Garcia",nom="Diego Garcia");
    do{
    std::cout <<"\n";
     std::cout <<"1.- Cambiar domicilio\n";
     std::cout <<"2.- Actualizar sueldo\n";
     std::cout <<"3.- Imprimir datos de empleado\n";
     std::cout <<"4.- Cambiar nombre de jefe\n";
     std::cout <<"5.- Salir\n";
     std::cout <<"Selecione una opcion: ";
     std::cin>>menu;
    switch(menu){
case 1:
    std::cout <<"Clave de empleado: ";
     std::cin >> nuevaClave;
    if(nuevaClave==1){
     std::cout <<"Nuevo domicilio: ";
     std::cin.ignore();
    getline(std::cin,nuevoDomicilio);
    JefePlanta.CambiaDomic(nuevoDomicilio);}
    if(nuevaClave==2){
     std::cout <<"Nuevo domicilio: ";
     std::cin.ignore();
    getline(std::cin,nuevoDomicilio);
    JefePersonal.CambiaDomic(nuevoDomicilio);
    }
         break;
case 2:
     std::cout <<"Clave de empleado: ";
     std::cin >> nuevaClave;
     if(nuevaClave==1){
     std::cout<<"Porcentaje de incremento";
     std::cin>>porcentaje;
     JefePlanta.ActualSueldo(porcentaje);}
      if(nuevaClave==2){
     std::cout<<"Porcentaje de incremento";
     std::cin>>porcentaje;
     JefePersonal.ActualSueldo(porcentaje);}
     break;
case 3:
     std::cout <<"Clave de empleado: ";
     std::cin >> nuevaClave;
     if(nuevaClave==1){
        JefePlanta.Imprime();
     }
     if(nuevaClave==2){
        JefePersonal.Imprime();
     }
     break;
case 4:
     std::cout <<"Clave de empleado: ";
     std::cin >> nuevaClave;
     if(nuevaClave==1){
        std::cout<<"Nuevo Jefe";
        std::cin.ignore();
    getline(std::cin,nuevojefe);
        JefePlanta.CambiarReportaA(nuevojefe);
     if(nuevaClave==2){
        std::cout<<"Nuevo Jefe";
        std::cin.ignore();
    getline(std::cin,nuevojefe);
        JefePersonal.CambiarReportaA(nuevojefe);
     }
    }
    }
    }while(menu!=5);
return 0;
}
