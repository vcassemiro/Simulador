#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Calca.hpp"

Calca::Calca(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Calca::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Calca::getResistencia() 
{
    return this->resistencia;
}