#include <iostream> 
#include <string>
using namespace std; 

class CuentaBancaria{
    protected: 
        int cedula; 
        string nombre; 
        string fechaAper;
    public: 
        CuentaBancaria(int c, string n, string f); 
        virtual float consultarSaldo() = 0;  
        void mostrarCuenta(); 
};

CuentaBancaria::CuentaBancaria(int c, string n, string f)
 :cedula(c), nombre(n), fechaAper(f){} 

void CuentaBancaria::mostrarCuenta(){
    cout<<"Cedula: "<<cedula<<endl;
    cout<<"Nombre: "<<nombre<<endl; 
    cout<<"Fecha de apertura: "<<fechaAper<<endl; 
}

class Ahorro : public CuentaBancaria{
    private: 
        float saldo; 
    public: 
        Ahorro(int c, string n, string f, float s); 
        void retirar(float);
        void consignar(float); 
        float consultarSaldo(); 
        void mostrarAhorro();  
}; 


Ahorro::Ahorro(int c, string n, string f, float s): CuentaBancaria(c, n, f){
    saldo = s; 
}

void Ahorro::retirar(float retiro){
    if(retiro > saldo) saldo -=retiro;  
    else cout<<"No hay saldo suficiente. "; 
}

void Ahorro::consignar(float agregar){
    saldo += agregar; 
}

float Ahorro::consultarSaldo(){
    return saldo; 
}

void Ahorro::mostrarAhorro(){
    cout<<"Nombre: "<<nombre<<endl; 
    cout<<"Ahorro: "<<saldo<<endl; 
    cout<<"Cedula: "<<cedula<<endl; 
    cout<<"Fecha de apertura: "<<fechaAper<<endl; 
}

class Credito : public CuentaBancaria{
    private:  
        float valorInicial; 
        float valorCouta; 
        int coutasCanceladas; 
    public: 
        Credito(int c, string n, string f, float vi, float vc, int cC);
        void cancelarCouta(); 
        float consultarSaldo(); 
        void mostrarCredito(); 
}; 

Credito::Credito(int c, string n, string f, float vi, float vc, int cC) : CuentaBancaria(c, n, f){
    valorInicial = vi; 
    valorCouta = vc; 
    coutasCanceladas = cC; 
}

void Credito::cancelarCouta(){
    if (coutasCanceladas * valorCouta < valorInicial){  
        coutasCanceladas++; 
        cout<<"Cuota cancelada. Total de cuotas canceladas: "<<coutasCanceladas<< endl;
    }else{
        cout << "El crédito ya está completamente pagado."<< endl;
    }
}

float Credito::consultarSaldo(){
    return valorInicial - (valorCouta * coutasCanceladas); 
}

void Credito::mostrarCredito(){
    cout<<"Nombre: "<<nombre<<endl;  
    cout<<"Cedula: "<<cedula<<endl; 
    cout<<"Fecha de apertura: "<<fechaAper<<endl; 
    cout<<"Valor inicial: "<<valorInicial<<endl;  
    cout<<"Valor couta: "<<valorCouta<<endl; 
    cout<<"Coutas canceldadas: "<<coutasCanceladas<<endl; 
}

int main() {
    // Crear cuenta de ahorro
    Ahorro cuentaAhorro(12345, "Juan Perez", "01/01/2023", 1000.0f);
    cuentaAhorro.mostrarAhorro();
    cuentaAhorro.retirar(200.0f);
    cuentaAhorro.consignar(300.0f);
    cout << "Saldo después de transacciones: " << cuentaAhorro.consultarSaldo() << endl;

    cout << endl;

    // Crear cuenta de crédito
    Credito cuentaCredito(67890, "Maria Lopez", "01/02/2023", 5000.0f, 250.0f, 10);
    cuentaCredito.mostrarCredito();
    cuentaCredito.cancelarCouta();
    cout << "Saldo del crédito después de cancelar una cuota: " << cuentaCredito.consultarSaldo() << endl;

    return 0;
}