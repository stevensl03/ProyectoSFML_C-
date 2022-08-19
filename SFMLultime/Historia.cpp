#include "Historia.h"

Historia::Historia()
{
	 aguila = new Aguila(2, 13, 40.f, "Montañas", "Calva", "Negro");
	 zebra = new Cebra(4, 60, 120.f, "Sabana", "Raya corta", "Frutos");
	 cocodrilo = new Cocodrilo(3, 80, 140.f, "Pantanos", "Colmillo grande", 60);
	 garza = new Garza(2, 15, 50.f, "Sabana", "Pataseca", 15);
	 guacamaya = new Guacamaya(2, 8, 15.f, "Jungla", "Picorico", 10);
	 hipopotamo = new Hipopotamo(5, 120, 180.f, "Sabana", "Barrigorda", 10);
	 leon = new Leon(7, 90, 160.f, "Sabana", "Melenua", 30);
	 oso = new Oso(7, 140, 150.f, "Bosque", "PeligrOSO", "EsponjOSO");
	 pinguino  = new Pinguino(2, 20, 40.f, "Antartida", "Real", "Amarillo");

	 exitMenu = true;
	 opc = 0;
}





void Historia::menu()
{
	exitMenu = true;
	printHistoria();

	while (exitMenu) {
		opc = -1;

		system("clear");
		cout << "MENU \n\n" << endl;
		cout << "1. Informacion de los animales" << endl;
		cout << "2. Informacion los empreados del zologico" << endl;
		cout << " 0. Salir" << endl;

		while (opc < 0 || opc > 9) {
			cout << ">> ";  cin >> opc;
		}

		if (opc == 1) {
			printAnimales();
		}

		if (opc == 0) {
			exitMenu = false;
			system("clear");
		}

	}
}

void Historia::printHistoria()
{
	cout << "Nuestra historia comienza con antonella una pequeña" << endl;
	cout << "niña con una gran imaginacion y amor por los animales, " << endl;
	cout << "la cual adora jugar en el parque con sus amigos, ir a " << endl;
	cout << "ferias y comer algunos dulces, disfrazarse y crear" << endl;
	cout << "historias de fantasia, pero luego de un tragico ataque " << endl;
	cout << "terrorista en un centro comercial en el cual una multitud" << endl;
	cout << "que huia asustada la arroyo y quedo gravemente lastimada " << endl;
	cout << "nuestra joven desarrollo un gran temor hacia las personas" << endl;
	cout << "por lo que su vision del mundo tuvo un gran cambio y no " << endl;
	cout << "quiso volver a experimentar nada fuera de su hogar hasta" << endl;
	cout << "que con el pasar del tiempo sus padres lograron convecerla " << endl;
	cout << "de visitar el zoo en el dia de su cumpleaños ya que al" << endl;
	cout << "no ser fin de semana ni epoca de festividades irian muy pocas " << endl;
	cout << "personas y asi inicia la historia de nuestra desafortunada señorita, " << endl;
	cout << "luego de un arduo viaje desde casa hasta el zoo en compañia de sus " << endl;
	cout << "padres y su princesa electrica de juguete logran llegar hasta el " << endl;
	cout << "zoo en donde las miradas de los intimidantes empleados asustaban a la" << endl;
	cout << "pequeña pero su princesa le servia de apoyo para resistir y asi pudo " << endl;
	cout << "atravesar la entrada para luego deslumbrarze con la magnifica " << endl;
	cout << "vista de los hermosos animales que se presentaban ante ella los " << endl;
	cout << "cuales le permitieron por un momento olvidar sus miedos y asi " << endl;
	cout << "lanzarse a correr para verlos mas de cerca y asi luego de pasar " << endl;
	cout << "un muy buen rato junto a sus padres vio por fin a lo lejos la zona " << endl;
	cout << "de los pinguinos los cuales eran sus animales favoritos sin percatarse " << endl;
	cout << "que sus padres no la habian seguido y en un descuido de ellos la " << endl;
	cout << "perdieron de vista, para cuando antonella se dio cuenta que no estaba " << endl;
	cout << "con ellos ya era demasiado tarde y su temor salta a la vista en el " << endl;
	cout << "momento que ve a uno de los guardias acercarce a ella pensando que " << endl;
	cout << "sin sus padres a su lado pasara lo mismo que en aquel tragico " << endl;
	cout << "accidente corriendo asi lo mas lejos posible del guardia escondiendose " << endl;
	cout << "en unos arbustos muy asustada luego de calmarse un poco y pensar que " << endl;
	cout << "lo mejor que podia hacer era volver hasta la entrada del zoo con la " << endl;
	cout << "esperaza de ver alli a sus padres de nuevo y asi con su imaginacion dar " << endl;
	cout << "inicio a una historia en su mente, ella recorda haber visto un camino " << endl;
	cout << "de afiches de gaseosa en el camino hasta donde se encontraba asi que " << endl;
	cout << "su mision era seguir las imagenes de gaseosa de regreso hasta acabarlas " << endl;
	cout << "para asi llegar a la entrada del zoo nuevamente pero sabia que el " << endl;
	cout << "camino no seria nada facil ya que tenia que evitar a los guardias lo " << endl;
	cout << "cual por su temor no le seria nada facil pero su princesa le daba fuerzas " << endl;
	cout << "y para ella representaba una barrera contra los guardias debido al valor " << endl;
	cout << "que le hacia sentir tenerla a su lado y asi en su compañia nuestra " << endl;
	cout << "protagonista iniciara su recorrido para hallar a sus padres" << endl;
	cout << "nuevamente." << endl;
	system("pause");
}

