#include <math.h>
#include <stdlib.h>

int sigmoid(int x) {
    return 1 / (1 + exp(-x));
}

int predict(int inputs[2], int* weights, int len_inputs) {
    int sum = 0;
    for (int i = 0; i < len_inputs; i++) {
        sum += inputs[i] * weights[i];
    }
    return sigmoid(sum);
}

int train(int inputs[2], int target, int* weights, int len_inputs) {
    int output = predict(inputs, weights, len_inputs);
    int error = target - output;
    for (int i = 0; i < len_inputs; i++) {
        weights[i] += error * inputs[i];
    }
}

int** make_random_weights(int num_weights, int num_inputs) {
    int** weights = malloc(num_weights * sizeof(int*));

    for (int i = 0; i < num_weights; i++) {
        int *array = malloc(sizeof(int) * num_inputs);
        for (int j = 0; j < num_inputs; j++) {
            array[j] = rand() % 100;
        }
        weights[i] = array;
    }
    return weights;
}