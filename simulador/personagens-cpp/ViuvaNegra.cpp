#include "../personagens-hpp/ViuvaNegra.hpp"

Viuvanegra::Viuvanegra(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Viuvanegra::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Viuvanegra::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Viuvanegra::pegarDescricao() 
{
    return "Não disse que deveríamos ir embora. Há formas piores de morrer. Onde mais conseguiria uma vista assim?”";
}