#ifndef ML_LINEARREGRESSION_H
#define ML_LINEARREGRESSION_H

class LinearRegression {

public:

    // First feature
    double *x;

    // Target feature
    double *y;

    //number of training examples
    int m;

    //the theta coefficients

    double *theta;


    LinearRegression(double x[], double y[], int m);
    /**
        train the model with the supplied parameters
        @param alpha the learning rate e.g. 0.01
        @param iterations The number of gradient descent steps to do

    */
    void train(double alpha, int iterations);

    /**
        try to predict y, given an x
    */

    double predict(double x);

private:

    /**
        compute the cost J
    */

    static double compute_cost(double x[], double y[], double theta[], int m);

    /**

    */
    static double h(double x, double theta[]);

    static double *calculate_predictions(double x[], double theta[], int m);

    static double *gradient_descent(double x[], double y[], double alpha, int iters, double *J, int m);
};

#endif
