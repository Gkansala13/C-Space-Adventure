#define SSTR_LEN 128
#define STR_LEN 1024
#define LSTR_LEN 4096

typedef struct s_planet{
    char* planet_name;
    char* planet_desc;
} t_planet;

char *intro_sequence(void);
void select_planet(char *);
int random_planet(void);
t_planet *get_planet_info(int);
int valid_decision(char);
int lookup_planet(char*);