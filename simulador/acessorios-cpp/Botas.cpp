#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Botas.hpp"

Botas::Botas(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Botas::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Botas::getResistencia() 
{
    return this->resistencia;
}