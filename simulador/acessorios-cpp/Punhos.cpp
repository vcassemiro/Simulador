#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Punhos.hpp"

Punhos::Punhos(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Punhos::gerarForcaAtaque()
{
    return minForca+(0.6)*maxForca;
}

string Punhos::gerarRuidoAtaque()
{
    return "EEESSSSMMMAAAGGGAAA!!!";
}
