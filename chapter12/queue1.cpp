#include "algostuff.hpp"
#include "Stack.hpp"
#include <exception>

using namespace std;

int main()
{
    queue<string> q;

    //insert three elements into the queue
    q.push("These ");
    q.push("are ");
    q.push("more than ");

    //read and print two elements from the queue
    cout << q.front();
    q.pop();
    cout << q.front();
    q.pop();

    //insert two newe elements
    q.push("four ");
    q.push("words! ");

    //skip one element
    q.pop();

    //read and print two elements
    cout << q.front();
    q.pop();
    cout << q.front();
    q.pop();

    //print number of elements in the queue
    cout << "number of elements in the queue: " << q.size() << endl;

    system("pause");
    return 0;
}
