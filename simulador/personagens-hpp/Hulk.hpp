#ifndef HULK
#define HULK
#include "../core-simulador-hpp/Personagem.hpp"

class Hulk : public Personagem
{
public:
    Hulk(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
    int gerarAtaque() override;
    int criarDefesa() override;
    string pegarDescricao() override;
};

#endif