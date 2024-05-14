#ifndef SOROSUPERSOLDADO
#define SOROSUPERSOLDADO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Soro_Super_Soldado : public ArmaAtaque
{
    public:
        Soro_Super_Soldado(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif