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
  bundledCode: "#line 1 \"compress.h\"\ntemplate<typename T = long long>\nclass Compress\
    \ {\n    std::vector<T> vec_;\n    std::vector<T> values_;\n    std::vector<long\
    \ long> rank_;\n\n    explicit Compress(const std::vector<T> &vec) : vec_(vec)\
    \ {\n        int n = (int) vec_.size();\n        values_ = vec;\n        rank_.resize(n);\n\
    \        std::sort(values_.begin(), values_.end());\n        values_.erase(std::unique(values_.begin(),\
    \ values_.end()), values_.end());\n        for (int i = 0; i < n; ++i) {\n   \
    \         rank_[i] = std::lower_bound(values_.begin(), values_.end(), vec[i])\
    \ - values_.begin();\n        }\n    }\n\n    std::vector<T> GetValueList() {\n\
    \        return values_;\n    }\n\n    std::vector<long long> GetRankList() {\n\
    \        return rank_;\n    }\n\n    std::pair<std::vector<T>, std::vector<long\
    \ long> > GetResult() {\n        return {values_, rank_};\n    }\n\n    int GetRank(T\
    \ x) {\n        auto itr = std::lower_bound(values_.begin(), values_.end(), x);\n\
    \        assert(*itr == x);\n        return itr - values_.begin();\n    }\n};\n"
  code: "template<typename T = long long>\nclass Compress {\n    std::vector<T> vec_;\n\
    \    std::vector<T> values_;\n    std::vector<long long> rank_;\n\n    explicit\
    \ Compress(const std::vector<T> &vec) : vec_(vec) {\n        int n = (int) vec_.size();\n\
    \        values_ = vec;\n        rank_.resize(n);\n        std::sort(values_.begin(),\
    \ values_.end());\n        values_.erase(std::unique(values_.begin(), values_.end()),\
    \ values_.end());\n        for (int i = 0; i < n; ++i) {\n            rank_[i]\
    \ = std::lower_bound(values_.begin(), values_.end(), vec[i]) - values_.begin();\n\
    \        }\n    }\n\n    std::vector<T> GetValueList() {\n        return values_;\n\
    \    }\n\n    std::vector<long long> GetRankList() {\n        return rank_;\n\
    \    }\n\n    std::pair<std::vector<T>, std::vector<long long> > GetResult() {\n\
    \        return {values_, rank_};\n    }\n\n    int GetRank(T x) {\n        auto\
    \ itr = std::lower_bound(values_.begin(), values_.end(), x);\n        assert(*itr\
    \ == x);\n        return itr - values_.begin();\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: compress.h
  requiredBy: []
  timestamp: '2023-03-23 16:34:58+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: compress.h
layout: document
redirect_from:
- /library/compress.h
- /library/compress.h.html
title: compress.h
---