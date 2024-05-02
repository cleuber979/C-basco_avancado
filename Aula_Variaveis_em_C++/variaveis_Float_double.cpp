#include <iostream>
#include <iomanip>

int main(){

  int Numero;
  Numero = 45;
  float Numero2;
  Numero2=55.56f;
  double Numero3;
  Numero3= 45345.904555;
  char caractere = '3';
  char caractere2 = 'k';

  std::cout<<"Valor Numero: "<< Numero<< std::endl;
  std::cout<< "Tamanho da Variavel Numero : "<<sizeof(Numero)<<"Bytes"<<"\n";
  std::cout<< "Endereco Carregando na Memoria:  "<< &Numero<<"\n";


  std::cout<<"Valor Numero: "<< Numero2<< std::endl;
  std::cout<< "Tamanho da Variavel Numero : "<<sizeof(Numero2)<<"Bytes"<<"\n";
  std::cout<< "Endereco Carregando na Memoria:  "<< &Numero2<<"\n";

  std::cout<<"Valor Numero: "<<std::setprecision(12)<< Numero3<< std::endl;
  std::cout<< "Tamanho da Variavel Numero : "<<sizeof(Numero3)<<"Bytes"<<"\n";
  std::cout<< "Endereco Carregando na Memoria:  "<< &Numero3<<"\n";


  std::cout<<"Valor caractere: "<< caractere<< std::endl;
  std::cout<< "Tamanho da Variavel Numero : "<<sizeof(caractere)<<"Bytes"<<"\n";
  std::cout<< "Endereco Carregando na Memoria:  "<< (void *)&caractere<<"\n";

  std::cout<<"Valor caractere2: "<< caractere2<< std::endl;
  std::cout<< "Tamanho da Variavel Numero : "<<sizeof(caractere2)<<"Bytes"<<"\n";
  std::cout<< "Endereco Carregando na Memoria:  "<< (void *) &caractere2<<"\n";


   system("PAUSE");


}