# include <iostream>

using namespace std;

int main() {

	//se definen las variables a usar
	char p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16;
	int a, b, c, d, v, au, r, k;

	cout << "+++++++++Test de estilos de aprendizaje VARK.+++++++++" << endl;
	cout << "Instrucciones:" << endl;
	cout << "A continuacion se le presenta 16 preguntas, las cuales son de opcion multiple donde debera contestar con" << endl;
	cout << "una de las opciones que le aparezca, debe responder con letras minusculas: a, b c o d, al finalizar le" << endl;
	cout << "apareceran los resultados correspondientes del test en base a su respuestas " << endl << endl;

	//se inicia las variables
	a = 0;
	b = 0;
	c = 0;
	d = 0;

	v = 0;
	au = 0;
	k = 0;
	r = 0;

	cout << "1. Esta ayudando a una persona que desea ir al aereopuerto, al centro de la ciudad o a la" << endl;
	cout << "estacion del ferrocarril. Ud:" << endl;
	cout << "  a. iria con ella." << endl;
	cout << "  b. le diria como llegar." << endl;
	cout << "  c. le daria las indicaciones por esrito (sin un mapa)." << endl;
	cout << "  d. le daria un mapa." << endl;
	cin >> p1;
	//revisión de la respuesta y suma de valores a los estilos de aprendizaje
	if (p1 == 'a' || p1 =='A')
	{
		k = k + 1;
	}
	else if (p1 == 'b' || p1 == 'B')
	{
		au = au + 1;
	}
	else if (p1 == 'c' || p1 == 'C')
	{
		r = r + 1;
	}
	else if (p1 == 'd' || p1 == 'D')
	{
		v = v + 1;
	}
	cout << endl;

	cout << "2. No esta seguro si una palabra se escribe como 'trascendente' o 'tracendente', Ud:" << endl;
	cout << "  a. veria las palabras en su mente y elegiria la que mejor luce." << endl;
	cout << "  b. pensaria en como suena cada palabra y elegirica una." << endl;
	cout << "  c. las buscaria en un diccionario." << endl;
	cout << "  d. escribiria ambas palabras y elegiria una." << endl;
	cin >> p2;
	if (p2 == 'a' || p2 == 'A')
	{
		v = v + 1;
	}
	else if (p2 == 'b' || p2 == 'B')
	{
		au = au + 1;
	}
	else if (p2 == 'c' || p2 == 'C')
	{
		r = r + 1;
	}
	else if (p2 == 'd' || p2 == 'D')
	{
		k = k + 1;
	}
	cout << endl;

	cout << "3. Esta planenado unas vacaciones para un grupo de personas y desearia la" << endl;
	cout << "retroalimentacion de ellos sobre el plan. Ud:" << endl;
	cout << "  a. describiria algunos de los atractivos del viaje." << endl;
	cout << "  b. utilizaria un mapa o un sitio web para mostrar los lugares." << endl;
	cout << "  c. les daria una copia del itinerario impreso." << endl;
	cout << "  d. les llamaria por telefono, les escribiria o les enviaria un e-mail." << endl;
	cin >> p3;
	if (p3 == 'a' ||p3 == 'A')
	{
		k = k + 1;
	}
	else if (p3 == 'b' || p3 == 'B')
	{
		v = v + 1;
	}
	else if (p3 == 'c' || p3 == 'C')
	{
		r = r + 1;
	}
	else if (p3 == 'a' || p3 == 'B')
	{
		au = au + 1;
	}
	cout << endl;

	cout << "4. Va a cocinar algun platillo especial para su familia. Ud:" << endl;
	cout << "  a. cocinaria algo que conoce sin la necesidad de instruncciones." << endl;
	cout << "  b. pediria sugerencias a sus amigos." << endl;
	cout << "  c. hojearia un libro de cocina para tomar ideas de las fotografias." << endl;
	cout << "  d. utilizaria un libro de cocina donde sabe que hay una buena receta." << endl;
	cin >> p4;
	if (p4 == 'a' || p4 == 'A')
	{
		k = k + 1;
	}
	else if (p4 == 'b' || p4 == 'B')
	{
		au = au + 1;
	}
	else if (p4 == 'c' || p4 == 'C')
	{
		v = v + 1;
	}
	else if (p4 == 'd' || p4 == 'D')
	{
		r = r + 1;
	}
	cout << endl;

	cout << "5. Un grupo e turistas desea aprendersobre los parques o las reservas de vida salvaje" << endl;
	cout << "en su area. Ud:" << endl;
	cout << "  a. les daria una platica acerca de parques o reservas de vida salvaje." << endl;
	cout << "  b. les mostraria figuras de Internet, fotografias o libros con imagenes." << endl;
	cout << "  c. los llevaria a un parque o reserva y daria una caminata con ellos." << endl;
	cout << "  d. les daria libros o folletos sobre parques o reservas de vida salvaje." << endl;
	cin >> p5;
	if (p5 == 'a' || p5 == 'A')
	{
		au = au + 1;
	}
	else if (p5 == 'b' || p5 == 'B')
	{
		v = v + 1;
	}
	else if (p5 == 'c' || p5 == 'C')
	{
		k = k + 1;
	}
	else if (p5 == 'd' || p5 == 'D')
	{
		r = r + 1;
	}
	cout << endl;

	cout << "6. .Esta a punto de comprar una camara digital o un telefono movil. ¿Ademas del precio?" << endl;
	cout << "que mas influye en su decision" << endl;
	cout << "  a. lo utiliza o lo prueba." << endl;
	cout << "  b. la lectura de los detalles acerca de las caracteristicas del aparato." << endl;
	cout << "  c. el disenio del aparato es moderno y parece bueno." << endl;
	cout << "  d. los comentarios del vendedor acerca de las caracteristicas del aparato." << endl;
	cin >> p6;
	if (p6 == 'a' || p6 == 'A')
	{
		k = k + 1;
	}
	else if (p6 == 'b' || p6 == 'B')
	{
		r = r + 1;
	}
	else if (p6 == 'c' || p6 == 'C')
	{
		v = v + 1;
	}
	else if (p6 == 'd' || p6 == 'D')
	{
		au = au + 1;
	}
	cout << endl;


	cout << "7. Recuerde la vez cuando aprendio como hacer algo nuevo. Evite elegir una destreza" << endl;
	cout << "fisica, como montar bicicleta. ¿Como aprendio mejor?" << endl;
	cout << "  a. viendo una demostracion." << endl;
	cout << "  b. escuchando la explicacion de alguien y haciendo preguntas." << endl;
	cout << "  c. siguiendo pistas visuales en diagramas y graficas." << endl;
	cout << "  d. siguiendo instrucciones escritas en un manual o libro de texto." << endl;
	cin >> p7;
	if (p7 == 'a' || p7 == 'A')
	{
		k = k + 1;
	}
	else if (p7 == 'b' || p7 == 'B')
	{
		au = au + 1;
	}
	else if (p7 == 'c' || p7 == 'C')
	{
		v = v + 1;
	}
	else if (p7 == 'd' || p7 == 'D')
	{
		r = r + 1;
	}
	cout << endl;

	cout << "8. Tiene un problema con su rodilla. Preferiria que el doctor: " << endl;
	cout << "  a. le diera una direccion web o algo para leer sobre el asunto." << endl;
	cout << "  b. utilizara un modelo plastico de una rodilla para mostrarle que esta mal." << endl;
	cout << "  c. le describiera que esta mal." << endl;
	cout << "  d. le mostrara con un diagrama que es lo que esta mal." << endl;
	cin >> p8;
	if (p8 == 'a' || p8 == 'A')
	{
		r = r + 1;
	}
	else if (p8 == 'b' || p8 == 'B')
	{
		k = k + 1;
	}
	else if (p8 == 'c' || p8 == 'C')
	{
		au = au + 1;
	}
	else if (p8 == 'd' || p8 == 'D')
	{
		v = v + 1;
	}
	cout << endl;

	cout << "9. Desea aprender un nuevo programa, habilidad o juego de computadora. Ud, debe:" << endl;
	cout << "	a. leer las instrucciones escritas que vienen con el programa." << endl;
	cout << "	b. platicar con personas que conocen el programa." << endl;
	cout << "	c. utilizar los controles o el teclado." << endl;
	cout << "	d. seguir los diagramas del libro que vienen con el programa." << endl;
	cin >> p9;
	if (p9 == 'a' || p9 == 'A')
	{
		r = r + 1;
	}
	else if (p9 == 'b' || p9 == 'B')
	{
		au = au + 1;
	}
	else if (p9 == 'c' || p9 == 'C')
	{
		k = k + 1;
	}
	else if (p9 == 'd' || p9 == 'D')
	{
		v = v + 1;
	}

	cout << "10. Le gustan los sitios web que tienen:" << endl;
	cout << "  a. cosas que pueden picar, mover o probar." << endl;
	cout << "  b. un disenio interesante y caracteristicas visuales." << endl;
	cout << "  c. descripciones escritas interesantes, caracteristicas y explicaciones." << endl;
	cout << "  d. canales de audio para oir musica, programas o entrevistas." << endl;
	cin >> p10;
	if (p10 == 'a' || p10 == 'A')
	{
		k = k + 1;
	}
	else if (p10 == 'b' || p10 == 'B')
	{
		v = v + 1;
	}
	else if (p10 == 'c' || p10 == 'C')
	{
		r = r + 1;
	}
	else if (p10 == 'd' || p10 == 'D')
	{
		au = au + 1;
	}
	cout << endl;

	cout << "11. Ademas del precio, ¿que influiria mas en su decision de comprar un nuevo libro de no?" << endl;
	cout << "ficcion?" << endl;
	cout << "  a. la apariencia le resulta atractiva." << endl;
	cout << "  b. una lectura rapida de algunas partes de libro." << endl;
	cout << "  c. un amigo le habla del libro y se lo recomienda." << endl;
	cout << "  d. tiene historias, experiencias y ejemplos de la vida real." << endl;
	cin >> p11;
	if (p11 == 'a' || p11 == 'A')
	{
		v = v + 1;
	}
	else if (p11 == 'b' || p11 == 'B')
	{
		r = r + 1;
	}
	else if (p11 == 'c' || p11 == 'C')
	{
		au = au + 1;
	}
	else if (p11 == 'd' || p11 == 'D')
	{
		k = k + 1;
	
	}
	cout << endl;

	cout << "12. Esta utilizando un libro, CD o sitio web para aprender como tomar fotografias con su" << endl;
	cout << "nueva camara digital. Les gustaria tener:" << endl;
	cout << "  a. la oportunidad de hacer preguntas y que le hablen sobre la camara y sus caracteristicas." << endl;
	cout << "  b. intrucciones escritas con claridad, con caracteristicas y puntos sobre que hacer." << endl;
	cout << "  c. diagramas que muestren la camara y que hace cada una de sus partes." << endl;
	cout << "  d. muchos ejemplo de fotograficas buenas y malas y como mejorar estas." << endl;
	cin >> p12;
	if (p12 == 'a' || p12 == 'A')
	{
		au = au + 1;
	}
	else if (p12 == 'b' || p12 == 'B')
	{
		r = r + 1;
	}
	else if (p12 == 'c' || p12 == 'C')
	{
		v = v + 1;
	}
	else if (p12 == 'd' || p12 == 'D')
	{
		k = k + 1;
	}
	cout << endl;

	cout << "13. Prefiere a un profesor o un expositor que utiliza:" << endl;
	cout << "  a. demostraciones, modelos o sesiones practicas." << endl;
	cout << "  b. preguntas y respuestas, charlas, grupos de discusion u oradores invitados." << endl;
	cout << "  c. folletos, libros o lecturas." << endl;
	cout << "  d. diagramas, esquemas o graficas." << endl;
	cin >> p13;
	if (p13 == 'a' || p13 == 'A')
	{
		k = k + 1;
	}
	else if (p13 == 'b' || p13 == 'B')
	{
		au = au + 1;
	}
	else if (p13 == 'c' || p13 == 'C')
	{
		r = r + 1;
	}
	else if (p13 == 'd' || p13 == 'D')
	{
		v = v + 1;
	}
	cout << endl;

	cout << "14. Ha acabado una competencia o una prueba y quisiera una retroalimentacion. Quisiera:" << endl;
	cout << "tener la retroalimentacion:" << endl;
	cout << "  a. utilizando ejemplos de lo que ha hecho." << endl;
	cout << "  b. utilizando una descripcion escrita de sus resultados." << endl;
	cout << "  c. escuchando a alguien haciendo una revision detallada de su desempeño." << endl;
	cout << "  d. utilizando graficas que muestren lo que ha conseguido." << endl;
	cin >> p14;
	if (p14 == 'a' || p14 == 'A')
	{
		k = k + 1;
	}
	else if (p14 == 'b' || p14 == 'B')
	{
		r = r + 1;
	}
	else if (p14 == 'c' || p14 == 'C')
	{
		au = au + 1;
	}
	else if (p14 == 'd' || p14 == 'D')
	{
		v = v + 1;
	}
	cout << endl;

	cout << "15. Va a elegir sus alimentos en un restaurante o cafe. Ud:" << endl;
	cout << "  a. elefiria algo que ha probado en ese lugar." << endl;
	cout << "  b. escucharia al mesero o pediria recomendaciones a sus amigos." << endl;
	cout << "  c. elegiria a partir de las descripciones del menu." << endl;
	cout << "  d. observaria lo que otros estan comiendo o las fotografias de cada platillo" << endl;
	cin >> p15;
	if (p15 == 'a' || p15 == 'A')
	{
		k = k + 1;
	}
	else if (p15 == 'b' || p15 == 'B')
	{
		au = au + 1;
	}
	else if (p15 == 'c' || p15 == 'C')
	{
		r = r + 1;
	}
	else if (p15 == 'd' || p15 == 'D')
	{
		v = v + 1;
	}
	cout << endl;

	cout << "16. Tiene que hacer un discurso importante para una conferencia o una ocasion especial. Ud:" << endl;
	cout << "  a. elaboraria diagramas o conseguiria graficos que le ayuden a explicar las ideas." << endl;
	cout << "  b. escribiria algunas palabras clave y practica su discurso repetidamente." << endl;
	cout << "  c. escribiria su discurso y se lo aprenderia leyendolo varias veces." << endl;
	cout << "  d. conseguiria muchos ejemplos e historias para hacer la charla real y practica." << endl;
	cin >> p16;
	if (p16 == 'a' || p16 == 'A')
	{
		v = v + 1;
	}
	else if (p16 == 'b' || p16 == 'B')
	{
		au = au + 1;
	}
	else if (p16 == 'c' || p16 == 'C')
	{
		r = r + 1;
	}
	else if (p16 == 'd' || p16 == 'D')
	{
		k = k + 1;
	}
	
	cout << endl;

	k = (k * 100) / 16;
	au = (au * 100) / 16;
	r = (r * 100) / 16;
	v = (v * 100) / 16;

	cout << "Porcentajes" << endl;
	cout << "KINESTESICO:" << k << " %" << endl;
	cout << "AUDITIVA:" << au << " %" << endl;
	cout << "VISUAL:" << v << " %" << endl;
	cout << "LECTURA O ESCRITURA:" << r << " %" << endl <<endl;


	//se compara el aprendizaje virtual con los demas resultados
	//visual
	if (v > au && v > r && v > k)
	{
		cout << " Su aprendizaje es: 'Visual'" << endl;
		cout << "Caracteristicas" << endl;
		cout << "A los alumnos visuales les gusta leer." << endl;
		cout << "Toman notas copiosas." << endl;
		cout << "A menudo cierran los ojos para visualizar o recordar." << endl;
		cout << "Suelen ser buenos deletreadores." << endl;
		cout << "Les gusta ver lo que están leyendo. " << endl;
		cout << "Tienden a valorar la planificación y la organización." << endl;
		cout << "Los aprendices visuales son meticulosos, limpios en apariencia." << endl;
		cout << "Los alumnos visuales notan detalles" << endl << endl;
		cout << "Recomendaciones " << endl;
		cout << "Las recomendaciones para el aprendizaje visual es que por medio de mapas conceptuales, lineas del tiempo," << endl;
		cout << "mapas de ideas, entre otras. Se usen para estudiar y potencial este aprendizaje." << endl;
	}



	//se evalua la condicion para el aprendizaje autidivo
	else if (au > v && au > r && au > k)
	{
		cout << "Su aprendizaje es: 'Autidivo'" << endl;
		cout << "Caracteristicas" << endl;
		cout << "Son muy habladores" << endl;
		cout << "Necesitan escuchar sonidos para aprender" << endl;
		cout << "Tienen muy buena memoria auditiva" << endl;
		cout << "Comparten una serie de rasgos de personalidad" << endl << endl;
		cout << "Recomendaciones " << endl;
		cout << "Estudia en grupo" << endl;
		cout << "Grabar las clases" << endl;
		cout << "Escucha música clásica al estudiar" << endl;
	}


	//se evalua la condicion para el aprendizaje Lectura/Escritura
	else if (r > v && r > au && r > k)
	{
		cout << "Su aprendizaje es: 'Lectura/Escritura'" << endl;
		cout << "Caracteristicas" << endl;
		cout << "Aprenden mas cuando reciben y devuelven la informacion" << endl;
		cout << "La comunicacion puede ser escrita o tecleada" << endl;
		cout << "Las herramientas de eleccion normalmente son los diccionarios" << endl << endl;
		cout << "Recomendaciones " << endl;
		cout << "Listar los datos mas importantes " << endl;
		cout << "Utilizar diccionarios " << endl;
		cout << "Usar revistas y diccionarios " << endl;
		cout << "Buscar textos en Internet " << endl;
	}


	//se evalua la condiciones para el aprendizaje kinesico
	else if (k > v && k > au && k > r)
	{
		cout << "Su aprendizaje es: 'Kinestesico'" << endl;
		cout << "Caracteristicas" << endl;
		cout << "Aunque es un proceso de aprendizaje lento, los conocimientos son mucho más consistentes y duraderos." << endl;
		cout << "Durante el desarrollo de este aprendizaje, la persona siente curiosidad por el tacto, se mantienen en " << endl;
		cout << "constante movimiento expresando ideas y sentimientos y así, facilitar el proceso de aprendizaje" << endl;
		cout << "Mantienen dificultad al momento de concentrarse, ya que son persona intranquila" << endl;
		cout << "Tienden a involucrarse de manera muy personal en lo que se quiere aprender" << endl << endl;
		cout << "Recomendaciones " << endl;
		cout << "Utilizar objetos que pueda mover, o tocar constantemente, como al momentos de manipular un instrumento musical" << endl;
		cout << "Realizar una pequeña dramatización o simulaciones de la información que busque almacenar " << endl;
		cout << "Poner el practica la comunicación corporal, dándole significado de imágenes u objetos " << endl;
		cout << "Relacionando palabras con objetos y así facilitar su comprensión y recuerdo, como aprender la palabra “pintar”," << endl;
		cout << "la recordará mejor si realiza el movimiento con sus manos como si estuviese pintando." << endl;
		
	}


	//SE EVALUA LA CONDICION PARA EL APRENDIZAJE VISUAL Y ...
	//se evalua la condicion para el aprendizaje si tiene las mismas cantidades visual y audivivo
	else if (v == au && v > k && v >r && au > k && au > r)
	{
	cout << "Su aprendizaje es: 'Visual y Auditivo'" << endl << endl;
	cout << "Caracteristicas" << endl;
	cout << "Les gusta leer, son muy habladores" << endl;
	cout << "Toman notas, tiene buena memoria auditiva" << endl;
	cout << "Necesitan escuchar para aprender, suelen se buenos deletreadores" << endl;
	cout << "Los alumnos visuales notan detalles, son meticulosos" << endl << endl;
	cout << "Recomendaciones" << endl;
	cout << "Usar mapas conceptuales, lineas del tiempo, mapa de ideas para mejorar el aprendizaje visual" << endl;
	cout << "Estudiar en grupo, grabar las clases y escuchar musica es algunas de las cosas que pueden usar" << endl;
	cout << "Para mejorar el aprendizaje autidivo" << endl;
	}

	// se evalua para la condicion visual y leer/escribir
	else if (v == r && v >= au && v >k  && r > au && r > k)
	{
	cout << "Su aprendizaje es: 'Visual y Leer/Escribir'" << endl;
	cout << "Caracteristicas" << endl;
	cout << "A los alumnos visuales les gusta leer." << endl;
	cout << "Toman notas copiosas." << endl;
	cout << "A menudo cierran los ojos para visualizar o recordar." << endl;
	cout << "Aprenden mas cuando reciben y devuelven la informacion" << endl;
	cout << "La comunicacion puede ser escrita o tecleada" << endl;
	cout << "Las herramientas de eleccion normalmente son los diccionarios" << endl << endl;
	cout << "Recomendaciones" << endl;
	cout << "Usar mapas conceptuales, lineas del tiempo, mapa de ideas para mejorar el aprendizaje visual" << endl;
	cout << "Listar los datos mas importantes " << endl;
	cout << "Utilizar diccionarios " << endl;
	cout << "Usar revistas y diccionarios " << endl;
	cout << "Buscar textos en Internet " << endl;
	}

	//se evalua la condiciones para visual y kinesico
	else if (v == k && v > au && v > r && k > au && k > r)
	{
	cout << "Su aprendizaje es: 'Visual y Kinestesico'" << endl;
	cout << "Caracteristicas" << endl; 
	cout << "A los alumnos visuales les gusta leer." << endl;
	cout << "Toman notas copiosas." << endl;
	cout << "A menudo cierran los ojos para visualizar o recordar." << endl;
	cout << "constante movimiento expresando ideas y sentimientos y así, facilitar el proceso de aprendizaje" << endl;
	cout << "Mantienen dificultad al momento de concentrarse, ya que son persona intranquila" << endl;
	cout << "Tienden a involucrarse de manera muy personal en lo que se quiere aprender" << endl << endl;
	cout << "Recomendaciones" << endl;
	cout << "Usar mapas conceptuales, lineas del tiempo, mapa de ideas para mejorar el aprendizaje visual" << endl;
	cout << "Realizar una pequeña dramatización o simulaciones de la información que busque almacenar " << endl;
	cout << "Poner el practica la comunicación corporal, dándole significado de imágenes u objetos " << endl;
	cout << "Relacionando palabras con objetos y así facilitar su comprensión y recuerdo, como aprender la palabra “pintar”," << endl;
	cout << "la recordará mejor si realiza el movimiento con sus manos como si estuviese pintando." << endl;

	}

	// SE EVALUA LA CONDICION PARA AUDITIVO Y ...
	// se evalua para la condicion auditivo y Leer/Escribir
	else if (au == r && au > v && au > k && r > v && r > k)
	{
	cout << "Su aprendizaje es: 'Autidivo y Leer/Escribir'" << endl;
	cout << "Caracteristicas" << endl;
	cout << "Aprenden mas cuando reciben y devuelven la informacion" << endl;
	cout << "La comunicacion puede ser escrita o tecleada" << endl;
	cout << "Las herramientas de eleccion normalmente son los diccionarios" << endl << endl;
	cout << "Son muy habladores" << endl;
	cout << "Necesitan escuchar sonidos para aprender" << endl;
	cout << "Tienen muy buena memoria auditiva" << endl << endl;
	cout << "Recomendaciones" << endl;
	cout << "Estudia en grupo" << endl;
	cout << "Grabar las clases" << endl;
	cout << "Escucha música clásica al estudiar" << endl;
	cout << "Listar los datos mas importantes " << endl;
	cout << "Utilizar diccionarios " << endl;
	cout << "Usar revistas y diccionarios " << endl;
	cout << "Buscar textos en Internet " << endl;
	}

	//se evalua la condiciones para auditivo y kinesico
	else if (au == k && au > v && au > r && k > v && k > r)
	{
	cout << "Su aprendizaje es: 'Autidivo y Kinestesico'" << endl;
	cout << "Son muy habladores" << endl;
	cout << "Necesitan escuchar sonidos para aprender" << endl;
	cout << "Tienen muy buena memoria auditiva" << endl << endl;
	cout << "Durante el desarrollo de este aprendizaje, la persona siente curiosidad por el tacto, se mantienen en " << endl;
	cout << "constante movimiento expresando ideas y sentimientos y así, facilitar el proceso de aprendizaje" << endl;
	cout << "Mantienen dificultad al momento de concentrarse, ya que son persona intranquila" << endl;
	cout << "Tienden a involucrarse de manera muy personal en lo que se quiere aprender" << endl << endl;
	cout << "Recomendaciones" << endl;
	cout << "Estudia en grupo" << endl;
	cout << "Grabar las clases" << endl;
	cout << "Escucha música clásica al estudiar" << endl;
	cout << "Utilizar objetos que pueda mover, o tocar constantemente, como al momentos de manipular un instrumento musical" << endl;
	cout << "Realizar una pequeña dramatización o simulaciones de la información que busque almacenar " << endl;
	cout << "Poner el practica la comunicación corporal, dándole significado de imágenes u objetos " << endl;

	}

	//SE EVALUA LA CONDICION PARA LEER/ESCRIBIR Y ...
	else if (r == k && r > v && r > au && k > v && k > au)
	{
	cout << "Su aprendizaje es: 'Leer/Escribir Y Kinestesico'" << endl;
	cout << "Aprenden mas cuando reciben y devuelven la informacion" << endl;
	cout << "La comunicacion puede ser escrita o tecleada" << endl;
	cout << "Las herramientas de eleccion normalmente son los diccionarios" << endl;
	cout << "Durante el desarrollo de este aprendizaje, la persona siente curiosidad por el tacto, se mantienen en " << endl;
	cout << "constante movimiento expresando ideas y sentimientos y así, facilitar el proceso de aprendizaje" << endl;
	cout << "Mantienen dificultad al momento de concentrarse, ya que son persona intranquila" << endl;
	cout << "Tienden a involucrarse de manera muy personal en lo que se quiere aprender" << endl << endl;
	cout << "Recomendaciones" << endl;
	cout << "Listar los datos mas importantes " << endl;
	cout << "Utilizar diccionarios " << endl;
	cout << "Usar revistas y diccionarios " << endl;
	cout << "Buscar textos en Internet " << endl;
	cout << "Utilizar objetos que pueda mover, o tocar constantemente, como al momentos de manipular un instrumento musical" << endl;
	cout << "Realizar una pequeña dramatización o simulaciones de la información que busque almacenar " << endl;
	cout << "Poner el practica la comunicación corporal, dándole significado de imágenes u objetos " << endl;
	}

	//SE DETERMINA SI LA PERSONA TIENE LOS 4 TIPOS DE APRENDIZAJE
	else if (v == au && v == r && v == k)
	{
	cout << "Felicidades, ud posee los 4 tipos de aprendizaje'" << endl;
	cout << "Caracteristicas" << endl;
	cout << "Al practicar los 4 tipos de aprendizaje, tiene las caracteristicas de ser muy participativo" << endl;
	cout << "tiene buena memoria auditiva, tiene la curiosidad de aprender, aprenden más cuando reciben" << endl;
	cout << "y devuelven informacion, a lo cual lo lleva a un nivel de aprendizaje estable" << endl;
	cout << "Recomendaciones" << endl;
	cout << "Lo que se le recomienda es que siempre busque nuevas formas de aprender, ya que al practicar" << endl;
	cout << "diferentes actividades, fomentamos el avance en nuestros 4 tipos de aprendizaje" << endl;
	}

	cout << endl;
	cout << "Programa finalizado, feliz dia" << endl << endl;
	system:("pause");

}


