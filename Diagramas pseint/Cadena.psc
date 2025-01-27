// Revisor:Jonathan Samuel Gonz�lez Ixpat�
// Este ejemplo muestra como utilizar las funciones para manejo 
// de cadenas de caracteres. Requiere que el perfil de lenguaje
// habilite estas funciones. Si al intentar ejecutar obtiene
// errores en las funciones, revise su configuraci�n en el
// item "Opciones del lenguaje" del men� "Configurar".
Proceso sin_titulo
	Definir frase, vocales Como Cadena
	Definir i, j, cantVocales Como Entero
	// el usuario ingresa una frase, vamos a contar cuantas vocales tiene
	Escribir 'Ingrese una frase'
	Leer frase
	// pasamos toda la frase a minusculas para no tener que preguntar 2 veces por cada vocal
	frase <- Minusculas(frase)
	// lista de letras que vamos a buscar
	vocales <- 'aeiou������'
	cantVocales <- 0
	// comparar todas las letras de frase con las de vocales y contar coincidencias
	Para i<-0 Hasta Longitud(frase)-1 Hacer
		Para j<-0 Hasta Longitud(vocales)-1 Hacer
			Si Subcadena(frase,i,i)=Subcadena(vocales,j,j) Entonces
				cantVocales <- cantVocales+1
			FinSi
		FinPara
	FinPara
	Escribir 'La frase contiene ', cantVocales, ' vocales.'
FinProceso
