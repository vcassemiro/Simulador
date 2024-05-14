#ifndef COLETE
#define COLETE

#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Colete : public ArmaDefesa
{
    public:
        Colete(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif