//Modify this file to change what commands output to your statusbar, and recompile using the make command.

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"CPU:", "cpustatus",							3,		17},
	{"MEM:", "memstatus",							10,		16},
	{"NET:", "net_display", 						3,		15},
	{"SSD:", "disk", 							900,		14},
	{"", 	 "pacman-updates", 						900,		11},
	{"",	 "weather-display",						3600,		13},
	{"",	 "sound-display",						3600,		10},
	{"", 	 "date-display",						10,		12},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
