#include "head.h"
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>



void initialiser(Menu* M,int vol)
{	
	
	
 	  
	 SDL_WM_SetCaption("Menu", NULL); 
	 if(Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1) 
	   {
	      printf("%s", Mix_GetError());
	   } 
	  Mix_Music *musique; 
	  Mix_Chunk *click;
	  
	   musique = Mix_LoadMUS("Music.mp3"); 
	 
	   Mix_PlayMusic(musique, 1);
	   
	   


	   
	  M->PlayButton=IMG_Load("ButtonPlay.png");
	  M->SettingsButton=IMG_Load("ButtonSettings.png");
	  M->QuitButton=IMG_Load("ButtonQuit.png");
	  M->PlayButtonClicked=IMG_Load("ButtonPlayClicked.png");
	  M->SettingsButtonClicked=IMG_Load("ButtonSettingsClicked.png");
	  M->QuitButtonClicked=IMG_Load("ButtonQuitClicked.png");
	  M->Background=IMG_Load("MenuBackground.png");
	  M->Back=IMG_Load("0003.png") ;	
	  M->posPlayButton.x=370;
	  M->posPlayButton.y=200;
	  M->posSettingsButton.x=370 ;
	  M->posSettingsButton.y=300;
	  M->posQuitButton.x=370;
	  M->posQuitButton.y=400;
	  M->posBackground.x=250;
	  M->posBackground.y=120;
	  M->posPlayButtonClicked.x=370;
	  M->posPlayButtonClicked.y=200;
	  M->posSettingsButtonClicked.x=370;
	  M->posSettingsButtonClicked.y=300;
	  M->posQuitButtonClicked.x=370;
	  M->posQuitButtonClicked.y=400;
	  M->posMute.x=0;
	  M->posMute.y=0;
	  M->posEcran.x=0;
	  M->posEcran.y=0;
	 	 M->SettingsBackground=IMG_Load("SettingsMenu.png") ;
		M->Vup=IMG_Load("Vup.png");
	 	M->Vdown=IMG_Load("Vdown.png");
	 	M->BTM=IMG_Load("BTM.png");
	  	M->BTMClicked=IMG_Load("BTMClicked.png");
		M->VupClicked=IMG_Load("VupClicked.png");
		M->VdownClicked=IMG_Load("VdownClicked.png");
		M->Volumebar0=IMG_Load("V0.png");
	 	M->Volumebar1=IMG_Load("V1.png");
	 	M->Volumebar2=IMG_Load("V2.png");
	 	M->Volumebar3=IMG_Load("V3.png");
	 	M->Volumebar4=IMG_Load("V4.png");
	 	
	 M->posBackgroundSettings.x=250;
	 M->posBackgroundSettings.y=120;
	 M->posBTM.x=450;
	 M->posBTM.y=600;
	 M->posVup.x=640;
	 M->posVup.y=300;
	 M->posVdown.x=310;
	 M->posVdown.y=300;
	 M->posVolumebar1.x=360;
	 M->posVolumebar1.y=300;
	 M->postext.x=320;
	 M->postext.y=0;

}




void affichage (Menu  M , SDL_Surface *ecran)
{		


		
		TTF_Font *font=NULL;
		SDL_Color blue = {3,34,76};
		font=TTF_OpenFont("SnowBlue.ttf",80);
		M.text=TTF_RenderText_Blended(font,"SNOWMAN",blue);

		SDL_BlitSurface(M.Background, NULL, ecran, &M.posBackground);
	        SDL_BlitSurface(M.PlayButton, NULL, ecran, &M.posPlayButton);
   		SDL_BlitSurface(M.SettingsButton, NULL, ecran, &M.posSettingsButton);
    		SDL_BlitSurface(M.QuitButton, NULL, ecran, &M.posQuitButton);
    		
    		SDL_BlitSurface(M.text,NULL,ecran,&M.postext);
    		SDL_Flip(ecran);
    		




}

void affichagebackground(Menu M,SDL_Surface *ecran)

{		
		
	   SDL_BlitSurface(M.Back, NULL, ecran, &M.posEcran); 
	
   
	  }
	  
	
