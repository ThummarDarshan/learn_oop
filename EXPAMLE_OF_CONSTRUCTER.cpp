#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    friend double cal_distance(point p1, point p2); // Correct name and return type

    void display()
    {
        cout << "The point is: (" << x << ", " << y << ")" << endl;
    }
};

// Function to calculate distance between two points
double cal_distance(point p1, point p2)
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main()
{
    point p(1, 1);
    p.display();

    point q(1, 1);
    q.display();

    double distance = cal_distance(p, q);
    cout << "The distance between two points: " << distance << endl;

    return 0;
}
