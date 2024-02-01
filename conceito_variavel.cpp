// Online C++ compiler to run C++ program online
/*este e um cometario */

#include <iostream>
/*#include <thar.h>*/


int main() {
    
    int numvidas =5;
    int score= 1350;
    
    std::cout<<"*******************"<<std::endl;
    std::cout<<"vidas do jogador: "<<numvidas<<std::endl;
    std::cout<<"score : "<<score<<std::endl;
    std::cout<<"*******************"<<std::endl;
    
    std::cout<<"**********durante o jogo********"<<std::endl;
    score= score+ 150;
    numvidas = numvidas -1;
    std::cout<<"vidas do jogador: "<<numvidas<<std::endl;
    std::cout<<"score : "<<score<<std::endl;
    system("PAUSE");
}