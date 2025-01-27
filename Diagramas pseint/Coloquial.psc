// Revisor:Jonathan Samuel Gonz�lez Ixpat�
// Si tiene problemas para ejecutar este ejemplo seleccione el perfil "Flexible"
// en el cuadro de "Opciones del lenguaje", al cual se accede desde el men� Configurar.
// Este ejemplo muestra algunas de las variaciones posibles cuando se utiliza
// syntaxis flexible, instrucciones adicionales, y expresiones en lenguaje
// coloquial para las condiciones.
Proceso sin_titulo
	Definir a, b, C Como Entero
	Escribir 'Ingrese 3 numeros (los dos primeros deben ser enteros):'
	Leer a, b, C
	Si (a)>(b) Y (a)>(C) Entonces
		Escribir a, ' es el mayor'
	SiNo
		Si (b)>(C) Entonces
			Escribir b, ' es el mayor'
		SiNo
			Escribir C, ' es el mayor'
		FinSi
	FinSi
	Escribir 'Pulse una tecla para continuar'
	Esperar Tecla
	Limpiar Pantalla
	Si (a) MOD 2=0 Entonces
		Escribir a, ' es par'
	SiNo
		Escribir a, ' es impar'
	FinSi
	Escribir 'Los divisores de ', b, ' son: 'Sin Saltar
	Para i<-1 Hasta b-1 Hacer
		Si (b) MOD (i)=0 Entonces
			Escribir i, ' 'Sin Saltar
		FinSi
	FinPara
	Escribir b
	Si (C)=TRUNC(C) Entonces
		Escribir C, ' es entero'
	SiNo
		Escribir C, ' es real'
	FinSi
FinProceso
