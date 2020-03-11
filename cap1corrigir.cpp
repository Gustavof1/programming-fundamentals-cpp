#include <iostream>

using namespace std;

int main(){

	float horas, dependentes, salario_semana, sal_liq, prev, imp_renda, imp_estadual;
	float sal_hora = 16.78;

	cout << "Horas trabalhadas por semana normalmente = 40" << endl;	
	cout << "Insira o número de horas trabalhadas na semana: ";
	cin >> horas;
	
	cout << "Insira o número de dependentes: ";
	cin >> dependentes;

	if(horas<=40){
		salario_semana= sal_hora * horas;
	}
		else{
			salario_semana= (sal_hora * 40) + ((horas-40)*(sal_hora*1.5));
		}

	cout << "Salario bruto = RS " << salario_semana << endl;
	
	prev=salario_semana/100*6;	
	
	cout << "Desconto de Previdência Social = RS " << prev << endl;

	imp_renda=salario_semana/100*14;

	cout << "Desconto de Imposto de Renda = RS " << imp_renda << endl;

	imp_estadual=salario_semana/100*5;

	cout << "Desconto de Impostos estaduais = RS " << imp_estadual << endl;
	
	
	if(dependentes<3){
		sal_liq=salario_semana-prev-imp_renda-imp_estadual;
		cout << "Salário liquido = " << sal_liq << endl;
	}
		else{
			sal_liq=salario_semana-prev-imp_renda-imp_estadual-35;
			cout << "Desconto por plano de saude = RS 35" << endl;
			cout << "Salário liquido = " << sal_liq << endl;
		}

	return 0;

}
