#ifndef BOTAS
#define BOTAS

#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Botas : public ArmaDefesa
{
    public:
        Botas(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif