#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Luvas.hpp"

Luvas::Luvas(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Luvas::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Luvas::getResistencia() 
{
    return this->resistencia;
}