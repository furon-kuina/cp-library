---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: verify/abc311_e.cpp
    title: verify/abc311_e.cpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"cumulative-sum-2d.hpp\"\n#include <cassert>\n#include <vector>\n\
    \ntemplate <typename T>\nstruct CumulativeSum2D {\n  std::vector<std::vector<T>>\
    \ data;\n\n  CumulativeSum2D(int h, int w) : data(h + 1, std::vector<T>(w + 1,\
    \ 0)) {}\n\n  void Add(int x, int y, T z) {\n    ++x, ++y;\n    assert(x < data.size()\
    \ || y < data[0].size());\n    data[x][y] += z;\n  }\n\n  void Build() {\n   \
    \ for (int i = 1; i < data.size(); i++) {\n      for (int j = 1; j < data[i].size();\
    \ j++) {\n        data[i][j] += data[i][j - 1] + data[i - 1][j] - data[i - 1][j\
    \ - 1];\n      }\n    }\n  }\n\n  T Sum(int lx, int rx, int ly, int ry) const\
    \ {\n    return (data[rx][ry] - data[lx][ry] - data[rx][ly] + data[lx][ly]);\n\
    \  }\n};\n"
  code: "#include <cassert>\n#include <vector>\n\ntemplate <typename T>\nstruct CumulativeSum2D\
    \ {\n  std::vector<std::vector<T>> data;\n\n  CumulativeSum2D(int h, int w) :\
    \ data(h + 1, std::vector<T>(w + 1, 0)) {}\n\n  void Add(int x, int y, T z) {\n\
    \    ++x, ++y;\n    assert(x < data.size() || y < data[0].size());\n    data[x][y]\
    \ += z;\n  }\n\n  void Build() {\n    for (int i = 1; i < data.size(); i++) {\n\
    \      for (int j = 1; j < data[i].size(); j++) {\n        data[i][j] += data[i][j\
    \ - 1] + data[i - 1][j] - data[i - 1][j - 1];\n      }\n    }\n  }\n\n  T Sum(int\
    \ lx, int rx, int ly, int ry) const {\n    return (data[rx][ry] - data[lx][ry]\
    \ - data[rx][ly] + data[lx][ly]);\n  }\n};"
  dependsOn: []
  isVerificationFile: false
  path: cumulative-sum-2d.hpp
  requiredBy:
  - verify/abc311_e.cpp
  timestamp: '2023-07-23 00:14:59+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: cumulative-sum-2d.hpp
layout: document
redirect_from:
- /library/cumulative-sum-2d.hpp
- /library/cumulative-sum-2d.hpp.html
title: cumulative-sum-2d.hpp
---