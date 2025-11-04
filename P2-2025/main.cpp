//jessyca principal

#include <iostream>
#include "Veiculo.h"
using namespace std;

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
