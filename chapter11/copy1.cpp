#include "algostuff.hpp"
#include <cstdlib>
#include <windows.h>

using namespace std;

int main()
{
    vector<string> coll1 = {"Hello", "this", "is", "an", "example"};
    list<string> coll2;

    //copy elements of coll1 into coll2
    copy(coll1.cbegin(), coll1.cend(), back_inserter(coll2));

    //print elements of coll2
    copy(coll2.cbegin(), coll2.cend(), ostream_iterator<string>(cout, " , "));
    cout << endl;

    //copy elements of coll1 into coll2 in reverse order 
    //now overwriting
    copy(coll1.crbegin(), coll1.crend(), coll2.begin());

    //print elements of coll2
    copy(coll2.cbegin(), coll2.cend(), ostream_iterator<string>(cout, " , "));
    cout << endl;

    system("pause");
    return 0;
}
