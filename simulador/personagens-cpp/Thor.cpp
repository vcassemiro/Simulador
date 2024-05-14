#include "../personagens-hpp/Thor.hpp"

Thor::Thor(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Thor::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Thor::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Thor::pegarDescricao() 
{
    return "Traga-me o Thanos!";
}