void affichageclicked( int a , Menu M ,SDL_Surface *ecran)
{
		if (a==1){
		
		SDL_BlitSurface(M.Background, NULL, ecran, &M.posBackground);
	        SDL_BlitSurface(M.PlayButtonClicked, NULL, ecran, &M.posPlayButton);
   		SDL_BlitSurface(M.SettingsButton, NULL, ecran, &M.posSettingsButton);
    		SDL_BlitSurface(M.QuitButton, NULL, ecran, &M.posQuitButton);
   
    		
    		}
    		else if (a==2){
    		SDL_BlitSurface(M.Background, NULL, ecran, &M.posBackground);
	        SDL_BlitSurface(M.PlayButton, NULL, ecran, &M.posPlayButton);
   		SDL_BlitSurface(M.SettingsButtonClicked, NULL, ecran, &M.posSettingsButton);
    		SDL_BlitSurface(M.QuitButton, NULL, ecran, &M.posQuitButton);
    	
    		}
    		else if (a==3){
    		SDL_BlitSurface(M.Background, NULL, ecran, &M.posBackground);
	        SDL_BlitSurface(M.PlayButton, NULL, ecran, &M.posPlayButton);
   		SDL_BlitSurface(M.SettingsButton, NULL, ecran, &M.posSettingsButton);
    		SDL_BlitSurface(M.QuitButtonClicked, NULL, ecran, &M.posQuitButton);
    	
    		
    		}
    		else if (a==4){
    		SDL_BlitSurface(M.Background, NULL, ecran, &M.posBackground);
    		SDL_BlitSurface(M.MuteButton, NULL, ecran, &M.posMute);
	        SDL_BlitSurface(M.PlayButton, NULL, ecran, &M.posPlayButton);
   		SDL_BlitSurface(M.SettingsButton, NULL, ecran, &M.posSettingsButton);
    		SDL_BlitSurface(M.QuitButton, NULL, ecran, &M.posQuitButton);
    
    		
    		
    		}
    		

    		SDL_Flip(ecran);


}

void affichageSettings(Menu M,SDL_Surface *ecran,int vol)
{		

	   	SDL_BlitSurface(M.SettingsBackground, NULL, ecran, &M.posBackground);
		SDL_BlitSurface(M.Vup, NULL, ecran, &M.posVup);
	        SDL_BlitSurface(M.Vdown, NULL, ecran, &M.posVdown);
   		SDL_BlitSurface(M.BTM, NULL, ecran, &M.posBTM);
   		
   		
   		if (vol>=128){
				SDL_BlitSurface(M.Volumebar4, NULL, ecran, &M.posVolumebar1);
			}
			if (vol==96){
				SDL_BlitSurface(M.Volumebar3, NULL, ecran, &M.posVolumebar1);
			}
			if (vol==64){
				SDL_BlitSurface(M.Volumebar2, NULL, ecran, &M.posVolumebar1);
			}
			if (vol==32){
				SDL_BlitSurface(M.Volumebar1, NULL, ecran, &M.posVolumebar1);
			}
			if (vol==0){
				SDL_BlitSurface(M.Volumebar0, NULL, ecran, &M.posVolumebar1);
			}
    		
    		SDL_Flip(ecran);
    		




}
void affichageSettingsCLicked(int t , Menu M ,SDL_Surface *ecran)
{
	if (t==1)
	{
		SDL_BlitSurface(M.SettingsBackground, NULL, ecran, &M.posBackground);
		SDL_BlitSurface(M.VupClicked, NULL, ecran, &M.posVup);
	        SDL_BlitSurface(M.Vdown, NULL, ecran, &M.posVdown);
   		SDL_BlitSurface(M.BTM, NULL, ecran, &M.posBTM);
    		
    		SDL_Flip(ecran);
	
	
	}
	else if (t==2)
	{
		SDL_BlitSurface(M.SettingsBackground, NULL, ecran, &M.posBackground);
		SDL_BlitSurface(M.Vup, NULL, ecran, &M.posVup);
	        SDL_BlitSurface(M.VdownClicked, NULL, ecran, &M.posVdown);
   		SDL_BlitSurface(M.BTM, NULL, ecran, &M.posBTM);
    		
    		SDL_Flip(ecran);
	}
	else if (t==3)
	{
	
		SDL_BlitSurface(M.SettingsBackground, NULL, ecran, &M.posBackground);
		SDL_BlitSurface(M.Vup, NULL, ecran, &M.posVup);
	        SDL_BlitSurface(M.Vdown, NULL, ecran, &M.posVdown);
   		SDL_BlitSurface(M.BTMClicked, NULL, ecran, &M.posBTM);
    		
    		SDL_Flip(ecran);
	}


}
void volume(int vol , Menu M , SDL_Surface *ecran )
{	
	
			if (vol==128){
				SDL_BlitSurface(M.Volumebar3, NULL, ecran, &M.posVolumebar1);
			}
			if (vol==96){
				SDL_BlitSurface(M.Volumebar2, NULL, ecran, &M.posVolumebar1);
			}
			if (vol==64){
				SDL_BlitSurface(M.Volumebar1, NULL, ecran, &M.posVolumebar1);
			}
			



}

