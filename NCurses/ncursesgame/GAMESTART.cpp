#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <term.h>
#include <string.h>
int main()
{ 
std::string home = getenv("HOME");
std::string gamefiles = home + "/ncursesgame/files";
chdir(gamefiles.c_str());
system( "gnome-terminal -e ./buildinggame" );
}
