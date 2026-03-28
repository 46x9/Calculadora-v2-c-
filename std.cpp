#include <iostream>
main(){
	double num1, num2, resultado;
	
	while(true){
	
	std::string operacao;
	
	std::cout << "Digite um numero: ";
	std::cin >> num1;
	
	std::cout << "Digite outro numero: ";
	std::cin >> num2;
	
	std::cout << "Digite a operação (+, -, /, * ou sair): ";
	std::cin >> operacao;
	
		
	if (operacao == "*"){
		resultado=num1*num2;
	}
	if (operacao == "/"){
		resultado=num1/num2;
	}
	
	if (operacao == "+"){
		resultado=num1+num2;
	}
	
	if (operacao == "-"){
		resultado=num1-num2;
	}
	
	if (operacao == "sair") break;
	
	std::cout <<"O numero digitado eh: " << resultado << std::endl;

	}
	
	return 0;
}
