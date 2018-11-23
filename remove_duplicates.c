#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char ip_string[20] = "kalyani";
	int dictionary[26];
	char op_string[20];
	int i, j = 0;
	int len = strlen(ip_string);
	
	for(i = 0; i < 26; i++)
	{
		dictionary[i] = 0;
	}
	
	while(ip_string[j] != '\0')
	{
		dictionary[ip_string[j] - 'a']++;
		j++;
	}
	
	j = 0;
	
	for(i = 0; i < len; i++)
	{
		if(dictionary[ip_string[i] - 'a'])
		{
			op_string[j] = ip_string[i];
			j++;
			dictionary[ip_string[i] - 'a'] = 0;
		}
	}
	
	printf("\n%s",op_string);
	
	return 0;
}