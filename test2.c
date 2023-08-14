#include <stdio.h>

// s1>s2で正の値,s1<s2で負の値,s1=s2で0を返す。
int str_cmp(const char *str1, const char *str2) {
    int count1 = 0;
    int count2 = 0;

    int i = 0;
    while (str1[i] != '\0') {
        count1 += str1[i];
        i++;
    }

    i = 0;
    while (str2[i] != '\0') {
        count2 += str2[i];
        i++;
    }

    if (count1 > count2) {
        return 1;
    } else if (count1 < count2) {
        return -1;
    } else {
        return 0;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("2つの引数を設定してください\n");
        return 1;
    }

    // 大きい場合
    if (str_cmp(argv[1], argv[2]) == 0) {
        printf("%s=%sです.\n", argv[1], argv[2]);

        // 小さい場合
    } else if (str_cmp(argv[1], argv[2]) < 0) {
        printf("%s<%sです.\n", argv[1], argv[2]);

        // 同じ場合
    } else {
        printf("%s>%sです.\n", argv[1], argv[2]);
    }

    return 0;
}