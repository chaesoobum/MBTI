#include "main.h"

int main() {

    int score_I_E = 0;
    int score_S_N = 0;
    int score_T_F = 0;
    int score_J_P = 0;

    printf("�ȳ��ϼ���! MBTI�� ������ �౸ Ŭ�� ��õ ���α׷��� ���Ű��� ȯ���մϴ�!\n�����α׷��� �̿����� MBTI�� �����ϰ� ���⿡ �´� �౸ Ŭ������ ��õ���ݴϴ�!\n���� MBTI �׽�Ʈ���� �����ô�! ������ �� 40���Դϴ�!\n\n\n");

    // I-E
    chooseAnswer("[1-1] ���� ó�� ���� ������� �ڽ��� �Ұ��ϴ� ���� �η��� �ʴ�.", -3, -1, 1, 3, &score_I_E);
    chooseAnswer("[1-2] ���� ��Ʈ������ �ؼ��ϴ� ����� ������� ������ ���̴�.", -3, -1, 1, 3, &score_I_E);
    chooseAnswer("[1-3] ��ȭ�� �����ϱ⺸�� ���屸 ġ�°� �����Ѵ�.", 3, 1, -1, -3, &score_I_E);
    chooseAnswer("[1-4] ���ڸ����� ��� �� ���� ������ �����ϴ� �� ����.", 3, 1, -1, -3, &score_I_E);
    chooseAnswer("[1-5] ���� ȥ�� �ִ� ���� ����.", 3, 1, -1, -3, &score_I_E);
    chooseAnswer("[1-6] ��κ��� ������ ��︮�⺸�� ȥ�� �ð��� ������ ���� �� ������ ���ϴ�.", 3, 1, -1, -3, &score_I_E);
    chooseAnswer("[1-7] ���ο� ������ ��︮�� ���� ����.", -3, -1, 1, 3, &score_I_E);
    chooseAnswer("[1-8] �ұ����� ���Ӻ��ٴ� Ȱ���ϰ� �������� ��ġ�� ������ ��ȣ�Ѵ�.", -3, -1, 1, 3, &score_I_E);
    chooseAnswer("[1-9] ���� ��κ��� ��Ȳ���� ���� ���� �Ŵ� ���̴�.", -3, -1, 1, 3, &score_I_E);
    chooseAnswer("[1-10] ���ο� ������ �߱��ϴ� ���̸�, ���� ���ο� Ȱ���� �����Ѵ�.", -3, -1, 1, 3, &score_I_E);

    // S-N 
    chooseAnswer("[2-1] ������ �ϰų� ������ �� �� ��ȹ�� ���� �����.", -3, -1, 1, 3, &score_S_N);
    chooseAnswer("[2-2] ���� �����̴� ���̵� ������ �޸� �ϰ� �Ѵ�.", -3, -1, 1, 3, &score_S_N);
    chooseAnswer("[2-3] ���� ���������� ������ �ϴ� ���̴�.", -3, -1, 1, 3, &score_S_N);
    chooseAnswer("[2-4] ������ �����ϱ⿡ ���� �������� �����̴�.", -3, -1, 1, 3, &score_S_N);
    chooseAnswer("[2-5] �̷��� ��ȹ���� ������ ��Ȳ�� �����ϴ� ���̴�.", 3, 1, -1, -3, &score_S_N);
    chooseAnswer("[2-6] ���ο� ���̵��ٴ� �������� ������ �� �߿��ϰ� �����Ѵ�.", 3, 1, -1, -3, &score_S_N);
    chooseAnswer("[2-7] �������� ��ȹ���ٴ� ���� �����ϰ� ��ó�ϴ� ���̴�.", 3, 1, -1, -3, &score_S_N);
    chooseAnswer("[2-8] ���ο� ���̵� ������ �����ϸ� ���������� �ൿ�ϴ� ���̴�.", 3, 1, -1, -3, &score_S_N);
    chooseAnswer("[2-9] ������ ����� ���������� ������ �ذ��ϴ� ���̴�.", -3, -1, 1, 3, &score_S_N);
    chooseAnswer("[2-10] �̷��� ���ɼ��� ���� ����ϸ� ��ȹ�� ����� ���� �����Ѵ�.", -3, -1, 1, 3, &score_S_N);

    // T-F
    chooseAnswer("[3-1] ������ ����� ����� �� ������ ã�⺸�� ������ ���ִ� ���̴�.", -3, -1, 1, 3, &score_T_F);
    chooseAnswer("[3-2] � ���������� ������ ����� ���� �����ؾ� �Ѵ�.", -3, -1, 1, 3, &score_T_F);
    chooseAnswer("[3-3] �ٸ� ������� ���� ��� �����ϴ��� ����ġ�� �����Ѵ�.", -3, -1, 1, 3, &score_T_F);
    chooseAnswer("[3-4] ��ȭ�� ��󸶰� �������̳� ������ǰ���� �� ���� ������ �ش�.", 3, 1, -1, -3, &score_T_F);
    chooseAnswer("[3-5] �������� ������ �Ǵ��� �ϴ� ���̴�.", 3, 1, -1, -3, &score_T_F);
    chooseAnswer("[3-6] ������ ��ó���� �ʱ� ���� �׻� � ���� ������ �Ű澴��.", -3, -1, 1, 3, &score_T_F);
    chooseAnswer("[3-7] �������� ��Ȳ������ �������� �Ǵ��Ϸ� ����Ѵ�.", 3, 1, -1, -3, &score_T_F);
    chooseAnswer("[3-8] ������ �� �� �������� ���ذ� ��Ģ�� �߽��Ѵ�.", 3, 1, -1, -3, &score_T_F);
    chooseAnswer("[3-9] �����̳� ���� �� �������� ǥ�����ٴ� ������ ����� ��ȣ�Ѵ�.", 3, 1, -1, -3, &score_T_F);
    chooseAnswer("[3-10] ������ ������ �����ϱ⺸�� �ذ�å�� ã�� ���� ������.", -3, -1, 1, 3, &score_T_F);

    // J-P
    chooseAnswer("[4-1] �� ������ �Ǿ� ���� ������ ���� ������ �� ����.", 3, 1, -1, -3, &score_J_P);
    chooseAnswer("[4-2] ������ ������ �ִ��� �̷���ٰ� �Ѳ����� �ϴ� ���̴�.", -3, -1, 1, 3, &score_J_P);
    chooseAnswer("[4-3] ȣ����� ���� �����̴� �������̴�.", -3, -1, 1, 3, &score_J_P);
    chooseAnswer("[4-4] ���������� ȸ������� �� ���� ���� ��� �ִٰ� �����Ѵ�.", -3, -1, 1, 3, &score_J_P);
    chooseAnswer("[4-5] ��ȹ�� ����� �׿� ���� �ൿ�ϴ� ���� �����Ѵ�.", -3, -1, 1, 3, &score_J_P);
    chooseAnswer("[4-6] ���� �̷�� ���̸� �������� ������ ���� ������.", 3, 1, -1, -3, &score_J_P);
    chooseAnswer("[4-7] ��ȹ�� ������ �ʰ� ���� ȿ�������� ó���� �� �ִٰ� �ϴ´�.", 3, 1, -1, -3, &score_J_P);
    chooseAnswer("[4-8] ��ȹ�� ����Ǿ �� �����ϸ� ���ο� ��Ȳ�� �����ϰ� ��ó�Ѵ�.", -3, -1, 1, 3, &score_J_P);
    chooseAnswer("[4-9] ���ο� ���� �� �� ��ȹ���ٴ� ���߷� �ִ� ������ ��ȣ�Ѵ�.", -3, -1, 1, 3, &score_J_P);
    chooseAnswer("[4-10] ������ ������ �������ϱ� �������� �ٸ� �Ͽ� ������ �α� ��ƴ�.", 3, 1, -1, -3, &score_J_P);

    

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

    printf("����� MBTI ����� %s �Դϴ�.", mbti);

    if (strcmp(mbti, "ISTJ") == 0)
        printf("ISTJ\n����� �������� �Դϴ�. ��ǿ� ���Ͽ� ��Ȯ�ϰ� ü�������� ����ϸ� �����ϰ� å�Ӱ��� �ֽ��ϴ�.");

    else if (strcmp(mbti, "ISFJ") == 0)
        printf("ISFJ\n����� �����ϰ� �����ϸ� ģ���մϴ�. ���� ������������ ����Դϴ�.");

    else if (strcmp(mbti, "INFJ") == 0)
        printf("INFJ\n����� �γ����� ���� ������� �����մϴ�. ��ġ�� ������ ������ �ֽ��ϴ�.");

    else if (strcmp(mbti, "INTJ") == 0)
        printf("INTJ\n����� �����̰� ȿ������ �߽��ϴ� ��ö�� ����Դϴ�.");

    else if (strcmp(mbti, "ISTP") == 0)
        printf("ISTP\n�����ϰ� �����ϰ� �����ְ� �ִ� ������ ��Ÿ�� �Դϴ�.");

    else if (strcmp(mbti, "ISFP") == 0)
        printf("ISFP\n�����ϰ� ���ϰ� ���濡 ���� ������� �����ϴ�. ���� ����鿡�� ���� �۾����� �����Դϴ�.");

    else if (strcmp(mbti, "INFP") == 0)
        printf("INFP\n����� �������̰� �Ϻ��� �߱��ϸ� �����ǾƸ� �߱��ϴ� �����Դϴ�.");

    else if (strcmp(mbti, "INTP") == 0)
        printf("INTP\n����� �����ϰ� �����ϸ� ����� ���� ����� �Դϴ�. ��ȸ���� �����ϴٴ� ���� ���� ����ϴ�.");

    else if (strcmp(mbti, "ESTP") == 0)
        printf("ESTP\n����� Ȱ���ϴ� ���� �����ϴ� ������� �Դϴ�.");

    else if (strcmp(mbti, "ESFP") == 0)
        printf("ESFP\n����� �����ο� ��ȥ�� �����ִ� ������ ��Ÿ���Դϴ�.");

    else if (strcmp(mbti, "ENFP") == 0)
        printf("ENFP\n����� ��ġ�� ������ �������� �׻� ���ο� ���ɼ��� ã�ƺ��� Ž�谡�Դϴ�.");

    else if (strcmp(mbti, "ENTP") == 0)
        printf("ENTP\n����� ������ ���� ����� ������ ���� �����մϴ�.");

    else if (strcmp(mbti, "ESTJ") == 0)
        printf("ESTJ\n������ ��ü���̰� ������̸� ������ �̲������ ������ �Դϴ�.");

    else if (strcmp(mbti, "ESFJ") == 0)
        printf("ESFJ\n�������� ���� �ٸ� ������� ������ �ִ� ���� �����ϸ� ������ �����ϰ� ����ְ� �����մϴ�.");

    else if (strcmp(mbti, "ENFJ") == 0)
        printf("ENFJ\n����� �����ϰ� �������̸� �米���� ǳ���ϰ� ��Ÿ���Դϴ�.");

    else if (strcmp(mbti, "ENTJ") == 0)
        printf("ENTJ\n����� �������̸� �����ϰ� �����°� ��ַ��� �ֽ��ϴ�. Ȱ�����̰� ������� ��ȹ�� �����մϴ�.");
}

void chooseAnswer(const char* question, int veryNo, int no, int yes, int veryYes, int* target) {

    for (;; ) {

        printf("%s\n(1. �ſ� �ƴϴ�, 2. �ƴϴ�, 3. �׷���, 4. �ſ� �׷���)\n", question);
        printf("�亯�� �Է��� �ּ���: ");
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
            printf("�߸��� �Է��Դϴ�.\n");
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