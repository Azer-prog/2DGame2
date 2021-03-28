#include "ES.h"
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>


void initialiserES(Personnages * P,Hero * hero){
	SDL_WM_SetCaption("AzerSebei", NULL); 
	P->wolfleft=IMG_Load("LEFT.png");
	P->wolfright=IMG_Load("RIGHT.png");
	P->background=IMG_Load("back.png");
	P->posback.x=0;
	P->posback.y=0;
	P->box.w=146;
	hero->box.x=200;
	hero->box.y=480;

	//P->sprite.x=0;
	//P->sprite.y=0;
	//P->sprite.w=146;
	//P->sprite.h=74;
	




}

void affichageES(Personnages P , SDL_Surface *ecran,SDL_Rect poswolf,int D,SDL_Rect sprite,int i ){

	
        sprite.x=146*i;
	
	sprite.y=0;
	sprite.w=146;
	sprite.h=74;
	SDL_BlitSurface(P.background,NULL,ecran,&P.posback);
	if (D==1){SDL_BlitSurface(P.wolfleft,&sprite,ecran,&poswolf);}
	if (D==2){SDL_BlitSurface(P.wolfright,&sprite,ecran,&poswolf);}
	SDL_Flip(ecran);
	SDL_Delay(150);
	
	
	i++;
	
	
	
	
	if(i==4){
	i=0;
	}
	

}
/*void mouvement(SDL_Rect poswolf){
	while(poswolf.x>0){
			
			poswolf.x=+10;
			}
		
	
	
	
	



}*/

int collision (Hero hero, Personnages P)
{
	if((hero.box.x >= P.box.x + P.box.w)  
	|| (hero.box.x + P.box.w <= P.box.x)){
          
  
			printf("1");}
	printf("0");
 
}

