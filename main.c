#include "neural.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    int inputs[4][2] = {
        {0, 0},
        {0, 1},
        {1, 0},
        {1, 1}
    };

    int outputs[] = {0, 1, 1, 0};

    int test[] = {0, 1};


    printf("Initial weights:\n");

    int **weights = make_random_weights(4, 2);

    int nb_epochs = 1000;

    printf("Training...\n");

    for (int i = 0; i < nb_epochs; i++) {
        for (int j = 0; j < 4; j++) {
            train(inputs[j], outputs[j], weights[j], 2);
        }
    }

    printf("Testing...\n");

    int prediction = predict(test, weights[0], 2);

    printf("%d\n", prediction);


    for (int i = 0; i < 2; i++) {
        free(weights[i]);
    }

    free(weights);

    return 0;
}
