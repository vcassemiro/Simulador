#ifndef BASTAO
#define BASTAO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Bastao : public ArmaAtaque
{
    public:
        Bastao(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif