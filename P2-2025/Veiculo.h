//Jéssyca - inteface
#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>
#include <string>
using namespace std;

class Veiculo {
private:
    string modelo;
    string cor;
    int ano;
    float kmPorLitro;

public:
    Veiculo();
    Veiculo(string modelo, string cor, int ano, float kmPorLitro);

    string getModelo() const;
    string getCor() const;
    int getAno() const;
    float getKmPorLitro() const;

    void setModelo(string modelo);
    void setCor(string cor);
    void setAno(int ano);
    void setKmPorLitro(float kmPorLitro);

    float calcularAutonomia(float litros) const;
    void exibirDados() const;
};

#endif
