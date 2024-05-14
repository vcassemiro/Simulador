#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/SoroSuperSoldado.hpp"

Soro_Super_Soldado::Soro_Super_Soldado(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Soro_Super_Soldado::gerarForcaAtaque()
{
    return maxForca-(minForca/2);
}

string Soro_Super_Soldado::gerarRuidoAtaque()
{
    return "Anabolizantes ";
}
