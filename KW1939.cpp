#include <iostream>


using namespace std;

enum {Wizno=1, front1=2, bok1=3, cofanie1=4, Kock=5, front2, bok2, arty1, Gdynia, port, targ, koszary, news, Bzura, wycofanie, bok3, rozdziel1, CW, frontzach, frontwsch};


int main() {



cout <<"Witaj! Gra KW1939 v 1.2 pre-alpha"<< endl;
cout <<"[1] Bitwa - Wizna"<< endl;
cout <<"[5] Bitwa - Kock"<< endl;
cout <<"[14] Bitwa - Bzura"<< endl;
cout <<"[13] news-y o programie"<< endl;
cout <<"[18] CW"<< endl;
cout <<"Misja specjalna - po ukonczeniu B. pod Kockiem"<< endl;

int decision;

bool exit = false;
	
	while (!exit)
	{
		cout <<"Wybierz" << endl;
		while (!(cin >> decision))
	
	

	
	
	
	{
			cout <<"Wybierz inn¹ cyfrê"<< endl;
			cin.clear();
			cin.ignore();
		}
	


switch ( decision )
{
	

case Wizno:
cout <<"kliknij 2 aby zaatakowaæ frontalnie, 3 aby z boku, 4 aby siê wycofaæ"<< endl; break;

case front1:
cout <<"Pora¿ka! Niemcy zajêli Wizno!"<< endl; break;

case bok1:
cout <<"Wygrana! Idziemy dalej!"<< endl; break;

case cofanie1:
cout <<"Cofanie udane. Broñmy innych miast!"<< endl; break;
 
 case Kock:
 	cout <<"Poczuj sie jak dowodca! F. Kleeberg"<< endl;
 	cout <<"[6] klinij aby zaatakowac frontalnie"<< endl;
 	cout <<"[7] kliknij aby oflankowac wroga"<< endl;
 	cout <<"[8] kliknij aby uzyæ artylerii polowej"<< endl; break;
 	
 	case front2:
 		cout <<"Pora¿ka! Niemcy zniszczyli oddzia³ dowodz¹cy!"<< endl; break;
 		
 		case bok2:
 			cout <<"Pora¿ka! Niemcy maja za duzy oddzia³!"<< endl; break;
 			
 			case arty1:
 				cout <<"Wygrana! Pokonano przeciwnika!"<< endl; 
 				cout <<"Nowa misja! kliknij [9]"<< endl; break;
 				
 				case Gdynia:
 					cout <<"Jestes w Gdyni, czego chcesz bronic?"<< endl; 
 					cout <<"[10] port"<< endl;
 					cout <<"[11] targ"<< endl;
 					cout <<"[12] koszary"<< endl; break;
 					
 					case port:
 						cout <<"Wygrana! pokonano wszystkich"<< endl; break;
 						
 						case targ:
 							cout <<"Pora¿ka! wdarli sie wglab miasta!"<< endl; break;
 							
 							case koszary:
 								cout <<"Porazka!"<< endl; break;
 								
 								case news:
 									cout <<"Aktualnie dotepne 4 misje, wszyscy alpha testerzy otrzymaja specjalne misje na poczatek bety!"<< endl; 
 									cout <<"Wersja rozwojowa 1.2, Co ma byc w 1.2.1? Planowane Bitwy potyczek (PvP) o zdobywanie terenow + wybor frontu dla PvE"<< endl; break;
 									
			 	case Bzura:
 					cout <<"Jak chcesz sie bronic?"<< endl;
 					cout <<"[15] Wycofanie za rzeke"<< endl;
 					cout <<"[16] Wyjazd z boku Niemieckich wart"<< endl;
 					cout <<"[17] Rozdziel sily na dwie flanki"<< endl; break;
 					
 					case wycofanie:
 						cout <<"uzyj wszystkich sil aby zatrzymac wroga! Remis! Podpisano traktat pokojoway na froncie centralnym!"<< endl; break;
 						
 						case bok3:
 							cout <<"Porazka! Mimo pokonania wart, Niemcy mieli liczniejsze wojsko!"<< endl; break;
 							
 							case rozdziel1:
 								cout <<"porazka! Nie udalo sie opanowac pozycji wroga!"<< endl; break;
 					
 					case CW:
 						cout <<"UWAGA! wojny zawieszone do 12.03.2016!"<< endl;
 						cout <<"Fronty:"<< endl;
 						cout <<"[19] Front zachodni"<< endl;
 						cout <<"[20] Front wschodni"<< endl; break;
 				
 				case frontzach:
 					cout <<"Bitwa o Hel 19.00 12.03.16r! []"<< endl;
 					cout <<"Bitwa o mokra 19.00 14.03.16r! []"<< endl; break;
 					
 					case frontwsch:
 						cout <<"Bitwa o Lwow 19.00 15.03.16r []"<< endl; break;
 				


	
	
   }

}
   
		return 0;
}
