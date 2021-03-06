#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  int n, m, idx, max = 0;
  vector<int> game;
  cin >> n >> m;
  for(int i =0; i < n; i++) {
    cin >> idx;
    game.push_back(idx);
  }
  
  sort(game.begin(), game.end());

  for(int i = n-1; i >= 0; i--) {
    for(int j = i-1; j >= 0; j--) {
      for(int k = j - 1; k >= 0; k--) {
        if(game[i] + game[j] + game[k] <= m)
        {
            if (max < game[i] + game[j] + game[k])
              max = game[i] + game[j] + game[k];
        }
      }
    }
  }

  cout << max << endl;
  return 0;
}