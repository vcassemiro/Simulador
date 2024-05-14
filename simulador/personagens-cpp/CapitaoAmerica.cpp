#include "../personagens-hpp/CapitaoAmerica.hpp"

CapitaoAmerica::CapitaoAmerica(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int CapitaoAmerica::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int CapitaoAmerica::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string CapitaoAmerica::pegarDescricao() 
{
    return "Vingadores, unidos!";
}