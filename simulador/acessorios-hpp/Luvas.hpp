#ifndef LUVAS
#define LUVAS

#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Luvas : public ArmaDefesa
{
    public:
        Luvas(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif