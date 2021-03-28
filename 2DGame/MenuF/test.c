while(BTM=0){
		            affichageSettings(M,ecran);
				if( SDL_PollEvent(&event))
      					  {switch(event.type)
      						  
			    case SDL_QUIT:
			    	continuer=0;
			    break;
			    
			    

			    case SDL_MOUSEBUTTONDOWN:
					if (event.button.button == SDL_BUTTON_LEFT)
					{Mix_PlayChannel(2,click,0);}
					SDL_GetMouseState(&x,&y);
					 				  if((event.button.x>=370)&&(event.button.x<=600)&&(event.button.y>=200)&&(event.button.y<=300))
					    {t=1;
					    affichageSettingsCLicked(t , M ,ecran);
					    Mix_PlayChannel(2,click,0);
					    
					    }
					  if((event.button.x>=370)&&(event.button.x<=600)&&(event.button.y>=300)&&(event.button.y<=360))
					    {t=2;
					    affichageSettingsCLicked(t , M ,ecran);
					    Mix_PlayChannel(2,click,0);
					    
				  
				       
					    }
					    if((event.button.x>=450)&&(event.button.x<=470)&&(event.button.y>=450)&&(event.button.y<=470))
					    {t=3;
					    affichageSettingsCLicked(t , M ,ecran);
					    Mix_PlayChannel(2,click,0);
					    
					    userposition=1;
					    BTM=1;
					    
					    affichageSettings(M,ecran);


					    }
				       
				       
					    
					    }
					    }
