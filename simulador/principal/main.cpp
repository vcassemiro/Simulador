#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../personagens-hpp/Chaves.hpp"
#include "../core-simulador-hpp/Simulador.hpp"
#include "../personagens-hpp/CapitaoAmerica.hpp"
#include "../personagens-hpp/HomenFerro.hpp"
#include "../personagens-hpp/Hulk.hpp"
#include "../personagens-hpp/Thor.hpp"
#include "../personagens-hpp/ViuvaNegra.hpp"
#include "../acessorios-hpp/Bastao.hpp"
#include "../acessorios-hpp/Botas.hpp"
#include "../acessorios-hpp/Calca.hpp"
#include "../acessorios-hpp/Capacete.hpp"
#include "../acessorios-hpp/Colete.hpp"
#include "../acessorios-hpp/laser.hpp"
#include "../acessorios-hpp/Luvas.hpp"
#include "../acessorios-hpp/Martelo.hpp"
#include "../acessorios-hpp/Punhos.hpp"
#include "../acessorios-hpp/SoroSuperSoldado.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma0  = new Bastao("Nija",1,4);
    ArmaAtaque* arma1  = new Laser("Dos punhos",1,9);
    ArmaAtaque* arma2  = new Martelo("Dothor",1,10);
    ArmaAtaque* arma3  = new Punhos("Do Hulk",1,8);
    ArmaAtaque* arma4  = new Soro_Super_Soldado("Anabolizante",1,6);


    ArmaDefesa* defesa0 = new Botas("De Combate", 4);
    ArmaDefesa* defesa1 = new Calca("De Combate", 6);
    ArmaDefesa* defesa2 = new Capacete("De Combate", 5);
    ArmaDefesa* defesa3 = new Colete("De Combate", 7);
    ArmaDefesa* defesa4 = new Luvas("De Combate", 3);
    
    Personagem* p0 = new CapitaoAmerica(0, "Eq2", 110, arma4, defesa0);
    Personagem* p1 = new Homenferro(1, "Eq1", 100, arma1, defesa1);
    Personagem* p2 = new Hulk(2, "Eq2", 120, arma3, defesa2);
    Personagem* p3 = new Thor(3, "Eq1", 140, arma2, defesa3);
    Personagem* p4 = new Viuvanegra(4, "Eq2 ", 100, arma0, defesa4);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p0, 2);
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}