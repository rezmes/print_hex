# include <unistd.h>

void dectohex(int result);
void dectohex(int result)
{
		char *hex = "0123456789abcdef";
		
		if (result  >= 16)
				dectohex(result / 16);
		result = result % 16;
		write (1, &hex[result], 1);
}

int	main(int argc, char **argv)
{
		if (argc == 2)
		{
				int i = 0;
				int result;
				
				result = 0;
				while (argv[1][i] != '\0')
				{
						result = (result * 10) + argv[1][i] - '0';
						i++;
				}
				dectohex(result);
		}
		write(1, "\n", 1);
		return (0);
}
