---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: h
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"binary-search.h\"\n#include <cmath>\n\n// \u5358\u8ABF\u306A\
    f\u306B\u3064\u3044\u3066\u3001f(x) = true\u3068\u306A\u308B\u6700\u5C0F/\u6700\
    \u5927\u306Ex\u3092\u6C42\u3081\u308B\ntemplate <typename F>\nlong long BinarySearch(long\
    \ long ok, long long ng, F &&f) {\n  assert(f(ok));\n  assert(f(ng));\n  while\
    \ (std::abs(ok - ng) > 1) {\n    long long mid = (ok + ng) / 2;\n    if (f(mid))\n\
    \      ok = mid;\n    else\n      ng = mid;\n  }\n  return ok;\n}\n\nauto check\
    \ = [&](long double x) -> bool { return; };\nlong double ok = $OK$;\nlong double\
    \ ng = $NG$;\nwhile (abs(ok - ng) > 1e-9) {\n  long double mid = (ok + ng) / 2;\n\
    \  if (check(mid)) {\n    ok = mid;\n  } else {\n    ng = mid;\n  }\n}\n"
  code: "#include <cmath>\n\n// \u5358\u8ABF\u306Af\u306B\u3064\u3044\u3066\u3001\
    f(x) = true\u3068\u306A\u308B\u6700\u5C0F/\u6700\u5927\u306Ex\u3092\u6C42\u3081\
    \u308B\ntemplate <typename F>\nlong long BinarySearch(long long ok, long long\
    \ ng, F &&f) {\n  assert(f(ok));\n  assert(f(ng));\n  while (std::abs(ok - ng)\
    \ > 1) {\n    long long mid = (ok + ng) / 2;\n    if (f(mid))\n      ok = mid;\n\
    \    else\n      ng = mid;\n  }\n  return ok;\n}\n\nauto check = [&](long double\
    \ x) -> bool { return; };\nlong double ok = $OK$;\nlong double ng = $NG$;\nwhile\
    \ (abs(ok - ng) > 1e-9) {\n  long double mid = (ok + ng) / 2;\n  if (check(mid))\
    \ {\n    ok = mid;\n  } else {\n    ng = mid;\n  }\n}"
  dependsOn: []
  isVerificationFile: false
  path: binary-search.h
  requiredBy: []
  timestamp: '2023-07-23 00:00:15+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: binary-search.h
layout: document
redirect_from:
- /library/binary-search.h
- /library/binary-search.h.html
title: binary-search.h
---