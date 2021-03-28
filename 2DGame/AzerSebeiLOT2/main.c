#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <string.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "ES.h"


int main() {
SDL_Init(SDL_INIT_VIDEO);
SDL_Surface * ecran ;
SDL_Rect sprite;
Hero hero ;
int i=0 ;
SDL_Rect poswolf;
poswolf.x=0;
poswolf.y=480;
Personnages P ;


//Hero hero ;
int g=1 ;
int D=2;
 
ecran = SDL_SetVideoMode(1000, 666, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);
initialiserES(&P,&hero);
while (g){

	if(D==2){
	poswolf.x+=20;
	P.box.x=poswolf.x;
	affichageES(P,ecran,poswolf,D,sprite,i);
	i++;
	if(i==4){i=0;}}
	if (poswolf.x==680){D=1;}
	if(D==1){
	poswolf.x-=20;
	P.box.x=poswolf.x;
	affichageES(P,ecran,poswolf,D,sprite,i);
	i++;
	if(i==4){i=0;}}
	if(poswolf.x==0){D=2;}
	
	
	
	
	}

	
	
	
	collision (hero,P);
	

	SDL_FreeSurface(ecran);








}





