#include <stdio.h>
int vf;
void Calculadora(float x, float y, char op, float *r) {
	vf = 1;
	if (op == '+') {
		*r = x + y;
	} else if(op == '-') {
		*r = x - y;
	} else if(op == '*') {
		*r = x * y;
	} else if(op == '/') {
		if (y == 0) {
			vf = 0;
		} else {
			*r = x / y;
		}
	} else {
		vf = 0;
		printf("Operador invalido\n");
	}
};
int main()
{
	float op1;
	float op2;
	char operador;
	float resOp;
	printf("Introduzca el primer numero: ");
	scanf("%f", &op1);
	printf("Introduzca el segundo numero: ");
	scanf("%f", &op2);
	printf("Introduzca su operador: ");
	scanf(" %c", &operador);
	Calculadora(op1, op2, operador, &resOp);
	if(vf==1) {
		printf("El resultado de su operacion es: %.1f", resOp);
	} else {
		printf("ERROR 999999999");
	}
	return 0;
}
