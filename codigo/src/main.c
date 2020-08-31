#include <stdio.h>
#include <mylib.h>

int main() {
	espacios_t set;
	estados_t EsDis = verde; //estado inicial 
    estados_t (*fp[])(espacios_t) = {f_rojo, f_amarillo, f_verde}
    set = f_inicializacion();
    while(1) EsDis = (*fp[EsDis])(set);
	
	return 0;
}