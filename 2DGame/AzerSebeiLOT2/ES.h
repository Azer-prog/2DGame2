#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <string.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>



typedef struct{
	SDL_Surface * ecran ;
	SDL_Surface * background ;
	SDL_Surface * wolfleft ;
	SDL_Surface * wolfright ;
	
	SDL_Rect poswolf;
	 SDL_Rect posbird;
	 SDL_Rect sprite;
	 SDL_Rect posback;
	 SDL_Rect box;
	 


}Personnages;

typedef struct {

SDL_Rect box ;
}Hero;


void initialiserES(Personnages * P,Hero * hero);
void affichageES(Personnages P , SDL_Surface *ecran,SDL_Rect poswolf,int D,SDL_Rect sprite,int i );
//void mouvement(SDL_Rect poswolf);
int collision (Hero hero, Personnages P);




