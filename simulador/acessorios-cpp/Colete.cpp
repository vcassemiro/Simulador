#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Colete.hpp"

Colete::Colete(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Colete::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Colete::getResistencia() 
{
    return this->resistencia;
}