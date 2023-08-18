char buffer[1024];
char dictionary[500][500];
int  i;
int  a;
int  b;

i = 0;
a = 0;
while (buffer[i] != '\0')
{
	b = 0;
	while(buffer[i] != '\n')
	{
		dictionary[a][b] = buffer[i];
		i++;
		b++;
	}
	a++;
	i++;
}
