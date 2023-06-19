#include "bsa.h"

int main()
{
	cBSA BancoSA;

	cCDS centro_N1("Centro Numero 1", "Av. Colón 3294", "General Pueyrredon", "Buenos Aires", 2234997999);
	cCDS centro_N2("Centro Integral de Salud", "Gascón 2662", "General Pueyrredon", "Buenos Aires", 2234930461);
	cCDS centro_N3("Centro Numero 21", "Ulla Ulla 2839", "CABA", "Buenos Aires", 1143136985);
	cCDS centro_N4("Centro Numero 17", "El Salvador 4037", "CABA", "Buenos Aires", 1128213617);
	cCDS centro_N5("Centro Numero 29", "Gómez Portiño 5370", "Capital Posadas", "Misiones", 3764458205);

	BancoSA.agregar_centro(&centro_N1);
	BancoSA.agregar_centro(&centro_N2);
	BancoSA.agregar_centro(&centro_N3);
	BancoSA.agregar_centro(&centro_N4);
	BancoSA.agregar_centro(&centro_N5);


	cSangre sangre1(42,A,'+');
	cSangre sangre2(42, B, '-');
	cSangre sangre3(42, AB, '+');
	cSangre sangre4(42,O, '-');
	cSangre sangre5(42, AB, '+');
	cPlasma plasma1(365, A, '-');
	cPlasma plasma2(365, O, '-');
	cPlasma plasma3(365, A, '+');
	cMedula medula1(true, 1, O, '-');
	cMedula medula2(true, 1, B, '+');
	cMedula medula3(true, 1, B, '+');

	cDonante Emilia (false, false, false, "Emilia Janin", "44979799", 'f', "2234546336", 20, 60.0, &sangre1);
	cDonante Isabella(false, false, false, "Isabella Ferrari", "5436346", 'f', "82989029", 19, 55.43, &sangre2);
	cDonante Delfina(false, false, false, "Delfina Hanisch", "26253825", 'f', "2826236", 19, 74.2, &plasma1);
	cDonante Saul(true, true, false, "Saul Lezama", "4487248", 'm', "3735225382", 19,67.0, &plasma2);
	cDonante Maria(false, false, false, "Maria Durand", "28689334", 'f', "352635", 19, 67.0, &medula1);
	cDonante CamilaB(false, false, true, "Camila Bngiovanni", "6362893", 'f', "365252892", 19, 89.0, &medula2);

	cReceptor Renata(1, inestable, "Renata Stasi", "4905905", 'f', "372358", 19, 45.0,&sangre3);
	cReceptor Mariano(1, estable, "Mariano Borderia", "4789483", 'm', "363269", 19, 68.9, &sangre5);
	cReceptor CamilaZ(2,estable, "Camila Zavidowski", "5436346", 'f', "82989029", 19, 56.9, &sangre4);
	cReceptor Florencia(3, estable, "Florencia Velo Bares", "67845734", 'f', "7271728", 19, 45.0, &plasma3);
	cReceptor Federico(2, inestable, "Federico Fioriti", "3276328", 'm', "78293698", 19, 60.0, &medula3);

	centro_N1.agregar_lista(&Emilia);
	centro_N1.agregar_lista(&Renata);
	centro_N5.agregar_lista(&Saul);
	centro_N5.agregar_lista(&CamilaB);
	centro_N2.agregar_lista(&Isabella);
	centro_N2.agregar_lista(&Mariano);
	centro_N5.agregar_lista(&CamilaZ);
	centro_N3.agregar_lista(&Delfina);
	centro_N4.agregar_lista(&Florencia);
	centro_N4.agregar_lista(&Maria);
	centro_N4.agregar_lista(&Federico);

	BancoSA.imprimir();//imprime los centros de salud que agregamos

	centro_N1.imprimir_lista_d();//imprime los donadores que si fueron agregados a la lista(los que cumplen los requisitos para ser donantes) del centro de salud 1
	centro_N1.imprimir_lista_r();
	centro_N2.imprimir_lista_d();
	centro_N2.imprimir_lista_r();
	centro_N3.imprimir_lista_d();
	centro_N3.imprimir_lista_r();
	centro_N4.imprimir_lista_d();
	centro_N4.imprimir_lista_r();
	centro_N5.imprimir_lista_d();
	centro_N5.imprimir_lista_r();

	cReceptor* paciente_match1 = BancoSA.match(&Emilia);
	bool trans_realizada1 = centro_N1.realizar_transfusión(&Emilia, paciente_match1);
	if (trans_realizada1 == true)
	{
		cout << "Transusion relizada con exito!" << endl;
	}
	else if (trans_realizada1 == false) {
		cout << "Hubo complicaciones con la transfusion, ahora pasa al frente de la lista de espera" << endl;
	}

	cReceptor* paciente_match2 = BancoSA.match(&Isabella);
	bool trans_realizada2 = centro_N2.realizar_transfusión(&Isabella, paciente_match2);
	if (trans_realizada2 == true)
	{
		cout << "Transusion relizada con exito!" << endl;
	}
	else if (trans_realizada2 == false) {
		cout << "Hubo complicaciones con la transfusion, ahora pasa al frente de la lista de espera" << endl;
	}

	cReceptor* paciente_match3 = BancoSA.match(&Delfina);
	bool trans_realizada3 = centro_N3.realizar_transfusión(&Emilia, paciente_match1);
	if (trans_realizada3 == true)
	{
		cout << "Transusion relizada con exito!" << endl;
	}
	else if (trans_realizada3 == false) {
		cout << "Hubo complicaciones con la transfusion, ahora pasa al frente de la lista de espera" << endl;
	}

	cReceptor* paciente_match4 = BancoSA.match(&Maria);
	bool trans_realizada4 = centro_N4.realizar_transfusión(&Maria, paciente_match1);
	if (trans_realizada4 == true)
	{
		cout << "Transusion relizada con exito!" << endl;
	}
	else if (trans_realizada4 == false) {
		cout << "Hubo complicaciones con la transfusion, ahora pasa al frente de la lista de espera" << endl;
	}


}
