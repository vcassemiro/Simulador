#include <cstdlib>
#include <ctime>
#include <iostream>
#include "../core-simulador-hpp/Simulador.hpp"
#include "../core-simulador-hpp/Personagem.hpp"

using std::cout;
using std::endl;

bool Simulador::adicionarPersonagem(Personagem* personagem, int equipe)
{
    switch (equipe)
    {
        case 1:
            equipe1.push_back(personagem);
            return true;
        
        case 2:
            equipe2.push_back(personagem);
            return true;

        default:
            return false;
    }
}

bool Simulador::removerPersonagem(Personagem* personagem, vector<Personagem*> equipe)
{
    int posicoes = 0;
    for (auto p : equipe)
    {
        if (p->getId() == personagem->getId())
        {
            equipe.erase(equipe.begin() + posicoes);
            return true;
        }
        posicoes++;
    }
    return false;
}

bool Simulador::removerPersonagem(Personagem* personagem, int equipe)
{
    if (equipe == 1)
    {
        return removerPersonagem(personagem, equipe1);
    }

    if (equipe == 2)
    {
        return removerPersonagem(personagem, equipe2);
    }
    
    return false;
}

int Simulador::calcularVidaEquipe(int seletorDeEquipe)
{   
    vector<Personagem*> equipe = seletorDeEquipe == 1 ? equipe1 : equipe2;
    int soma = 0;
    for (auto personagem : equipe)
    {
        soma += personagem->getVida();
    }
    return soma;
}

Personagem* Simulador::proximoPersonagem(vector<Personagem*> equipe)
{
    int tamanho = equipe.size();
    if (tamanho == 0)
    {
        return nullptr;
    }

    // Escolhe um índice aleatório para o próximo personagem
    int indiceAleatorio = std::rand() % tamanho;
    return equipe[indiceAleatorio];
}

int Simulador::criarCombate(Personagem* personagem1, Personagem* personagem2)
{
    int ataque = personagem1->gerarAtaque();
    int defesa = personagem2->criarDefesa();
    int dano = std::max(0, ataque - defesa); // O dano não pode ser negativo
    int nova_vida = std::max(0, personagem2->getVida() - dano); // A vida não pode ser negativa
    personagem2->setVida(nova_vida);
    return dano;
}

string Simulador::criarSaida(Personagem* personagem1, Personagem* personagem2, int dano)
{
    // ... (mesmo código da função criarSaida anterior)
}

void Simulador::iniciarSimulacao()
{
    // Define a semente baseada na hora atual
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int dano = 0;
    Personagem* personagemAtacante;
    Personagem* personagemDefesa;
    while (calcularVidaEquipe(1) > 0 && calcularVidaEquipe(2) > 0)
    {
        int equipeQueAtaca = (std::rand() % 2) + 1; // Escolhe equipe 1 ou 2 aleatoriamente

        if (equipeQueAtaca == 1)
        {
            personagemAtacante = proximoPersonagem(equipe1);
            personagemDefesa = proximoPersonagem(equipe2);
        }
        else
        {
            personagemAtacante = proximoPersonagem(equipe2);
            personagemDefesa = proximoPersonagem(equipe1);
        }

        dano = criarCombate(personagemAtacante, personagemDefesa);
        cout << criarSaida(personagemAtacante, personagemDefesa, dano) << endl;
    }
}
