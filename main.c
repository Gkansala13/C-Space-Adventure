/**
 * C-Space-Adventure
 * SE201
 * Grayson Kansala
 * Going on a magical space adventure using C.
 **/
# include <stdio.h>

int main(int argc, char** argv){
    printf("Welcome to the Solar System! \n");
    printf("There are 9 planets to explore. \n");
    printf("What is your name? \n");
    char name[32];
    fgets(name, 32, stdin);
    printf("Nice to meet you, %sMy name is Eliza, I'm an old friend of Alexa.\n", name);
    printf("Shall I randomly choose a planet for you to visit? (Y or N)\n");
    char randomPlanet[2];
    fgets(randomPlanet, 32, stdin);
    printf("Traveling to pluto... \n");
    printf("Arrived at PLuto, it's very cold here.\n");
}