#include <stdio.h>
#include <string.h>

int main(void)
{
	    char s1[60] = "C language is";
	    char s2[60] = "a good programming language.";
        char s3[60];
	    char s[4][50];
	    int length, result, i;

		length = strlen(s1); /*���ڿ� ���� ���*/
		printf("String length : %d \n", length);
		strcpy(s3, s1); /*���ڿ� ����*/
		printf(" s3 : %s \n", s3);
		result = strcmp("park", "kim"); /*���ڿ� ��*/
		printf(" result : %d \n", result);
		result = strcmp(s1, s3);
		printf(" result : %d \n", result);
		result = strcmp(s1, s2);
		printf(" result : %d \n", result); 
		strcat(s3, s2); /*���ڿ� ����*/
		printf("s3 : %s \n", s3);

		for (i = 0; i < 4; i++) {
			printf("please, enter a name >> ");
			scanf("%s" ,s[i]);
		}

		for (i = 0; i < 4; i++) { /*�빮�ڷ� ��ȯ*/
			if (islower(s[i][0]) == 1)
			s[i][0] -= 32; /* s[i][0] = toupper(s[i][0]); */
			}

		return 0;
}