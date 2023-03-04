#include <iostream>

using namespace std;

int main()
{
  char letra;
  cin >> letra;
  if ((int)letra >=65 && (int)letra <= 75)
  cout << "Voce fara prova no Laboratorio 140." << endl;
  else if ((int)letra >=76 && (int)letra <= 78)
  cout << "Voce fara prova no Laboratorio 143." << endl;
  else if ((int)letra >=79 && (int)letra <= 90)
  cout << "Voce fara prova no Laboratorio 144." << endl;
  else 
  cout << "Nome invalido!"<< endl;
 }
