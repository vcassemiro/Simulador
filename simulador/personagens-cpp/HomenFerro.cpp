#include "../personagens-hpp/HomenFerro.hpp"

Homenferro::Homenferro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Homenferro::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Homenferro::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Homenferro::pegarDescricao() 
{
    return "Se não pudermos proteger a Terra, pode ter certeza que iremos vingá-la.";
}