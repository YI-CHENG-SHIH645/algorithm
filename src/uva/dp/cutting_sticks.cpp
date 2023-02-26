// UVA 10003
// Created by 施奕成 on 2022/7/31.
//
#include "dp.h"

void cutting_sticks() {
//    std::istream::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
    int l, n;
    while(cin >> l && l) {
      cin >> n;

      int wood[n + 2];
      wood[0] = 0;
      wood[n + 1] = l;
      for (int i = 1; i < n + 1; ++i) cin >> wood[i];

      int dp[n + 2][n + 2], tmp;
      memset(dp, 0, sizeof(dp));
      // wl : window length
      // sp : starting point
      // bp : between (non-inclusive) point
      for (int wl = 2; wl <= n + 1; ++wl) {
        for (int sp = 0; (sp + wl) <= n + 1; ++sp) {
          for (int bp = sp + 1; bp < (sp + wl); ++bp) {
            tmp = dp[sp][bp] + dp[bp][sp + wl] + wood[sp + wl] - wood[sp];
            if ((dp[sp][sp + wl] == 0) || (tmp < dp[sp][sp + wl]))
              dp[sp][sp + wl] = tmp;
          }
        }
      }
      cout << "The minimum cutting is " << dp[0][n + 1] << "." << endl;
    }
}
