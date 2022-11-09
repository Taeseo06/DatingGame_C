#include<stdio.h>
#include<Windows.h>

void ColorSet(int backColor, int textColor)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, (backColor << 4) + textColor);
}

typedef enum ColorKinds
{
    black,
    blue,
    green,
    skyBlue,
    red,
    pink,
    Orange,
    white,
    gray,
    lightBlue,
    brightGreen,
    sky,
    brightRed,
    brightpink,
    brighryellow,
    brighwhite,
};

int main(void)
{
    system("mode con:cols=60 lines=30"); //콘솔창의 크기를 조정

    int choice[4] = {0, 0, 0, 0}; //0.첫 메뉴 1.장소선택(1) 2.취미선택 3.리플레이선택
    int i;
    int score; //호감도 점수 - 초기값 [100]
    
    while (1)
    {
        score = 100; //호감도 점수 - 초기값(100)
        
        system("cls");
        printf(" **********************************\n");
        printf(" * 오늘은 드디어 솔로탈출~~~!! *\n");
        printf(" **********************************\n");
        printf("\n\n 두");
        Sleep(100);
        printf("근");
        Sleep(100);
        printf("두");
        Sleep(100);
        printf("근");
        Sleep(100);
        printf(" ");
        Sleep(100);
        printf("연");
        Sleep(100);
        printf("애");
        Sleep(100);
        printf(" ");
        Sleep(100);
        printf("시");
        Sleep(100);
        printf("물");
        Sleep(100);
        printf("레");
        Sleep(100);
        printf("이");
        Sleep(100);
        printf("션\n\n");
        Sleep(300);
        printf(" (= , =) (- . -) (* . *) (= . =)\n");
        printf("\n\n 각 항목에 맞는 숫자를 입력하여주세요.\n\n");
        printf(" < 1. 시작하기 >\n");
        printf(" ________________\n\n");
        printf(" < 2. 종료하기 >\n");
        printf(" ________________\n\n >>> ");
        scanf_s("%d", &choice[0]); //첫 메뉴선택 입력

        switch (choice[0]) //첫 메뉴션택 - 1.시작하기 2.종료하기
        {
        case 1: //시작하기
            system("cls");
            printf(" 당신의 정보\n\n");
            Sleep(300);
            printf(" 이름: 문태서\n");
            printf(" 성별: 남자\n");
            printf(" 나이: 20살\n");
            printf(" 연애경험: 0회\n");
            printf(" 현재상태: (모태)솔로\n");
            printf(" 직업: 대학생\n\n");
            Sleep(3000);
            printf("당신은 오늘 친구의 소개로 한 여자를 만나기로 했습니다.\n");
            printf("그녀의 이름은 정다현입니다.\n\n\n");

            Sleep(1500);
            system("cls");
            ColorSet(brighryellow, black); //(배경색, 글자색) - 노란색, 검은색

            printf("#카카오톡_정다현\n\n");
            Sleep(2000);
            printf("정다현-오늘 어디서 만날까요 (>.<) ?\n\n\n");
                
            ColorSet(black, white); //(배경색, 글자색) - 검은색, 흰색
                
            Sleep(2000);
            printf(" < 1. 카페에서 만나시죠 >\n");
            printf(" ________________________\n\n");
            printf(" < 2. 영화 보실래요? >\n");
            printf(" ___________________________\n\n");
            printf(" < 3. 초밥 좋아하세요? >\n");
            printf(" _______________________\n\n >>> ");
            scanf_s("%d", &choice[1]); //장소선택(1) 입력
            break;
                
        case 2: //종료하기
            system("cls");
                
            for (i = 0; i < 5; i++)
            {
                Sleep(500);
                printf(" 게임이 종료됩니다.\n");
            }
            break;
        return 0;
        }

        switch (choice[1]) //장소선택(1) - 1.카페 2.영화관 3.일식집
        {
            case 1: //장소선택(1) - 카페
            system("cls");
            ColorSet(brighryellow, black); //(배경색, 글자색) - 노란색, 검은색

            printf("#카카오톡_정다현\n\n");
            printf("정다현-오늘 어디서 만날까요 (>.<) ?\n\n");
            Sleep(2000);
            printf(" 나-카페에서 만나시죠\n\n");
            Sleep(2000);
            printf("정다현-네, 좋아요!!\n\n\n");
            ColorSet(black, white); //(배경색, 글자색) - 검은색, 흰색
            Sleep(2000);
            printf("<<호감도 점수가 50 추가되었습니다.>>\n");
            score += 50;
            printf("현재 호감도 %d\n", score);

            break;
                
        case 2: //장소선택(1) - 영화관
            system("cls");
            ColorSet(brighryellow, black); //(배경색, 글자색) - 노란색, 검은색

            printf("#카카오톡_정다현\n\n");
            printf("정다현-오늘 어디서 만날까요 (>.<) ?\n\n");
            Sleep(2000);
            printf(" 나-영화 보실래요?\n\n");
            Sleep(2000);

            printf("정다현-요즘 볼만한 영화가 없던데...\n\n\n");
            ColorSet(black, white); //(배경색, 글자색) - 검은색, 흰색
            Sleep(2000);
            printf("<<호감도 점수가 20 감소하였습니다.>>\n");
            score -= 20;
            printf("현재 호감도 %d\n", score);
            Sleep(2500);
            system("cls");
            printf("<<결국 나와 다현씨는 카페에서 첫 만남을 하기로하였다...>>\n");

            break;
                
        case 3: //장소선택(1) - 일식집
            system("cls");
            ColorSet(brighryellow, black); //(배경색, 글자색) - 노란색, 검은색

            printf("#카카오톡_정다현\n\n");
            printf("정다현-오늘 어디서 만날까요 (>.<) ?\n\n");
            Sleep(2000);
            printf(" 나-초밥 좋아하세요?\n\n");
            Sleep(2000);
            printf("정다현-아뇨, 저 생선을 싫어해서...\n\n\n");
            ColorSet(black, white); //(배경색, 글자색) - 검은색, 흰색
            Sleep(2000);
                    
            printf("<<호감도 점수가 30 감소하였습니다.>>\n");
            score -= 30;

            printf("현재 호감도 %d\n", score);
            Sleep(2500);
            system("cls");
            printf("\n\n<<결국 나와 다현씨는 카페에서 첫 만남을 하기로하였다...>>\n");

            break;
        }
        
        Sleep(2500);
        system("cls");
        Sleep(2000);
        ColorSet(black, Orange); //(배경색, 글자색) - 검은색, 주황색
        printf(" #다음날 카페\n");
        printf(" 호감도 (%d)\n\n\n", score);
        Sleep(1000);
        printf("정다현-안녕하세요. 조금 늦으셨네요.\n\n");
        Sleep(1500);
        printf("나-죄송해요 아침에 늦게 일어나서...\n\n");
        Sleep(1500);
        printf("정다현-괜찮아요. 저도 방금 왔는걸요... 커피, 주문할까요?\n\n");

        Sleep(1500);
        printf("나-네. 제가 사겠습니다.\n\n");
        Sleep(1500);
        printf("정다현-감사합니다, 그럼 저는 캐모마일 티로 하나 마실게요.\n\n");

        Sleep(2000);
        printf("<<잠시 뒤, 그녀가 캐모마일 티를 마시며 내게 물었다>>\n\n");
        Sleep(2000);
        system("cls");
        printf("정다현-혹시 태서씨는 취미가 어떻게 되세요??\n\n\n");
        ColorSet(black, white); //(배경색, 글자색) - 검은색, 흰색
        Sleep(1500);
        printf(" < 1. 코딩을 좋아합니다 >\n");
        printf(" ________________________\n\n");
        printf(" < 2. 레이싱을 좋아합니다 >\n");
        printf(" ___________________________\n\n");
        printf(" < 3. 게임을 좋아합니다 >\n");
        printf(" _______________________\n\n >>> ");
        scanf_s("%d", &choice[2]); //취미선택 입력

        switch (choice[2]) //취미선택 - 1.코딩 2.레이싱 3.게임
        {
            case 1: //취미선택 - 코딩
            system("cls");
            ColorSet(black, Orange); //(배경색, 글자색) - 검은색, 주황색
            printf("정다현-혹시 태서씨는 취미가 어떻게 되세요??\n\n");
            Sleep(2000);
            printf("나-저는 코딩을 좋아합니다.\n\n");
            Sleep(2000);
            printf("정다현-아!! 저도 코딩 좋아하거든요~~ ^o^\n\n");
            ColorSet(black, white); //(배경색, 글자색) - 검은색, 흰색
            Sleep(2000);

            printf("<<호감도 점수가 50 증가하였습니다.>>\n");
            score += 50;
            printf("현재 호감도 %d\n", score);
            Sleep(2500);

            break;
                
        case 2: //취미선택 - 레이싱
            system("cls");
            ColorSet(black, Orange); //(배경색, 글자색) - 검은색, 주황색
            printf("정다현-혹시 태서씨는 취미가 어떻게 되세요??\n\n");
            Sleep(2000);
            printf("나-저는 레이싱을 좋아합니다.\n\n");
            Sleep(2000);
            printf("정다현-아~~ 취미가 굉장히 멋지시네요. 근데 제가 레이싱은 잘 몰라서...\n\n");

            Sleep(2000);
            printf("나-다현씨는 취미가 어떻게 되세요??\n\n");
            Sleep(2000);
            printf("정다현-저는 코딩을 좋아해요...\n\n");
            ColorSet(black, white); //(배경색, 글자색) - 검은색, 흰색
            Sleep(2000);
            printf("<<호감도 점수가 -30 감소하였습니다.>>\n");
            score -= 30;
            printf("현재 호감도 %d\n", score);

            Sleep(2500);

            break;
                   
        case 3: //취미선택 - 게임
            system("cls");
            ColorSet(black, Orange); //(배경색, 글자색) - 검은색, 주황색
            printf("정다현-혹시 태서씨는 취미가 어떻게 되세요??\n\n");
            Sleep(2000);
            printf("나-저는 게임을 좋아합니다.\n\n");
            Sleep(2000);
            printf("정다현-저도 게임 해본적은 있어요.\n\n");
            Sleep(2000);
            printf("나-다현씨는 취미가 어떻게 되세요??\n\n");
            Sleep(2000);
            printf("정다현-저는 코딩을 좋아해요...\n\n");
            ColorSet(black, white); //(배경색, 글자색) - 검은색, 흰색
            Sleep(2000);
            printf("<<호감도 점수가 20 감소하였습니다.>>\n");
            score -= 20;
            printf("현재 호감도 %d\n", score);
            Sleep(2500);

            break;
        }

        system("cls");
        printf("<<몇 시간 뒤>>\n");
        Sleep(2000);
        printf("<<다현씨와 나는 꽤 많은 대화를 나눴고, 각자 집으로 귀가했다...>>\n");

        Sleep(2500);
        system("cls");
        if (score >= 180)
        {
            printf("#새벽시간\n카카오톡-정다현\n\n");
            printf("정다현-태서씨 저희 정말 잘맞는것 같아요. 우리 사귈래요?? \n\n");
            Sleep(2500);
            printf("perfect!!\n");
        }
        else if (score >= 140)
        {
            printf("#새벽시간\n카카오톡-정다현\n\n");
            printf("정다현-좋은 친구를 만나 대화하는 느낌 이였어요. 우리좋은 친구가 되지 않을래요?? \n\n");
            Sleep(2500);
            printf("GOOD!\n");
        }
        else if (score < 140)
        {
            printf("#새벽시간\n카카오톡-정다현\n\n");
            printf("정다현-#상대가 대화방을 나갔습니다.#\n\n");
            Sleep(2500);
            printf("oh....no.. cheer up!\n");
        }
        Sleep(2500);
        system("cls");

        printf("\n\n < 1. 다시하기 >\n");
        printf(" _________________\n\n");
        printf(" < 2. 프로그램 종료 >\n");
        printf(" _____________________\n\n >>> ");
        scanf_s("%d", &choice[3]); //리플레이 선택 입력
                   
        if (choice[3] == 2) //프로그램 종료
        {
                system("cls");
        for (i = 0; i < 5; i++)
        {
            Sleep(500);
            printf("게임이 종료됩니다.\n");
        }
            return 0; //프로그램 종료
        }
    }
}
