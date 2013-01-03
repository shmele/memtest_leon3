#include <stdio.h>

main()
{

	unsigned char *buf;
	int i;
	int bufsize = 10;

	buf = malloc(bufsize);

	for (i = 0; i < bufsize; i++)
	{

		buf[i] = 0xFF;

		printf("%d\t%X\n", i, buf[i]);

	}

	printf("Writed.\n");

	buf[4] = 0x11;

	for (i = 0; i < bufsize; i++)
	{

		if (buf[i] == 0xFF)
			printf("Byte %d is - OK.\n", i);
		else
			printf("Byte %d is - BAD.\n", i);

	}

}
