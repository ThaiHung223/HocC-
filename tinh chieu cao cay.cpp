#include <iostream>
#include <vector>
#include <algorithm>

auto height(int s, const std::vector<std::vector<int> >& tree) -> int {
    std::vector<int> childrenHeights;
    std::transform(begin(tree[s]), end(tree[s]), std::back_inserter(childrenHeights),
                   [&](int u) { return height(u, tree); });
    return 1 + (tree[s].empty() ? 0 : *std::max_element(begin(childrenHeights), end(childrenHeights)));
}

auto main() -> int {
    int n = 0;
    std::cin >> n;
    std::vector<std::vector<int>> tree(n);
    int s = 0;
    for (int i = 0, src = 0; i < n; ++i) {
        std::cin >> src;
        if (src == -1) {
            s = i;
        } else {
            tree[src].push_back(i);
        }
    }
    std::cout << height(s, tree);
}
