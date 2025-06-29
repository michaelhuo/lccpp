#include <ranges>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> v = {3, 1, 4};
    std::ranges::sort(v);
    return 0;
}