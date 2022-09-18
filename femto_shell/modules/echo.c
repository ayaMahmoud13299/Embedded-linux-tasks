#include "echo.h"


void echo_func(void)
	{
	char input[MAX_INPUT_SIZE];
	while(1)
	{
		SHELL_INIT(); fgets(input, sizeof(input), stdin);
		if (strcmp(input, "exist\n") == 0)
		{
			SHELL_INIT();puts("good bye");
			break;
		}
		SHELL_INIT(); puts(input);

	}

	}
