#include<fstream>
#include "trideni.h"

void nacti(std::string nazev, seznam_slov & jmena){
	std::ifstream vstupni_soubor;
	vstupni_soubor.open(nazev.c_str());
	
	std::string radek;
	
	while(std::getline(vstupni_soubor,radek)){
		jmena.push_back(radek);
	}
	
	vstupni_soubor.close();
}


void serad(seznam_slov & jmena){
}


void vypis(seznam_slov & jmena){
	for (int i=0; i<jmena.size();i++){
		std::cout<<jmena(i)<<std::cout;
	} 
}


bool zeptej_se_jestli_vypsat(){
	char vypsat;
	while(true){
		std::cout<<"Chcete vypsat seznam"<< 
		std::cin>>vypsat;
		if(vypsat =='A'|| vypsat =='a') return true;<<std::endl;
		else if (vypsat == 'N' || vypsat =='n') return false;
		else std::cout <<"Nerozumim.";		
	}
}
