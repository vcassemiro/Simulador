#ifndef CALCA
#define CALCA

#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Calca : public ArmaDefesa
{
    public:
        Calca(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif