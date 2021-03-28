#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

typedef struct{
	SDL_Surface * ecran ;
	SDL_Surface * Back ;
	SDL_Surface * PlayButton ;
	 SDL_Surface * SettingsButton ;
	  SDL_Surface * QuitButton ;
	   SDL_Surface * Background;
	   SDL_Surface * PlayButtonClicked;
	   SDL_Surface * SettingsButtonClicked;
	   SDL_Surface * QuitButtonClicked;
	   SDL_Surface * MuteButton;
	   SDL_Surface * UnmuteButton;
		SDL_Surface * SettingsBackground ;
		SDL_Surface * Vup;
	 	SDL_Surface * Vdown ;
	 	 SDL_Surface * BTM ;
	  	 SDL_Surface * BTMClicked;
		SDL_Surface * VupClicked;
	 	SDL_Surface * VdownClicked ;
	 	SDL_Surface * Volumebar0 ;
	 	SDL_Surface * Volumebar1 ;
	 	SDL_Surface * Volumebar2 ;
	 	SDL_Surface * Volumebar3 ;
	 	SDL_Surface * Volumebar4 ;
	 	
	 	SDL_Surface *text ;
	 	
	 	
	 
	SDL_Rect posPlayButton ;
	 SDL_Rect posSettingsButton;
	 SDL_Rect posQuitButton;
	 SDL_Rect posBackground;
	 SDL_Rect posPlayButtonClicked;
	 SDL_Rect posSettingsButtonClicked;
	 SDL_Rect posQuitButtonClicked;
	 SDL_Rect posEcran;
	 SDL_Rect posMute;
	 	 SDL_Rect posBackgroundSettings;
	 SDL_Rect posBTM;
	 SDL_Rect posVup;
	 SDL_Rect posVdown;
	 SDL_Rect posVolumebar1;
	 SDL_Rect postext;
	
	
	
   		
	 
	 SDL_Surface * tab[115];
	 
}Menu;


void initback(SDL_Surface * tab[]);

void initialiser(Menu* M, int vol);
void affichage (Menu  M , SDL_Surface *ecran);
void affichageclicked( int a , Menu M ,SDL_Surface *ecarn);
void affichagebackground(Menu M,SDL_Surface *ecran);
void affichageSettings(Menu M,SDL_Surface *ecran,int vol);
void affichageSettingsCLicked(int t , Menu M ,SDL_Surface *ecran);
void volume(int vol , Menu M , SDL_Surface *ecran );
//void free(Menu M);


#endif /* !FUNCTIONS_H_ */





