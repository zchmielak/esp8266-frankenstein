
#include <stdlib.h>
#include "console.h"
#include "user_interface.h"

#if 1


static int do_passthrough (int argc, const char* const* argv)
{
	return 0;
}

CONSOLE_CMD(passthrough, 1, 1,
	    do_passthrough, NULL, NULL,
	    "disable console, setup direct link through serial port"
	    HELPSTR_NEWLINE "disabled by pressing ESC some times"
);

#endif
