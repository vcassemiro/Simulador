#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Laser.hpp"

Laser::Laser(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Laser::gerarForcaAtaque()
{
    return (minForca*maxForca)/4;
}

string Laser::gerarRuidoAtaque()
{
    return "tzzz";
}
