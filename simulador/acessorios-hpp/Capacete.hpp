#ifndef CAPACETE
#define CAPACETE

#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Capacete : public ArmaDefesa
{
    public:
        Capacete(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif