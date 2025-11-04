//Jessyca - implementação

#include "Veiculo.h"

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
