// This program counts how many products have a discount of at least 20% using recursive array processing.
// Author: Pedro Gabriel

#include <stdio.h>

void entrada(double precoORG[], double precoDESC[], int i) {
    if (i >= 5) return;
    
    scanf("%lf", &precoORG[i]);
    scanf("%lf", &precoDESC[i]);
    
    entrada(precoORG, precoDESC, i + 1);
}

int vrfdesc(double precoORG[], double precoDESC[], int i) {
    if (i >= 5) return 0;
    
    double desc = (precoORG[i] - precoDESC[i]) / precoORG[i] * 100;
    
    if (desc >= 20.0) {
        return 1 + vrfdesc(precoORG, precoDESC, i + 1);
    } else {
        return vrfdesc(precoORG, precoDESC, i + 1);
    }
}

int main() {
    double precoORG[5];
    double precoDESC[5];
    
    entrada(precoORG, precoDESC, 0);
    int total = vrfdesc(precoORG, precoDESC, 0);
    
    printf("%d\n", total);
    
    return 0;
}
