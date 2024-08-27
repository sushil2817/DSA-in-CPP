#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // creation
    queue<int> q;

    // insertion
    q.push(5);
    // size
    cout <<"Size of queue: "<< q.size() << endl;
    // empty

    if (q.empty() == true)
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << "queue is not empty" << endl;
    }

    // remove

    q.pop();
    cout <<"Size of queue: "<< q.size() << endl;


    if (q.empty() == true)
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << "queue is not empty" << endl;
    }


    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout<<"Front element of queue is: "<<q.front()<<endl;
    cout<<"Last element of queue is: "<<q.back()<<endl;


    return 0;
}