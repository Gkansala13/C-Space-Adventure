# include "header.h"
# include <stdio.h>
# include <string.h>
# include <json-c/json.h>
# define FILE_NAME "planetarySystem.json"

char YesNo;
static char planet[20];
static char response[10];

void printWelcome() {
    printf("Welcome to the Solar System!\n");
    printf("There are 9 planets to explore.\n");
}

void printGreeting() {
    printf("What's your name?\n");
    scanf("%s",response);
    printf("Nice to meet you, %s. My name is Eliza, I'm an old friend of Alexa.\n", response);
    printf("Let's go on an adventure!\n");
}

void randomPlanet() {
    printf("Traveling to pluto... \n");
    printf("Arrived at PLuto, it's very cold here.\n");
}

void userPlanet() {
    printf("Name the planet you would like to visit.\n");
    scanf("%s", planet);
    printf("Traveling to %s...\n", planet);
}

void whichPlanet() {
    printf("Shall I choose a random planet for you to explore? (Y or N)\n");
    scanf("%s", &YesNo);
    if(YesNo == 'Y' | YesNo == 'y') {
        randomPlanet();
    }
    else if (YesNo == 'N' | YesNo == 'n') {
        userPlanet();
    }
    else {
        printf("Sorry, I didn't get that...\n");
        return whichPlanet();
    }   
}

struct planet {
    char *name;
    char *description;
};

void parseJson() {
    FILE *fp;
    char buffer[2048];

    struct json_object *parsed_json;
    struct json_object *name;

    fp = fopen(FILE_NAME, "r");
    fread(buffer, 2048, 1, fp);
    fclose(fp);

    parsed_json = json_tokener_parse(buffer);

    json_object_object_get_ex(parsed_json, "name", &name);

    printf("Thank you for visting my %s\n",json_object_get_string(name)); 
}