typedef struct { // 별칭을 정의할 경우 구조체 이름 생략 가능
    int  month;
    int date;

} Birthday;  // 구조체 별칭을 Birthday로 정의
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