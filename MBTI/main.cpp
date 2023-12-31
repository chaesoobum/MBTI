#include "main.h"

int main() {

    int score_I_E = 0;
    int score_S_N = 0;
    int score_T_F = 0;
    int score_J_P = 0;

    printf("안녕하세요! MBTI별 응원할 축구 클럽 추천 프로그램에 오신것을 환영합니다!\n이프로그램은 이용자의 MBTI를 측정하고 성향에 맞는 축구 클럽들을 추천해줍니다!\n먼저 MBTI 테스트부터 가봅시다! 질문은 총 40개입니다!\n\n");

    // I-E
    chooseAnswer("\n[1-1] 나는 처음 보는 사람에게 자신을 소개하는 것이 두렵지 않다.", -3, -1, 1, 3, &score_I_E);
    chooseAnswer("\n[1-2] 내가 스트레스를 해소하는 방법은 사람들을 만나는 것이다.", -3, -1, 1, 3, &score_I_E);
    chooseAnswer("\n[1-3] 대화를 시작하기보다 맞장구 치는걸 좋아한다.", 3, 1, -1, -3, &score_I_E);
    chooseAnswer("\n[1-4] 술자리에서 노는 것 보다 집에서 게임하는 게 좋다.", 3, 1, -1, -3, &score_I_E);
    chooseAnswer("\n[1-5] 나는 혼자 있는 것을 즐긴다.", 3, 1, -1, -3, &score_I_E);
    chooseAnswer("\n[1-6] 대부분의 사람들과 어울리기보다 혼자 시간을 보내는 것이 더 나에게 편하다.", 3, 1, -1, -3, &score_I_E);
    chooseAnswer("\n[1-7] 새로운 사람들과 어울리는 것을 즐긴다.", -3, -1, 1, 3, &score_I_E);
    chooseAnswer("\n[1-8] 소극적인 모임보다는 활발하고 에너지가 넘치는 모임을 선호한다.", -3, -1, 1, 3, &score_I_E);
    chooseAnswer("\n[1-9] 나는 대부분의 상황에서 말을 먼저 거는 편이다.", -3, -1, 1, 3, &score_I_E);
    chooseAnswer("\n[1-10] 새로운 경험을 추구하는 편이며, 쉽게 새로운 활동에 참여한다.", -3, -1, 1, 3, &score_I_E);

    // S-N 
    chooseAnswer("\n[2-1] 업무를 하거나 과제를 할 때 계획을 먼저 세운다.", -3, -1, 1, 3, &score_S_N);
    chooseAnswer("\n[2-2] 가끔 번뜩이는 아이디어가 생각나 메모를 하곤 한다.", -3, -1, 1, 3, &score_S_N);
    chooseAnswer("\n[2-3] 가끔 비현실적인 망상을 하는 편이다.", -3, -1, 1, 3, &score_S_N);
    chooseAnswer("\n[2-4] 스스로 생각하기에 나는 내성적인 성격이다.", -3, -1, 1, 3, &score_S_N);
    chooseAnswer("\n[2-5] 미래의 계획보다 현재의 상황에 집중하는 편이다.", 3, 1, -1, -3, &score_S_N);
    chooseAnswer("\n[2-6] 새로운 아이디어보다는 실제적인 경험을 더 중요하게 생각한다.", 3, 1, -1, -3, &score_S_N);
    chooseAnswer("\n[2-7] 세부적인 계획보다는 일을 유연하게 대처하는 편이다.", 3, 1, -1, -3, &score_S_N);
    chooseAnswer("\n[2-8] 새로운 아이디어에 빠르게 적응하며 즉흥적으로 행동하는 편이다.", 3, 1, -1, -3, &score_S_N);
    chooseAnswer("\n[2-9] 논리적인 사고보다 직관적으로 문제를 해결하는 편이다.", -3, -1, 1, 3, &score_S_N);
    chooseAnswer("\n[2-10] 미래의 가능성에 대해 상상하며 계획을 세우는 것을 좋아한다.", -3, -1, 1, 3, &score_S_N);

    // T-F
    chooseAnswer("\n[3-1] 상대방의 고민을 들어줄 때 원인을 찾기보다 공감을 해주는 편이다.", -3, -1, 1, 3, &score_T_F);
    chooseAnswer("\n[3-2] 어떤 이유에서건 상대방의 기분을 먼저 생각해야 한다.", -3, -1, 1, 3, &score_T_F);
    chooseAnswer("\n[3-3] 다른 사람들이 나를 어떻게 생각하는지 지나치게 생각한다.", -3, -1, 1, 3, &score_T_F);
    chooseAnswer("\n[3-4] 영화나 드라마가 뮤지컬이나 예술작품보다 더 많은 영감을 준다.", 3, 1, -1, -3, &score_T_F);
    chooseAnswer("\n[3-5] 감정보다 논리적인 판단을 하는 편이다.", 3, 1, -1, -3, &score_T_F);
    chooseAnswer("\n[3-6] 남들을 상처주지 않기 위해 항상 어떤 말을 쓰는지 신경쓴다.", -3, -1, 1, 3, &score_T_F);
    chooseAnswer("\n[3-7] 감정적인 상황에서도 논리적으로 판단하려 노력한다.", 3, 1, -1, -3, &score_T_F);
    chooseAnswer("\n[3-8] 결정을 할 때 객관적인 기준과 규칙을 중시한다.", 3, 1, -1, -3, &score_T_F);
    chooseAnswer("\n[3-9] 예술이나 음악 등 감성적인 표현보다는 논리적인 토론을 선호한다.", 3, 1, -1, -3, &score_T_F);
    chooseAnswer("\n[3-10] 상대방의 감정에 공감하기보다 해결책을 찾는 것이 먼저다.", -3, -1, 1, 3, &score_T_F);

    // J-P
    chooseAnswer("\n[4-1] 방 정리가 되어 있지 않으면 일을 시작할 수 없다.", 3, 1, -1, -3, &score_J_P);
    chooseAnswer("\n[4-2] 과제나 업무는 최대한 미루었다가 한꺼번에 하는 편이다.", -3, -1, 1, 3, &score_J_P);
    chooseAnswer("\n[4-3] 호기심은 나를 움직이는 원동력이다.", -3, -1, 1, 3, &score_J_P);
    chooseAnswer("\n[4-4] 프리랜서가 회사원보다 더 나은 삶을 살고 있다고 생각한다.", -3, -1, 1, 3, &score_J_P);
    chooseAnswer("\n[4-5] 계획을 세우고 그에 따라 행동하는 것을 좋아한다.", -3, -1, 1, 3, &score_J_P);
    chooseAnswer("\n[4-6] 일을 미루는 편이며 즉흥적인 결정을 많이 내린다.", 3, 1, -1, -3, &score_J_P);
    chooseAnswer("\n[4-7] 계획을 세우지 않고도 일을 효과적으로 처리할 수 있다고 믿는다.", 3, 1, -1, -3, &score_J_P);
    chooseAnswer("\n[4-8] 계획이 변경되어도 잘 적응하며 새로운 상황에 유연하게 대처한다.", -3, -1, 1, 3, &score_J_P);
    chooseAnswer("\n[4-9] 새로운 일을 할 때 계획보다는 순발력 있는 대응을 선호한다.", -3, -1, 1, 3, &score_J_P);
    chooseAnswer("\n[4-10] 업무나 과제를 마무리하기 전까지는 다른 일에 관심을 두기 어렵다.", 3, 1, -1, -3, &score_J_P);

    

    printResult(score_I_E, score_S_N, score_T_F, score_J_P);

    return 0;
}

