#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <string.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "head.h"

int main()
{
 
  
 Menu M ;
 int continuer = 1 ;
 int a ;
 int x ,y ;
 int userposition = 1;
 int t=0;
 int n=0;
 int p;
 int vol=64;

 SDL_Event event;
 SDL_Init(SDL_INIT_VIDEO); 
 
SDL_Surface *ecran;
SDL_Surface * tab;



TTF_Init();




ecran = SDL_SetVideoMode(1008, 800, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);
initialiser(&M,vol);


//initback(M.tab);

	   	
	   	
	

while(continuer){



volume(vol,M ,ecran);
affichagebackground(M,ecran);
affichage (M , ecran);





Mix_Chunk *click;
click= Mix_LoadWAV("click.wav"); 

int BTM=0;
	
	if( SDL_PollEvent(&event))
        {switch(event.type)
        {
            case SDL_QUIT:
            	continuer=0;
            break;
            
            
		
            case SDL_MOUSEBUTTONDOWN:
			if (event.button.button == SDL_BUTTON_LEFT)
			{Mix_PlayChannel(2,click,0);}
			SDL_GetMouseState(&x,&y);
			 if((event.button.x>=370)&&(event.button.x<=600)&&(event.button.y>=200)&&(event.button.y<=300))
		            {a=1;
		            affichageclicked( a , M ,ecran);
		            Mix_PlayChannel(2,click,0);
		            
		            
		            }
		          if((event.button.x>=370)&&(event.button.x<=600)&&(event.button.y>=300)&&(event.button.y<=360))
		            {a=2;
		            affichageclicked( a , M ,ecran);
		            Mix_PlayChannel(2,click,0);
		            while(BTM==0){
		            affichageSettings(M,ecran,vol);
		            if( SDL_PollEvent(&event))
       			 {switch(event.type)
       				 {
            					case SDL_QUIT:
            						continuer=0;
           						 break;
           					case SDL_MOUSEBUTTONDOWN:
           					if (event.button.button == SDL_BUTTON_LEFT)
           					{Mix_PlayChannel(2,click,0);}
           					SDL_GetMouseState(&x,&y);
						 if((event.button.x>=450)&&(event.button.x<=540)&&(event.button.y>=600)&&(event.button.y<=700))
		          					  {t=3;
		          						  affichageSettingsCLicked(t , M ,ecran);
		           						 Mix_PlayChannel(2,click,0);
		           						 
		           						 BTM=1;
		            
		           								 }
		           								 
		           								 
		           								 
		           								 
		           			 else if((event.button.x>=320)&&(event.button.x<=330)&&(event.button.y>=310)&&(event.button.y<=330))
		          					  {t=2;
		          						  affichageSettingsCLicked(t , M ,ecran);
		           						 Mix_PlayChannel(2,click,0);
		           						vol=vol-32;
		           						
		           						 
		            
		           								 }
		           		        else if((event.button.x>=640)&&(event.button.x<=660)&&(event.button.y>=300)&&(event.button.y<=320))
		          					  {t=1;
		          						  affichageSettingsCLicked(t , M ,ecran);
		           						 Mix_PlayChannel(2,click,0);
		           						 vol=vol+32;
		           						 
		            
		           								 }
           					case SDL_KEYDOWN:if (event.key.keysym.sym==SDLK_ESCAPE )
			{
				continuer=0;
			}
			if(event.key.keysym.sym==SDLK_m){ 
                    if(Mix_PausedMusic() == 1)
                    {
                        Mix_ResumeMusic(); 
                    }
                    else
                    {
                        Mix_PauseMusic(); 
                    }
                    
                    }
                 
			
			if (event.key.keysym.sym==SDLK_RIGHT){
			
			vol=vol+32;
			Mix_VolumeMusic(vol);
			volume(vol ,  M , ecran );
			
			
			}
			if (event.key.keysym.sym==SDLK_LEFT){
			
			vol=vol-32;
			Mix_VolumeMusic(vol);
			volume(vol ,  M , ecran );
			
			
			}
			break ;
           					
           					
           					
           					}
           					}
		            
				}
		            }
		            
		            if((event.button.x>=370)&&(event.button.x<=600)&&(event.button.y>=400)&&(event.button.y<=500))
		            {a=3;
		            affichageclicked( a , M ,ecran);
		            Mix_PlayChannel(2,click,0);
		            
		            continuer=0;
		            }
		            if((event.button.x>=0)&&(event.button.x<=90)&&(event.button.y>=0)&&(event.button.y<=90))
		            {a=4;
		            affichageclicked( a , M ,ecran);
		            
		            
		            }

			
			break;
			
			case SDL_KEYDOWN:
			if (event.key.keysym.sym==SDLK_s )
			{ 
						            while(BTM==0){
		            affichageSettings(M,ecran,vol);
		            if( SDL_PollEvent(&event))
       			 {switch(event.type)
       				 {
            					case SDL_QUIT:
            						continuer=0;
           						 break;
           					case SDL_MOUSEBUTTONDOWN:
           					if (event.button.button == SDL_BUTTON_LEFT)
           					{Mix_PlayChannel(2,click,0);}
           					SDL_GetMouseState(&x,&y);
						 if((event.button.x>=450)&&(event.button.x<=540)&&(event.button.y>=600)&&(event.button.y<=700))
		          					  {t=3;
		          						  affichageSettingsCLicked(t , M ,ecran);
		           						 Mix_PlayChannel(2,click,0);
		           						 BTM=1;
		            
		           								 }
		           								 
		           								 
		           								 
		           								 
		           			 else if((event.button.x>=310)&&(event.button.x<=330)&&(event.button.y>=300)&&(event.button.y<=320))
		          					  {t=2;
		          						  affichageSettingsCLicked(t , M ,ecran);
		           						 Mix_PlayChannel(2,click,0);
		           						
		           						
		           						 
		            
		           								 }
		           		        else if((event.button.x>=640)&&(event.button.x<=660)&&(event.button.y>=300)&&(event.button.y<=320))
		          					  {t=1;
		          						  affichageSettingsCLicked(t , M ,ecran);
		           						 Mix_PlayChannel(2,click,0);
		           						 
		            
		           								 }
           					}
           					}
		            
				}	
			}
			if (event.key.keysym.sym==SDLK_ESCAPE )
			{
				continuer=0;
			}
			if(event.key.keysym.sym==SDLK_m){ 
                    if(Mix_PausedMusic() == 1)
                    {
                        Mix_ResumeMusic(); 
                    }
                    else
                    {
                        Mix_PauseMusic(); 
                    }
                    
                    }
                 
			
			if (event.key.keysym.sym==SDLK_RIGHT){
			
			vol=vol+32;
			Mix_VolumeMusic(vol);
			volume(vol ,  M , ecran );
			
			}
			if (event.key.keysym.sym==SDLK_LEFT){
			
			vol=vol-32;
			Mix_VolumeMusic(vol);
			volume(vol ,  M , ecran );
			
			
			}
			break ;
			
			
			
            }

	   }
	   
}

            	//SDL_FreeSurface(M.ecran);
		SDL_FreeSurface(M.Back);
    		SDL_FreeSurface(M.MuteButton);
    		SDL_FreeSurface(M.PlayButton);
    		SDL_FreeSurface(M.SettingsButton);
    		SDL_FreeSurface(M.QuitButton);
    		SDL_FreeSurface(M.SettingsBackground);
    		SDL_FreeSurface(M.Vup);
    		SDL_FreeSurface(M.Vdown);
    		SDL_FreeSurface(M.BTM);
    		SDL_FreeSurface(M.Volumebar0);
    		SDL_FreeSurface(M.Volumebar1);
    		SDL_FreeSurface(M.Volumebar2);
    		SDL_FreeSurface(M.Volumebar3);
    		SDL_FreeSurface(M.Volumebar4);
    		    
    		    
   		 Mix_CloseAudio();
    		
   		 TTF_Quit();
   		 SDL_Quit(); 
    		
}


