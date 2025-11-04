//jessyca principal

#include <iostream>
#include "Veiculo.h"
using namespace std;

//---------------------------------------------------------------------------
//veiculo.cpp e o principal estao aqui juntos. separado não tava funcionando


//Jessyca - implementação
//#include "Veiculo.h"

// Construtor
Veiculo::Veiculo() {
    modelo = "Desconhecido";
    cor = "Indefinida";
    ano = 0;
    kmPorLitro = 0.0;
}
Veiculo::Veiculo(string modelo, string cor, int ano, float kmPorLitro) {
    this->modelo = modelo;
    this->cor = cor;
    this->ano = ano;
    this->kmPorLitro = kmPorLitro;
}

string Veiculo::getModelo() const { return modelo; }
string Veiculo::getCor() const { return cor; }
int Veiculo::getAno() const { return ano; }
float Veiculo::getKmPorLitro() const { return kmPorLitro; }


void Veiculo::setModelo(string modelo) { this->modelo = modelo; }
void Veiculo::setCor(string cor) { this->cor = cor; }
void Veiculo::setAno(int ano) { this->ano = ano; }
void Veiculo::setKmPorLitro(float kmPorLitro) { this->kmPorLitro = kmPorLitro; }

//autonomia
float Veiculo::calcularAutonomia(float litros) const {
    return kmPorLitro * litros;
}


void Veiculo::exibirDados() const {
    cout << "Modelo: " << modelo << endl;
    cout << "Cor: " << cor << endl;
    cout << "Ano: " << ano << endl;
    cout << "Consumo: " << kmPorLitro << " km/L" << endl;
}
//---------------------------------------------------------------------------------------------

int main() {
    //5 objetos
    Veiculo veiculos[5] = {
        Veiculo("Civic", "Prata", 2020, 14.5),
        Veiculo("Onix", "Preto", 2022, 13.2),
        Veiculo("Corolla", "Branco", 2019, 15.0),
        Veiculo("HB20", "Vermelho", 2021, 12.8),
        Veiculo("Argo", "Azul", 2023, 13.7)
    };

    cout << "===== Dados dos Veículos =====" << endl;

    // autonomia q4
    for (int i = 0; i < 5; i++) {
        cout << "\nVeículo " << i + 1 << ":" << endl;
        veiculos[i].exibirDados();
        cout << "Autonomia com 30L: " << veiculos[i].calcularAutonomia(30) << " km" << endl;
    }

    return 0;
}