void printResult(int i_e, int s_n, int t_f, int j_p) {

    char mbti[5];

    if (i_e < 0)
        mbti[0] = 'I';
    else
        mbti[0] = 'E';

    if (s_n < 0)
        mbti[1] = 'S';
    else
        mbti[1] = 'N';

    if (t_f < 0)
        mbti[2] = 'T';
    else
        mbti[2] = 'F';

    if (j_p < 0)
        mbti[3] = 'J';
    else
        mbti[3] = 'P';

    mbti[4] = '\0';

    printf("당신의 MBTI 결과는 %s 입니다.", mbti);

    if (strcmp(mbti, "ISTJ") == 0)
        printf("ISTJ\n당신은 논리주의자 입니다. 사실에 대하여 정확하고 체계적으로 기억하며 신중하고 책임감이 있습니다.\n당신에게 추천하는 축구클럽은 프리미어리그의 맨체스터 시티와 K리그의 광주 FC입니다. 이곳들은 감독이 선수들에게 체계적이고 낭비없는 움직임을 요구합니다.");

    else if (strcmp(mbti, "ISFJ") == 0)
        printf("ISFJ\n당신은 조용하고 차분하며 친근합니다. 가장 믿음직스러운 사람입니다.\n당신에게 추천하는 축구클럽은 프리미어리그의 토트넘 핫스퍼입니다. 차분한 주장단(손흥민,로메로,매디슨)이 팀을 이끄는곳입니다.");

    else if (strcmp(mbti, "INFJ") == 0)
        printf("INFJ\n당신은 인내심이 많고 사람들을 좋아합니다. 눈치가 빠르고 영감이 있습니다.\n당신에게 추천하는 축구클럽은 라리가의 아틀레티코마드리드입니다. 인내심있게 선수비를 하고 오래동안 호흡을 맞춘 공격듀오가 눈치빠르게 역습을 전개합니다.");

    else if (strcmp(mbti, "INTJ") == 0)
        printf("INTJ\n당신은 논리적이고 효율성을 중시하는 냉철한 사람입니다.\n당신에게 추천하는 축구클럽은 프리미어리그의 맨체스터 시티와 K리그의 광주 FC입니다. 이곳들은 감독이 선수들에게 체계적이고 낭비없는 움직임을 요구합니다.");

    else if (strcmp(mbti, "ISTP") == 0)
        printf("ISTP\n조용하고 과묵하고 손재주가 있는 공학자 스타일 입니다.\n당신에게 추천하는 축구클럽은 프리미어리그의 아스널입니다. 아스널은 과묵하지만 열정넘치고 재주가뛰어난 감독이 이끌고있습니다."); //아스널

    else if (strcmp(mbti, "ISFP") == 0)
        printf("ISFP\n다정하고 착하고 상대방에 대한 배려심이 많습니다. 주위 사람들에게 많이 휩쓸리는 성격입니다.\n당신에게 추천하는 축구클럽은 프리미어리그의 첼시입니다 첼시는 상대에따라 전술을 다양하게 바꾸는 것으로 유명합니다."); //첼시

    else if (strcmp(mbti, "INFP") == 0)
        printf("INFP\n당신은 정열적이고 완벽을 추구하며 유토피아를 추구하는 성격입니다.\n당신에게추천하는 축구클럽은 라리가의 레알마드리드입니다. 레알마드리드는 역사적으로 유서깊은 클럽으로, 전세계의 최고의 선수들을 수집하는데 일가견이있습니다."); //레알

    else if (strcmp(mbti, "INTP") == 0)
        printf("INTP\n당신은 조용하고 과묵하며 상상을 즐기는 사색가 입니다. 사회성이 부족하다는 말을 많이 듣습니다.\n당신에게 추천하는 축구클럽은 프리미어리그의 첼시입니다 첼시는 상대에따라 전술을 다양하게 바꾸는 것으로 유명합니다."); //아스널

    else if (strcmp(mbti, "ESTP") == 0)
        printf("ESTP\n당신은 활동하는 것을 좋아하는 사업가형 입니다.\n레스터시티는 지난시즌까지 프리미어리그였지만 강등을 당하여 2부리그에있습니다 하지만 현재 리그 1위로 순항중이며 바로다음시즌 프리미어리그로 돌아올것으로 예상됩니다. 레스터시티는 활동적이고 열정적인 선수들이 많은 클럽입니다."); //레스터시티

    else if (strcmp(mbti, "ESFP") == 0)
        printf("ESFP\n당신은 자유로운 영혼을 갖고있는 연예인 스타일입니다.\n당신에게 추천하는 축구클럽은 라리가의 FC바르셀로나입니다. 이 클럽의 유스팀부터 성인팀까지 자유롭고 창의적인 선수들 육성하는데 역사가 깊습니다.(메시,이니에스타,샤비)"); //바르셀로나

    else if (strcmp(mbti, "ENFP") == 0)
        printf("ENFP\n당신은 넘치는 상상력을 바탕으로 항상 새로운 가능성을 찾아보는 탐험가입니다.\n당신에게 추천하는 축구클럽은 프리미어리그의 리버풀입니다. 이 클럽은 정말 뛰어난 상상력을 바탕으로 세게축구의 트렌드를 이끄는 전술을 많이 개발해낸 이력이있습니다,"); //리버풀

    else if (strcmp(mbti, "ENTP") == 0)
        printf("ENTP\n당신은 논쟁을 즐기며 사람을 만나는 것을 좋아합니다.\n당신에게 추천하는 축구클럽은 분데스리가의 바이에른뮌헨입니다. 이 클럽은 선수들간의 팀워크를 돈독히 하기위한 훈련프로그램으로 유명하고 실제 그런 끈끈한우정과 팀워크가 경기에서 효율을 뽑아내는 클럽입니다."); //바이에른뮌헨

    else if (strcmp(mbti, "ESTJ") == 0)
        printf("ESTJ\n현실적 구체적이고 사실적이며 조직을 이끌어나가는 리더형 입니다.\n당신에게 추천하는 축구클럽은 세리에의 AC밀란입니다. 이 클럽은 카리스마 넘친는 선수들과 감독이 많이 거쳐간것으로 유명하고 그것이 하나의 팀스피릿으로 자리잡았습니다."); // AC밀란

    else if (strcmp(mbti, "ESFJ") == 0)
        printf("ESFJ\n동정심이 많고 다른 사람에게 관심을 주는 것을 좋아하며 협력을 조항하고 동료애가 끈끈합니다.\n당신에게 추천하는 축구클럽은 세리에의 유벤투스입니다. 역사적으로 협력수비가 유명하고 동료를 위해 한발더뛰는 철학이 내포되어있는 클럽입니다."); //유벤투스

    else if (strcmp(mbti, "ENFJ") == 0)
        printf("ENFJ\n당신은 따뜻하고 적극적이며 사교성이 풍부하고 이타적입니다.\n당신에게 추천하는 축구클럽은 프리미어리그의 맨체스터유나이티드입니다. 맨유는 이타적인 플레이를 간독이 요구하기로 유명합니다. 이선수가 분명 골을 넣을수있는 위치에 있었음에도 더좋은 자리에있는 동료에게 양보하는 장면이 많이나옵니다."); // 맨체스터유나이티드

    else if (strcmp(mbti, "ENTJ") == 0)
        printf("ENTJ\n당신은 열정적이며 솔직하고 지도력과 통솔력이 있습니다. 활동적이고 장기적인 계획을 좋아합니다.\n당신에게 추천하는 축구클럽은 라리가의 바르셀로나입니다. 이팀은 장기적으로 선수를 유소년때부터 육성하는 프로그램으로 유명합니다 세계적인 축구스타 메시도 바르셀로나의 장기적인 유스시스템에서 나온 선수입니다."); //바르셀로나
}

void chooseAnswer(const char* question, int veryNo, int no, int yes, int veryYes, int* target) {

    for (;; ) {

        printf("%s\n(1. 매우 아니다, 2. 아니다, 3. 그렇다, 4. 매우 그렇다)\n", question);
        printf("답변을 입력해 주세요: ");
        int input = getInt();

        if (input == 1) {
            *target = *target + veryNo;
            break;
        }
        else if (input == 2) {
            *target = *target + no;
            break;
        }
        else if (input == 3) {
            *target = *target + yes;
            break;
        }
        else if (input == 4) {
            *target = *target + veryYes;
            break;
        }
        else {
            printf("잘못된 입력입니다.\n");
            continue;
        }
    }
}

int getInt() {

    int input;
    fseek(stdin, 0, SEEK_END);
    scanf("%d", &input);

    return input;
}