#include <iostream>
#include<string>
#include <set>
#include<cmath>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    if(A == 0 && C == 0){
        cout << 0 <<endl;
        return 0;
    }else if(A == 0 && B == 0){
        return 0;
    }else if(A == 0){
        cout << double(-C)/B <<endl;
        return 0;
    }else if(B == 0 && C == 0){
        cout << 0 << endl;
    }
    double discriminant = B * B - 4 * A * C;
    if(discriminant < 0){
        return 0;
    }else if(discriminant == 0){
        cout << (-B)/(2 * A);
    }else{
        cout << (double(-B) + sqrt(discriminant))/(2 * A) << " ";
        cout << (double(-B) - sqrt(discriminant))/(2 * A) << endl;
    }
    return 0;
}
