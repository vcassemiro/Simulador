#ifndef LASER
#define LASER

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Laser : public ArmaAtaque
{
    public:
        Laser(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif