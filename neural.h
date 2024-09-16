#ifndef NEURAL_H
#define NEURAL_H

int sigmoid(int x);

int predict(int inputs[2], int *weights, int len_inputs);

int train(int inputs[2], int target, int *weights, int len_inputs);

int **make_random_weights(int num_weights, int num_inputs);


#endif //NEURAL_H
