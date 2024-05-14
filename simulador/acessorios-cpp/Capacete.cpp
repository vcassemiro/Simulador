#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Capacete.hpp"

Capacete::Capacete(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Capacete::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Capacete::getResistencia() 
{
    return this->resistencia;
}