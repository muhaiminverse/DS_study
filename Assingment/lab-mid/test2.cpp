#include <iostream>
#include <algorithm>
#include <set>

int main()
{
    int n;
    std::cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        std::cin >> a[i];

    // Use a set to remove duplicates
    std::set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(a[i]);

    // Copy the elements from the set back to the array
    int index = 0;
    for (int x : s)
        a[index++] = x;

    // Sort the array
    std::sort(a, a + index);

    // Print the elements
    for (int i = 0; i < index; i++)
        std::cout << a[i] << " ";
    std::cout << std::endl;

    return 0;
}

