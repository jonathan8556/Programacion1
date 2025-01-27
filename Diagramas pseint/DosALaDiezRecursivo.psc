// Revisor:Jonathan Samuel Gonz�lez Ixpat�
// Implementaci�n del c�lculo de una potencia mediante una funci�n recursiva
// El paso recursivo se basa en que A^B = B*(A^(B-1))
// El paso base se base en que A^0 = 1
SubAlgoritmo resultado <- Potencia (base,exponente)
	Definir resultado Como Entero
	Si exponente=0 Entonces
		resultado <- 1
	SiNo
		resultado <- base*Potencia(base,exponente-1)
	FinSi
FinSubAlgoritmo

Proceso DosALaDiezRecursivo
	Definir exponente Como Entero
	Definir base Como Entero
	Escribir 'Ingrese Base'
	Leer base
	Escribir 'Ingrese Exponente'
	Leer exponente
	Escribir 'El resultado es ', Potencia(base,exponente)
FinProceso
