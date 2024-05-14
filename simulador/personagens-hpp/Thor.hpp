#ifndef THOR
#define THOR
#include "../core-simulador-hpp/Personagem.hpp"

class Thor : public Personagem
{
public:
    Thor(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
    int gerarAtaque() override;
    int criarDefesa() override;
    string pegarDescricao() override;
};

#endif