#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <cmath>

using namespace std;

int main()
{
    setlocale (LC_ALL, "portuguese");

    float esf_od, esf_oe, cil_od, cil_oe, adicao, eixo_od, eixo_oe;
    char bm, continuar='s';

    // lentes de Contato ou Lentes Oft�lmicas?
            cout << " " << endl;
            cout << " Lentes de contato com grau (incolor): " << endl;
            cout << " " << endl;
            cout << " Caixa com 03 pares - R$ 180,00." << endl;
            cout << " " << endl;
            cout << "   Obs 1. Cada par tem validade de 02 meses, ou se quebrar." << endl;
            cout << "   Obs 2. As lentes valem somentem para m�opes." << endl;
            cout << "   Obs 3. Os pares tem mesmo grau, portanto em dioptrias diferentes, " << endl;
            cout << "          escolher a de maior valor. " << endl;
            cout << " " << endl;
            cout << " " << endl;


            // 1.Valores da receita.

            while (continuar=='s') {

                cout << " Insira os valores da receita oft�lmica: " << endl << endl;
                cout << " Longe: " << endl << " ESF. " << endl;
                cout << "    O.D: ";
                cin >> esf_od;

                cout << "    O.E: ";
                cin >> esf_oe;
                cout << " " << endl;

                cout << " CIL." << endl;
                cout << "    O.D: ";
                cin >> cil_od;

                cout << "    O.E: ";
                cin >> cil_oe;
                cout << " " << endl;

                /* cout << " EIXO." << endl;
                cout << "    O.D: ";
                cin >> eixo_od;

                cout << "    O.E: ";
                cin >> eixo_oe;
                cout << " " << endl; */

                cout << " ADI��O: ";
                cin >> adicao;

                cout << endl;

                // 2.Dificuldade Visual.
                cout << endl;
                cout << " ------------------------------------------------" << endl;
                cout << " " << endl;
                cout << " Dificuldade Visual: " << endl;
                cout << " " << endl;

                if ( (esf_od<0 && esf_oe<=0) || (esf_od<=0 && esf_oe<0)) {
                    cout << " MIOPIA." << endl;
                }

                if ( (esf_od>0 && esf_oe>=0) || (esf_od>=0 && esf_oe>0) ) {
                    cout << " HIPERMETROPIA." << endl;
                }

                if (cil_od!=0 || cil_oe!=0) {
                    cout << " ASTIGMATISMO." << endl;
                }

                if (adicao!=0) {
                    cout << " PRESBIOPIA." << endl;
                }
                cout << " " << endl;
                cout << " ------------------------------------------------" << endl;

                // 3.Lentes indicadas e pre�os.

                    //3.1.Vis�o Simples
                if ((esf_od!=0 || esf_od!=0 || esf_oe!=0 || cil_od!=0 || cil_oe!=0) && adicao==0) {
                    cout << endl;
                    cout << " Lentes vis�o simples: " << endl;
                    cout << " " << endl;

                   if (esf_od>4.00 || esf_od<-4.00 || esf_oe>4.00 || esf_oe<-4.00 ||  cil_od<-2.00 ||  cil_od>2.00 || cil_oe<-2.00 || cil_oe>2.00 ) {
                        cout << " VS Org�ncica -------- R$ 180,00 com AR" << endl;
                        cout << " VS Policarbonato ---- R$ 250,00 com AR" << endl;
                        cout << " VS foto similar ----- R$ 250,00 com AR" << endl;
                        cout << " VS foto transitions - R$ 500,00 sem AR" << endl;
                        cout << "    + R$ 130,00 para colocar o AR (15 dias �teis)" << endl;

                        cout << " " << endl;
                        cout << " " << endl;

                    }

                    else {
                        cout << endl;
                        cout << " VS Org�ncica -------- R$ 100,00 com AR" << endl;
                        cout << " VS Policarbonato ---- R$ 200,00 com AR" << endl;
                        cout << " VS foto similar ----- R$ 200,00 com AR" << endl;
                        cout << " VS foto transitions - R$ 400,00 sem AR" << endl;
                        cout << "    + R$ 130,00 para colocar o AR (15 dias �teis)" << endl;
                        cout << " " << endl;
                        cout << " Obs: A partir de 3.00 Diopitria, dar prefer�ncia ao policarbonato." << endl;

                        cout << " " << endl;
                        cout << " " << endl;
                    }

                }

                // 3.2.Lentes com v�rios focus.
                if (adicao!=0){

                    cout << endl;
                    cout << " Lentes bifocais ou multifocais? " << endl;
                    cout << " " << endl;

                    cout << " Digite 'b' para bifocais ou 'm' para multifocais" << endl;
                    cout << " ";
                    cin >> bm;
                    cout << " " << endl;
                    cout << " ------------------------------------------------" << endl;

                    switch (bm) {

                        // 3.2.1. Bifocais.
                        case 'b':
                            cout << endl;
                            cout << " BIFOCAIS" << endl;
                            cout << " * Bifocais Org�nicas ----- a partir de R$ 150,00 " << endl;
                            cout << " * Bifocais Policarbonato - a partir de R$ 300,00 " << endl;
                            cout << " " << endl;
                            cout << " " << endl;

                            if (esf_od<adicao && esf_oe<adicao) {
                                // Biovis

                                cout << " Bifocal Biovis CR Base 4/6 ------- R$ 130,00" << endl;
                                cout << " Bifocal Biovis CR Base 0.5-2.00 -- R$ 130,00" << endl;
                                cout << " Bifocal Biovis Foto -------------- R$ 280,00" << endl;
                                cout << " Bifocal Biovis Photomax ---------- R$ 280,00" << endl;
                                cout << " Bifocal Biovis Policarbonato ----- R$ 300,00" << endl;
                                cout << " Bifocal Biovis Sunsensors -------- R$ 400,00" << endl;
                                cout << " Bifocal Biovis CR39 Transitions -- R$ 900,00" << endl;


                                cout << " " << endl;
                                cout << " " << endl;

                            }

                            if ( (esf_od>=adicao && esf_oe>adicao) || (esf_od>adicao && esf_oe>=adicao) )  {
                                // Ultex

                                cout << " Bifocal Ultex CR Base 4/6/8 --- R$ 130,00" << endl;
                                cout << " Bifocal Ultex Foto ------------ R$ 280,00" << endl;
                                cout << " Bifocal Ultex Sunsersors ------ R$ 300,00" << endl;


                                cout << " " << endl;
                                cout << " " << endl;
                            }

                            if (  ( (abs( abs(esf_od) - adicao))<=0.50 )  && ( (abs( abs(esf_od) - adicao))<=0.50  ) )  {
                                // Kriptok

                                cout << " Bifocal kriptok CR base 4/6/8 --- R$ 130,00" << endl;
                                cout << " Bifocal kriptok Impacto --------- R$ 150,00" << endl;
                                cout << " Bifocal kriptok Photomax -------- R$ 250,00" << endl;
                                cout << " Bifocal kriptok Foto ------------ R$ 280,00 ou R$ 260,00" << endl;
                                cout << " Bifocal kriptok Sunsensors ------ R$ 300,00" << endl;

                                cout << " " << endl;
                                cout << " " << endl;
                            }

                            break;

                        // 3.2.2.Multifocais.

                        case 'm':
                            cout << endl;
                            cout << " MULTIFOCAIS" << endl;
                            cout << " * Multifocais Org�nicas --------------- a partir de 130,00 " << endl;
                            cout << " * Multifocais Policarbonato ----------- a partir de 300,00 " << endl;
                            cout << " " << endl;
                            cout << " " << endl;

                            cout << " Multifocal Foto transitions ----------- R$ 600,00 " << endl;
                            cout << "    + R$ 130,00 para colocar o AR (15 dias �teis)" << endl;
                            cout << "  " << endl;
                            cout << " Multifocal Noline CR ------------------ R$ 130,00 " << endl;
                            cout << " Multifocal Noline Small --------------- R$ 130,00 " << endl;
                            cout << " Multifocal Argos CR 18/14 ------------- R$ 150,00 " << endl;
                            cout << " Multifocal Espace CR ------------------ R$ 150,00 " << endl;
                            cout << " Multifocal Espace Plus CR ------------- R$ 260,00 " << endl;
                            cout << " Multifocal Foto Similar --------------- R$ 280,00 ou R$ 300,00 " << endl;
                            cout << " Multifocal Espace Policarbonato ------- R$ 300,00 " << endl;
                            cout << " Multifocal Espace Plus Transitions ---- R$ 600,00 " << endl;

                            cout << " " << endl;
                            cout << " " << endl;

                            break;

                    }



                }

            cout << " Quer continuar nas lentes? " << endl;
            cout << " Se sim digite 's'. Se n�o digite 'n': ";
            cin >> continuar;

            cout << " " << endl;
            cout << " ------------------------------------------------" << endl;


            }

            // 4.Arma��es e pre�os.

            cout << endl;
            cout << " Quer escolher uma Arma��o?" << endl;
            cout << " Digite 's' para sim, ou 'n' para n�o: ";
            cin >> continuar;
            cout << " " << endl;
            cout << " ------------------------------------------------" << endl;

            char tipo;

            while (continuar=='s') {

                cout << endl;
                cout << " Arma��es por tipo de material: " << endl;
                cout << " Acetato ----------- a;" << endl;
                cout << " Metal ------------- m;" << endl;
                cout << " Aluminio ---------- l; " << endl;
                cout << " Tit�nio ----------- t;" << endl;
                cout << " Parafusadas (A�o) - p;" << endl;
                cout << " �culos Solar ------------- s;" << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << " Digite a letra correspondente ao tipo: ";
                cin  >> tipo;
                cout << " " << endl;
                cout << " ------------------------------------------------" << endl;


            switch (tipo) {
                case 'a':

                    cout << " Arma��es em Acetato " << endl;
                    cout << " " << endl;
                    cout << " X-Treme --- R$ 300,00 (01 ano de garantia)" << endl;
                    cout << " Keyper ---- R$ 300,00 (01 ano de garantia)" << endl;
                    cout << " Vizanni --- R$ 250,00 " << endl;
                    cout << " B-America - R$ 230,00 " << endl;
                    cout << " Focus ----- R$ 230,00 " << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    break;

                case 'm':
                    cout << " Arma��es em Metal: " << endl;
                    cout << " " << endl;
                    cout << " X-Treme --- R$ 300,00 (01 ano de garantia)" << endl;
                    cout << " Keyper ---- R$ 300,00 (01 ano de garantia)" << endl;
                    cout << " Vizanni --- R$ 180,00 " << endl;
                    cout << " B-America - R$ 180,00 " << endl;
                    cout << " Focus ----- R$ 180,00 " << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    break;

                case 'l':
                    cout << " Arma��es em Alum�nio: " << endl;
                    cout << " " << endl;
                    cout << " X-Treme --- R$ 300,00 (01 ano de garantia)" << endl;
                    cout << " Keyper ---- R$ 300,00 (01 ano de garantia)" << endl;
                    cout << " Vizanni --- R$ 200,00 " << endl;
                    cout << " B-America - R$ 200,00 " << endl;
                    cout << " Focus ----- R$ 200,00 " << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    break;

                case 't':
                    cout << " Arma��es em Tit�nio: " << endl;
                    cout << " " << endl;
                    cout << " Fort Vision -- R$ 280,00 (01 ano de garantia)" << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    break;

                case 'p':
                    cout << " Arma��es Parafusadas (A�o): " << endl;
                    cout << " " << endl;
                    cout << " X-Treme --- R$ 300,00 (01 ano de garantia)" << endl;
                    cout << " Keyper ---- R$ 300,00 (01 ano de garantia)" << endl;
                    cout << " Vizanni --- R$ 200,00 " << endl;
                    cout << " B-America - R$ 200,00 " << endl;
                    cout << " Focus ----- R$ 200,00 " << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    break;

               case 's':
                    cout << " �culos Solar: " << endl;
                    cout << " " << endl;
                    cout << " X-Treme --- R$ 300,00 (01 ano de garantia)" << endl;
                    cout << " Keyper ---- R$ 300,00 (01 ano de garantia)" << endl;
                    cout << " Vizanni --- R$ 250,00 " << endl;
                    cout << " Pr�-Sol --- R$ 250,00 " << endl;
                    cout << " B-America - R$ 200,00 " << endl;
                    cout << " Focus ----- R$ 200,00 " << endl;
                    cout << " Oasis ----- R$ 200,00 " << endl;
                    cout << " " << endl;
                    cout << " " << endl;
                    break;

                }
                cout << " ------------------------------------------------" << endl;
                cout << endl;
                cout << " Deseja continuar?" << endl;
                cout << " Digite 's' para sim, ou 'n' para n�o: ";
                cin >> continuar;
                cout << " " << endl;
                cout << " " << endl;

            }





    cout << " Muito Obrigado!" << endl;

    return 0;
}
