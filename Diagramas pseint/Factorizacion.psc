// Revisor:Jonathan Samuel Gonz�lez Ixpat�
Proceso Factorizacion
	Definir num, div Como Entero
	Definir factorizar, factor_primo Como L�gico
	Escribir 'Ingrese el numero: '
	Leer num
	Escribir 'Factorizacion: '
	factorizar <- verdadero
	Mientras factorizar Y num>1 Hacer
		div <- 0
		Si num/2=trunc(num/2) Entonces
			Escribir 2
			num <- num/2
		SiNo
			div <- 1
			factor_primo <- verdadero
			Mientras div<=rc(num) Y factor_primo Hacer
				div <- div+2
				Si num/div=trunc(num/div) Entonces
					factor_primo <- falso
				FinSi
			FinMientras
			Si factor_primo Entonces
				Escribir num
				factorizar <- falso
			SiNo
				Escribir div
				num <- num/div
				factor_primo <- verdadero
			FinSi
		FinSi
	FinMientras
FinProceso
