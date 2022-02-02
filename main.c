
#include <stdio.h>
#include <stdlib.h>

#include "cli_colors.h"

//Normal

#define COLOR_CYAN "\033[36m"
#define COLOR_GREEN "\033[32m"
#define COLOR_RED "\033[31m"
#define COLOR_MAGENTA "\033[35m"
#define COLOR_ORANGE "\033[33m"
#define COLOR_WHITE "\033[37m"
#define COLOR_YELLOW "\033[0;33m"
#define COLOR_BLUE "\033[0;34m"
#define COLOR_PURPLE "\033[0;35m"


//Bold

#define BCOLOR_CYAN "\033[1;36m"
#define BCOLOR_GREEN "\033[1;32m"
#define BCOLOR_RED "\033[1;31m"
#define BCOLOR_MAGENTA "\033[1;35m"
#define BCOLOR_ORANGE "\033[1;33m"
#define BCOLOR_WHITE "\033[1;37m"
#define BCOLOR_YELLOW "\033[1;0;33m"
#define BCOLOR_BLUE "\033[1;0;34m"
#define BCOLOR_PURPLE "\033[1;0;35m"




int main() {
    FILE * ascii = fopen("logo.ascii", "r");
    char ch;
    printf("%s\n", BCOLOR_BLUE);
    do
    {
        ch = fgetc(ascii);
        putchar(ch);

    } while(ch != EOF);

    fclose(ascii);

    printf("%s%s", BCOLOR_BLUE, "\n\n\nGooseMod Repository: \033[1;35m https://github.com/GooseMod/GooseMod/ ");
    printf("%s%s", BCOLOR_BLUE, "\nGooseMod Website: \033[1;35m https://goosemod.com/ ");
    printf("%s%s", BCOLOR_PURPLE, "\n\nUnofficial script made by \033[1;35m https://github.com/UsboKirishima/ ");

    printf("\n\n%s%s", BCOLOR_ORANGE, "Please select your discord client version:");
    printf("\n%s%s", BCOLOR_CYAN, "   1 > Stable");
    printf("\n%s%s", BCOLOR_CYAN, "   2 > PTB");
    printf("\n%s%s", BCOLOR_CYAN, "   3 > Canary");
    printf("\n%s%s%s", BCOLOR_CYAN, "   4 > Development\n\n", BCOLOR_WHITE);

    char *path_client;
    int client;
    scanf("%d", &client);

    if(client == 1) {
      path_client = "~/.config/discord/settings.json";
    } else if(client == 2) {
      path_client = "~/.config/discordptb/settings.json";
    } else if(client == 3) {
      path_client = "~/.config/discordcanary/settings.json";
    } else if(client == 4) {
      path_client = "~/.config/discorddevelopment/settings.json";
    }

    //Test path
    path_client = "~/Documenti/Gtest/settings.json";

    printf("%s\n", path_client);


    remove(path_client);

    FILE * settings = fopen("settings.json", "r");


    FILE * open_path;
    open_path = fopen(path_client, "a");
    char rs;
    printf("%s\n", BCOLOR_BLUE);
    do
    {
        ch = fgetc(settings);
        fprintf(open_path, "%s", rs);

    } while(rs != EOF);


    fclose(open_path);

    fclose(settings);
}
