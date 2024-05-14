#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Martelo.hpp"

Martelo::Martelo(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Martelo::gerarForcaAtaque()
{
    return (maxForca+minForca)/3;
}

string Martelo::gerarRuidoAtaque()
{
    return " Quem segura este martelo, se for digno, possuirá o poder de Thor";
}
