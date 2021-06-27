//Daniel Relva - 27/06
//This calculator is designed just to do simple operations with only two
//numbers and everytime you reset it, the previous result isn't kept.

//Includes the used librarys
#include <iostream>
#include <math.h>
//Set the iostream namespace to standard
using namespace std;

int main(){
  //This variable will be used as flag. If it's equal to zero, the calculator will
  //"shut off".
  bool On = 1;

  //Storage the values
  int function, num1, num2, j = 1;
  float result = 1;

  while(On == 1){
    //Restart the variables
    result = 1;
    j = 1;

    cout << "Digite um número:\n";
    cin >>  num1;

    cout << "Muito bem. Qual operação deseja realizar?\n"; 
    cout << "1-Soma 2-Subtração\n3-Multiplicação 4-Divisão\n";
    cout << "5-Potência 6-Resto\n7-Raiz quadrada 8-Fatorial\n";
    cin >> function;

    //The operation of sqrt or factorial uses only one number. 
    if (function<=6){
      cout << "Digite o segundo número:\n";
      cin >> num2;
    }
  
    switch (function){
    case 1:
      cout << num1 + num2;
      break;
    case 2:
      cout << num1 - num2;
      break;
    case 3:
      cout << num1*num2;
      break;
    case 4:
      if(num2==0){
        cout << "Divisão por 0 não é possível\n";
      }
      else{
        cout << num1/num2;
      }
      break;
    case 5:
      //It will multiply the num1 itself "num2" times
      while (j<=num2){
        result *= num1;
        j++;
      }
      cout << result;
      break;
    case 6:
      cout << num1 % num2;
      break;
    case 7:
      result = sqrt(num1);
      cout << result;
      break;
    case 8:
      //Will multiply itself with everynumber until num1
      while(j<=num1){
        result *= j;
        j++;
      }
      cout<< result;
      break;
    default:
      cout << "Operação escolhida não é válida\n";
      break;
    }

    cout << "\nDeseja usar novamente a calculadora? (1/0)\n";
    cin >> On;
  }
  return 0;
}