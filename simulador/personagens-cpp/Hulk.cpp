#include "../personagens-hpp/Hulk.hpp"

Hulk::Hulk(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Hulk::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Hulk::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Hulk::pegarDescricao() 
{
    return "Hulk esmagaaaa!!!!";
}