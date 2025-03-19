#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int age;
	float height;
	char blood_type1, blood_type2;
	char name = 'X';
	char mbti1, mbti2, mbti3, mbti4;
	printf("나이를 입력하세요:");
	scanf("%d", &age);
	printf("키를 입력하세요: ");
	scanf("%f", &height);

	printf("혈액형을 입력하세요: ");
	scanf(" %c %c", &blood_type1, &blood_type2);
	printf("MBTI를 한 글자씩 띄어서 입력하세요:");
	scanf(" %c %c %c %c", &mbti1, &mbti2,
		&mbti3, &mbti4);
	printf("%c(%d, %.1fcm, %c%c형, %c%c%c%c)\n",
		name, age, height, blood_type1, blood_type2, mbti1,
		mbti2, mbti3, mbti4);

	return 0;
}
