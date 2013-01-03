#include <stdio.h>

main()
{

	unsigned char *buf;
	int i;
	int bufsize = 100;

	srand(time(NULL));

	buf = malloc(bufsize);

	for (i = 0; i < bufsize; i++)
	{

		if (rand() % 100 < 95)
			buf[i] = 0xFF;
		else
			buf[i] = rand() % 0xFE;

		//printf("%d\t%X\n", i, buf[i]);

	}

	printf("Writed.\n");

	for (i = 0; i < bufsize; i++)
	{

		if (buf[i] != 0xFF)
			printf("Byte %d is - BAD.\n", i);
		else
			//printf("Byte %d is - OK.\n", i);
			printf("");


	}

}
