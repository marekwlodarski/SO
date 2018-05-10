#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 512

int main(int argc, char* argv[])
{
	/*char buf[MAX];
	int desc_zr, desc_cel, lbajt;

	if(argc<3)
	{
		fprintf(stderr, "Zbyt mało argumentów! Podaj: %s <plik_zrodłowy> <plik_docelowy>", argv[0]);
		exit(1);
	}

	desc_zr = open(argv[1], O_RDONLY);
	if(desc_zr == -1)
	{
	perror("Blad otwarcia pliku zrodloego");
		exit(1);
	}
	
	desc_cel = creat(argv[2], 0640);
	if(desc_cel == -1)
	{
		perror("Blad utworzenia pliku docelowego");
		exit(1);
	}
	
	while((lbajt=read(desc_zr, buf, MAX)) > 0)
	{
		if(write(desc_cel, buf, lbajt) == -1)
		{
			perror("Blad zapisu");
			exit(1);
	}
	}

	if(lbajt == -1)
	{
		perror("Blad odczytu");
		exit(1);
	}

	if(close(desc_zr) == -1 || close(desc_cel) == -1)
	{
		perror("Blad zamkniecia pliku");
		exit(1);
	}*/

	/*int desc = open(argv[1], O_RDONLY), x=1, y=0;
	char buf[x];

	while(read(desc, buf, x) != 0)
	{
		y++;
	}

	fprintf(stdout, "%d", y);*/

	
	
	/*int desc = creat(argv[1], 0640);
	char a[] = "Lorem ipsum";
	char x[1];

	for(int i=0; a[i] != '\0'; i++)
	{
	x[0] = a[i];
	write(desc, x, 1);
	}*/

	/*int desc1 = open(argv[1], O_RDONLY), desc2 = open(argv[2], O_RDWR);
	int x = 1;
	char buf[x];

	while(read(desc2, buf, x) != 0)
	{
		
	}
	
	while(read(desc1, buf, x) != 0)
	{
		write(desc2, buf, x);
	}*/
	
	int j = argv[1] - '0';
	for(int i=0; i<j; i++)
	{
		char x[6] = "Plik";
		x[6] = i;
		creat(x, 0640);
		int y = open(x, O_WRONLY);
		write(y, x, 6);
	}

	return 0;
}
