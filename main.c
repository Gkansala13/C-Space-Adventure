/**
 * C-Space-Adventure
 * SE201
 * Grayson Kansala
 * Going on a magical space adventure using C.
 **/
# include <stdio.h>
# include <string.h>

int main(int argc, char** argv){
    printf("Welcome to the Solar System! \n");
    printf("There are 9 planets to explore. \n");
    printf("What is your name? \n");
    char name[32];
    fgets(name, 32, stdin);
    name[strcspn(name,"\n")]=0;
    printf("Nice to meet you, %s. My name is Eliza, I'm an old friend of Alexa.\n", name);
    printf("Shall I randomly choose a planet for you to visit? (Y or N)\n");
    char chooseRandomPlanet[2];
    fgets(chooseRandomPlanet, 32, stdin);
    chooseRandomPlanet[strcspn(chooseRandomPlanet, "\n")]=0;
    printf("Choice is %s\n", chooseRandomPlanet);
    printf("Traveling to pluto... \n");
    printf("Arrived at PLuto, it's very cold here.\n");
}