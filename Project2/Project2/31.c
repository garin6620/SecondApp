#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int age;
	float height;
	char blood_type1, blood_type2;
	char name = 'X';
	char mbti1, mbti2, mbti3, mbti4;
	printf("���̸� �Է��ϼ���:");
	scanf("%d", &age);
	printf("Ű�� �Է��ϼ���: ");
	scanf("%f", &height);

	printf("�������� �Է��ϼ���: ");
	scanf(" %c %c", &blood_type1, &blood_type2);
	printf("MBTI�� �� ���ھ� �� �Է��ϼ���:");
	scanf(" %c %c %c %c", &mbti1, &mbti2,
		&mbti3, &mbti4);
	printf("%c(%d, %.1fcm, %c%c��, %c%c%c%c)\n",
		name, age, height, blood_type1, blood_type2, mbti1,
		mbti2, mbti3, mbti4);

	return 0;
}
