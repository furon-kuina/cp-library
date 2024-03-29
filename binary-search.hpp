#include <cmath>

// 単調なfについて、f(x) = trueとなる最小/最大のxを求める
template <typename F>
long long BinarySearch(long long ok, long long ng, F &&f) {
  assert(f(ok));
  assert(!f(ng));
  while (std::abs(ok - ng) > 1) {
    long long mid = (ok + ng) / 2;
    if (f(mid))
      ok = mid;
    else
      ng = mid;
  }
  return ok;
}