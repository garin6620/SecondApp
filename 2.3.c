typedef struct { // ��Ī�� ������ ��� ����ü �̸� ���� ����
    int  month;
    int date;

} Birthday;  // ����ü ��Ī�� Birthday�� ����
typedef struct {
    char name[20];
    Birthday birthday;
} Friend;
int main(void)
{
    Friend a;
    Friend list[100];
    a.birthday.month = 7;// list[0].birthday.month = 7;
    a.birthday.date = 17;
    list[0].birthday = a.birthday;
    strcpy(list[3].name, "Minyoung");
}