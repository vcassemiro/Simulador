#ifndef HOMEN_FERRO
#define HOMEN_FERRO
#include "../core-simulador-hpp/Personagem.hpp"

class Homenferro : public Personagem
{
public:
    Homenferro(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
    int gerarAtaque() override;
    int criarDefesa() override;
    string pegarDescricao() override;
};

#endif