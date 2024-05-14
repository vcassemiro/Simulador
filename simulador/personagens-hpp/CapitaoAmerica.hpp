#ifndef CAPITAO_AMERICA
#define CAPITAO_AMERICA
#include "../core-simulador-hpp/Personagem.hpp"

class CapitaoAmerica : public Personagem
{
public:
    CapitaoAmerica(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
    int gerarAtaque() override;
    int criarDefesa() override;
    string pegarDescricao() override;
};

#endif