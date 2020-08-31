#include <stdio.h>

typedef enum {
  rojo = 0,
  amarillo = 1
  verde = 2
}estados_t;

typedef struct {
	int EsDis 
}espacios_t;

espacios_t f_inicializacion(void);  //funcion que configura el sistema 
estados_t f_rojo(espacios_t); //funcion que se inicia cuando EsDis=0
estados_t f_amarillo(espacios_t);  //funcion que se inicia cuando EsDis=1
estados_t f_verde(espacios_t);  //funcion que se inicia cuando EsDis>1

estados_t (*fp)(espacios_t); //puntero a funciones