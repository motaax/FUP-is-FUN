#include <stdio.h>

int main() {
    int n_iron, n_captain;
    int power, iron_power = 0, captain_power = 0;

    char name[100], max_name[100];
    int max_power = -1;

    scanf("%d", &n_iron);

    for (int i = 0; i < n_iron; i++) {
        scanf(" %[^\n]", name);
        scanf("%d", &power);

        iron_power += power;

        if (power > max_power) {
            max_power = power;

            int j = 0;
            while (name[j] != '\0') {
                max_name[j] = name[j];
                j++;
            }
            max_name[j] = '\0';
        }
    }

    scanf("%d", &n_captain);

    for (int i = 0; i < n_captain; i++) {
        scanf(" %[^\n]", name);
        scanf("%d", &power);

        captain_power += power;

        if (power > max_power) {
            max_power = power;

            int j = 0;
            while (name[j] != '\0') {
                max_name[j] = name[j];
                j++;
            }
            max_name[j] = '\0';
        }
    }

    if (captain_power > iron_power) {
        printf("Team Captain Wins\n");
    } else if (iron_power > captain_power) {
        printf("Team Iron Wins\n");
    } else {
        printf("Draw\n");
    }

    printf("%s\n", max_name);

    return 0;
}