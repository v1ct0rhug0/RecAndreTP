#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
  float ult;
  vector<float> lista;
  cout << "Digite um número qualquer (de preferencia 1 ou maior) : ";
  cin >> ult;
  float typed = ult+1;
  
  while(typed > ult)
  {
    ult = typed;
    cout << "Digite um número maior que o anterior (" << ult << ") : ";
    cin >> typed;
    lista.push_back(typed);
        for (size_t i = 0; i < lista.size();i++)
        {
    cout << lista[i] << ", ";
    }
     cout << endl;
  }
cout << "Erro Numero 4022@#! O número digitado é menor ou igual o anterior! Digite novamente";

}