void Historia::printAnimales()
{


	opc = 0;
	system("clear");
	cout << "MENU \n\n" << endl;
	cout << "Que animal desea visitar?: " << endl;
	cout << " 1. Aguila " << endl;
	cout << " 2. Zebra " << endl;
	cout << " 3. Cocodrilo " << endl;
	cout << " 4. Garza " << endl;
	cout << " 5. Guacamaya " << endl;
	cout << " 6. Hipopotamo " << endl;
	cout << " 7. Leon " << endl;
	cout << " 8. Oso " << endl;
	cout << " 9. Pinguino " << endl;


	while (opc <= 0 || opc > 9) {
		cout << ">> ";  cin >> opc;
	}

	switch (opc)
	{

	case 1:
		system("clear");
		aguila->print();
		system("pause");
		break;

	case 2:
		system("clear");
		zebra->print();

		system("pause");
		break;

	case 3:
		system("clear");
		cocodrilo->print();

		system("pause");

		break;

	case 4:
		system("clear");
		garza->print();

		system("pause");
		break;

	case 5:
		system("clear");
		guacamaya->print();

		system("pause");
		break;

	case 6:
		system("clear");
		hipopotamo->print();


		system("pause");
		break;

	case 7:
		system("clear");
		leon->print();


		system("pause");
		break;

	case 8:
		system("clear");
		oso->print();


		system("pause");
		break;

	case 9:
		system("clear");
		pinguino->print();


		system("pause");
		break;

	default:
		break;
	}

}

void Historia::printEmpleados()
{

}





Aguila Historia::getAguila(){ return *aguila;}
Cebra Historia::getCebra(){	return *zebra;}
Cocodrilo Historia::getCocodrilo(){	return *cocodrilo;}
Garza Historia::getGarza(){	return *garza;}
Guacamaya Historia::getGuacamaya(){	return *guacamaya;}
Hipopotamo Historia::getHipopotamo(){ return *hipopotamo;}
Leon Historia::getLeon(){ return *leon;}
Oso Historia::getOso(){ return *oso;}
Pinguino Historia::getPinguino(){ return *pinguino;}



