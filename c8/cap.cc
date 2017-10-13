#include "my.h"

int main() {
    vector<int> vi;
    cout << "size: " << vi.size() << " capacity: " << vi.capacity() << endl;
    vi.push_back(1);
    vi.push_back(1);
    vi.push_back(1);
    vi.push_back(1);
    vi.push_back(1);
    vi.push_back(1);
    cout << "size: " << vi.size() << " capacity: " << vi.capacity() << endl;
    while (vi.size() != vi.capacity())
        vi.push_back(1);
    cout << "size: " << vi.size() << " capacity: " << vi.capacity() << endl;
    vi.push_back(1);
    cout << "size: " << vi.size() << " capacity: " << vi.capacity() << endl;
    return 0;
}
    
