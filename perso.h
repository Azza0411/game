#ifndef fonctions_H
#define fonctions_H
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#define SCREEN_W 720
#define SCREEN_H 538

typedef struct
{
SDL_Surface *image;
SDL_Rect pos;

DOUBLEBUF vitesse;
DOUBLEBUF acc;
int direction;
int mvt;
int solid_state;

Mix_Chunk *son_mvt;
Mix_Chunk *son_saut;
Mix_Chunk *son_pas;


}Perso;

void initPerso(Perso *p);
void afficherPerso(Perso p, SDL_Surface * screen);
void deplacerPerso (Perso *p,int dt);
void animerPerso (Perso* p);
void saut(Perso* p);
void liberer(Perso P);
void acceleration(Perso P, int dt);


#endif
