Algoritmo Calculadora

    Definir numero1, numero2, resultado Como Real
    Definir signos Como Caracter
	
    Escribir "Calculadora"
    Escribir "Ingrese el primer numero: "
    Leer numero1
	
    Escribir "Ingrese la operación (+, -, *, /): "
    Leer signos
	
    Escribir "Ingrese el segundo numero: "
    Leer numero2
	
    Segun signos Hacer
        Caso '+':
            resultado <- numero1 + numero2
            Escribir "Resultado: ", resultado
        Caso '-':
            resultado <- numero1 - numero2
            Escribir "Resultado: ", resultado
        Caso '*':
            resultado <- numero1 * numero2
            Escribir "Resultado: ", resultado
        Caso '/':
            Si numero2 <> 0 Entonces
                resultado <- numero1 / numero2
                Escribir "Resultado: ", resultado
            Sino
                Escribir "Error: No se puede dividir entre cero."
            FinSi
        De Otro Modo:
            Escribir "Operación inválida."
    FinSegun
	
FinAlgoritmo
