#include <stdio.h>
#include <string.h>

int  ft_strcmp(char *s1, char *s2)
{
	int count;
	count = 0;

	while(s1[count] || s2[count] != '\0')
	{
		if(s1[count] != s2[count])
		{
			return ((unsigned char)s1[count] - (unsigned char)s2[count]);
		}
		count++;
	}
	return(0);
}

int  main(void)
{
	char s0[]="teste";
	char s1[]="teste";
	char s2[]="testE";
	char s3[]="test$";
	char s4[]="test1";
	char s5[]={-10, 'e', 's', 't', 'e'};
	char s6[]="etset";
	char s7[]="test";
	char s8[]="testee";

	printf("s0:%s s1:%s s2:%s s3:%s s4:%s s5:%s s6:%s s7:%s s8:%s \n\n", s0, s1, s2, s3, s4, s5, s6, s7, s8);
	printf("Cmp Original s0 com s1 = %d \n", strcmp(s1, s0));
	printf("Cmp ft_strcmp s0 com s1 = %d \n\n", ft_strcmp(s1, s0));
	printf("Cmp Original s0 com s2 = %d \n", strcmp(s1, s2));
	printf("Cmp ft_strcmp s0 com s2 = %d \n\n", ft_strcmp(s1, s2));
	printf("Cmp Original s0 com s3 = %d \n", strcmp(s1, s3));
	printf("Cmp ft_strcmp s0 com s3 = %d \n\n", ft_strcmp(s1, s3));
	printf("Cmp Original s0 com s4 = %d \n", strcmp(s1, s4));
	printf("Cmp ft_strcmp s0 com s4 = %d \n\n", ft_strcmp(s1, s4));
	printf("Cmp Original s0 com s5 = %d \n", strcmp(s1, s5));
	printf("Cmp ft_strcmp s0 com s5 = %d \n\n", ft_strcmp(s1, s5));
	printf("Cmp Original s0 com s6 = %d \n", strcmp(s1, s6));
	printf("Cmp ft_strcmp s0 com s6 = %d \n\n", ft_strcmp(s1, s6));
	printf("Cmp Original s0 com s7 = %d \n", strcmp(s1, s7));
	printf("Cmp ft_strcmp s0 com s7 = %d \n\n", ft_strcmp(s1, s7));
	printf("Cmp Original s0 com s8 = %d \n", strcmp(s1, s8));
	printf("Cmp ft_strcmp s0 com s8 = %d \n\n", ft_strcmp(s1, s8));
	return (0);
}