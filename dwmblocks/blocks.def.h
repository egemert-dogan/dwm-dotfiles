//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"  ", "mpstat 1 1 | awk 'END{print 100-$NF\"%\"}'", 1,       0},

	{" ", "amixer -D pulse get Master | awk -F 'Left:|[][]' 'BEGIN {RS=\"\"}{ print $3 }'", 1, 0},

	{" ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",		1,		0},

	{" ", "date '+%d %B %A %H:%M'",					1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
