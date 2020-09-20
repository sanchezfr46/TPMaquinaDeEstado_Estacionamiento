#include <lib.h>

int main() {
	espacios_t set;
    espacios_t estado;
	estados_t estado = verde; //estado inicial 
    estados_t (*fp[])(espacios_t) = {f_rojo, f_amarillo, f_verde}
    set = f_inicializacion();
    while(1) estado = (*fp[EsDis])(set);
	return 0;
}