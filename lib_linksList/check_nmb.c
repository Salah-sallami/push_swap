
int check_nmb(char *str)
{
	int i = 0;
	int vld = 1;
	int cont_nmb = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9' && vld == 1)
		{
			cont_nmb++;
			vld = 0;
		}
		if (str[i] == ' ')
			vld = 1;
		i++;
	}
	return cont_nmb;
}