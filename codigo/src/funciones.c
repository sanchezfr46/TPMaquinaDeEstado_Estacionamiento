#include <mylib.h>
char* getKey (char* key){
	char i=0;
	while (*(key+i)!=' '){
		i++;
	}
	*(key+i)=0;
	return key+i+1;

espacios_t config (char* conf){
	FILE *arc;
	char cadena[40],*key,*value;
	char variables[20]={"EsDis"};
	espacios_t configuracion;
	if ((arc = fopen (conf,"rt")) == NULL){
		printf ("No se encontro el archivo : %s \n",conf);
	}else{

		gets(cadena,40,arc);

		do{
			key = cadena;
			if (*(key) != '#' && strlen(key)>0){
				value = getKey(key);
					if (!strcmp (key,variables)){
						configuracion.EsDis = atoi(value);
						}
					}
				}
			}
			fgets(cadena,40,arc);
		}while(!feof(arc);
		fclose (arc);
		return configuracion;
}	
espacios_t f_inicializacion (void){
	espacios_t inicio;
	inicio = config ("config.conf");
	return inicio;
}
estados_t f_rojo(espacios_t EsDis){
	if(EsDis=0){
		printf("Semaforo en ROJO");
		return f_rojo;
	}
	else 
		printf("Semaforo en AMARILLO, espacio reservado para personas con movilidad reducida"); //en Amarillo ya que el semaforo debe tener un estado de transicion entre rojo y verde en caso que salgan dos autos a la vez
		return f_amarillo;
	
	
}
estados_t f_amarillo(espacios_t EsDis){
	if(EsDis=1){
		printf("Semaforo en AMARILLO, espacio reservado para personas con movilidad reducida"); 
		return f_amarillo;
	}
	if(EsDis=0){
		printf("Semaforo en ROJO");
		return f_rojo;
	} 
	else 
		printf("Semaforo en VERDE");
		return f_verde;
	
}
estados_t f_verde(espacios_t EsDis){
	if(EsDis=!0 || EsDis!=1){
		printf("Semaforo en VERDE");
		return f_verde;
	}
	else 
		printf("Semaforo en AMARILLO, espacio reservado para personas con movilidad reducida"); //en Amarillo ya que el semaforo debe tener un estado de transicion entre rojo y verde en caso que entren dos autos a la vez
		return f_amarillo;
} 