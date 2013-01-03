#include <stdlib.h>
#include <stdio.h>

main()
{

	unsigned char *buf;
	int i;
	int bufsize = 100;

	srand(time(NULL));

	try
	{

		buf = malloc(bufsize);

	}
	catch(...)
	{

		printf("Error memory allocation!");

	}

	for (i = 0; i < bufsize; i++)
	{


		try
		{

			if (rand() % 100 < 95)
				buf[i] = 0xFF;
			else
				buf[i] = rand() % 0xFE;

		}
		catch(...)
		{

			printf("Error write to %d byte!", i);

		}

	}

	printf("Writed.\n");

	for (i = 0; i < bufsize; i++)
	{

		if (buf[i] != 0xFF)
			printf("Byte %d is - %X BAD.\n", i, buf[i]);


	}

}
