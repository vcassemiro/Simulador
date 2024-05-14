#ifndef PUNHOS
#define PUNHOS

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Punhos : public ArmaAtaque
{
    public:
        Punhos(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif