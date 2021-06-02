/**
 * C-Space-Adventure
 * SE201
 * Grayson Kansala
 * Going on a magical space adventure using C.
 **/
# include <stdio.h>
# include <string.h>
# include "main.h"

int main(int argc, char** argv){
    printWelcome();
    printGreeting(responseTo("What's your name?"));
    printf("Shall I randomly choose a planet for you to visit? (Y or N)\n");
    char chooseRandomPlanet[2];
    fgets(chooseRandomPlanet, 32, stdin);
    chooseRandomPlanet[strcspn(chooseRandomPlanet, "\n")]=0;
    printf("Choice is %s\n", chooseRandomPlanet);
    printf("Traveling to pluto... \n");
    printf("Arrived at PLuto, it's very cold here.\n");
}

void printWelcome() {
    printf("Welcome to the Solar System!\n");
    printf("There are 9 planets to explore.\n");
}

char* responseTo(char *astring) {
    static char response[10];
    printf("%s \n", astring);
    fgets(response, sizeof(response), stdin);
    response[strcspn(response, "\n")] =0;
    return response;
}

void printGreeting(char *astring) {
    printf("Nice to meet you, %s. My name is Eliza, I'm an old friend of Alexa.\n", astring);
    
}
