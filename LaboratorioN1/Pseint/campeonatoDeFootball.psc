// Jonathan Samuel Gonzalez
Proceso campeonatoFootball
	Definir equipos Como Cadena
	Definir resultados Como Entero
	Definir puntos, ganados, perdidos, empatados, jugados Como Entero
	Definir i, j, mejor, peor Como Entero
	Definir opcion Como Cadena
	Dimensionar equipos(6)
	Dimensionar resultados(6,6,2)
	Dimensionar puntos(6), ganados(6), perdidos(6), empatados(6), jugados(6)
	// Ingreso de nombres de equipos
	Para i<-1 Hasta 6 Hacer
		Escribir 'Ingrese el nombre del equipo ', i, ':'
		Leer equipos[i]
	FinPara
	// Ir a InicializarEstadisticas
	// Etiqueta InicializarEstadisticas:
	Para i<-1 Hasta 6 Hacer
		puntos[i] <- 0
		ganados[i] <- 0
		perdidos[i] <- 0
		empatados[i] <- 0
		jugados[i] <- 0
	FinPara
	// Ir a GenerarResultados
	// Etiqueta GenerarResultados:
	Para i<-1 Hasta 6 Hacer
		Para j<-1 Hasta 6 Hacer
			Si i<>j Entonces
				resultados[i,j,0]<-Aleatorio(0,10)
				resultados[j,i,1]<-Aleatorio(0,10)
				// Se calculan los puntos aquí...
			FinSi
		FinPara
	FinPara
	// Ir a MostrarTabla
	// Etiqueta MostrarTabla:
	Escribir 'Tabla de posiciones:'
	Para i<-1 Hasta 6 Hacer
		Escribir equipos[i], ' Pts:', puntos[i]
	FinPara
	// Ir a DeterminarCampeon
	// Etiqueta DeterminarCampeon:
	mejor <- 1
	peor <- 1
	Para i<-2 Hasta 6 Hacer
		Si puntos[i]>puntos[mejor] Entonces
			mejor <- i
		FinSi
		Si puntos[i]<puntos[peor] Entonces
			peor <- i
		FinSi
	FinPara
	Escribir 'El campeón es: ', equipos[mejor]
	Escribir 'El equipo que baja es: ', equipos[peor]
	// Ir a PreguntarRepetir
	// Etiqueta PreguntarRepetir:
	Escribir '¿Desea repetir? (S/N)'
	Leer opcion
	Si opcion='S' Entonces
		// Ir a InicializarEstadisticas
	FinSi
FinProceso
