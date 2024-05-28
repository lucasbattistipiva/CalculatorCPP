#include <iostream> 
#include <locale> // para definir a linguagem PT-BR

using namespace std;

void mult(int a, int b) {
	int res=  a * b;
	cout << "Resultado: " << res << endl;
}
void divisao(int a, int b) {
	if (b != 0) {
		int res = a / b;
		cout << "Resultado: " << res << endl;
		
	}else{
		cout << "Não há divisão por zero" << endl;
		
	}
	
}

void somar(int a, int b) {
		int res = a + b;
		cout << "Resultado: " << res << endl;
}

void subtracao(int a, int b) {
		int res = a - b;
		cout << "Resultado: " << res << endl;
}

int main()
{
	int a, b, resp;
	char op;

	setlocale(LC_ALL, "pt_BR.utf8");
	do {
	cout << "--------------Calculadora em CPP-------------- " << endl;
	cout << "Digite o valor do número A: " << endl;
	cin >> a;
	cout << "Digite o valor do número B: " << endl;
	cin >> b;
	cout << "Digite a operação que deseja: " << endl;
	cin >> op;
	// utilizado para limpar o buffer
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	
	switch (op) {
	case '*' :
		mult(a, b);
		break;
	case '/' : 
		divisao(a, b);
		break;
	case '+' : 
		somar(a, b);
		break;
	case '-' :
		subtracao(a, b);
		break;
	default:
		cout << "Operação Inválida" << endl;
		return 1;
	};
	do{
	cout << "Deseja realizar outra operação? (1 , 0)" << endl;
	cin >> resp;
	
	if (resp != 1 && resp != 0) {
		cout << "Opção inválida. Por favor, insira 1 para continuar ou 0 para fechar." << endl;
	}
	} while (resp != 1 && resp != 0);
	
	} while (resp != 0);
}

