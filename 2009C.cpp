    #include <bits/stdc++.h>
    using namespace std;
    /*
     *           ^__^
     *           (oo)\_______
     *           (__)\       )\/\
     *               ||----w |
     *               ||     ||
     */

    void solition() {
        long long int x,y,k,ans = 0;
        scanf("%lld %lld %lld", &x,&y,&k);
        ans += 2 * max( (x+k-1)/k, (y+k-1)/k );
        if((x+k-1)/k > (y+k-1)/k) ans--;
        printf("%lld\n",ans);
    }

    int main() {
        int t;
        scanf("%d", &t);
        cin.ignore();
        while (t--) solition();
        return 0;
    }
