// abcd -> abbccd
// abbccd <- a...d

bienDoi = (s) => {
    if (s.length % 2 == 1)
        return "-1";
    let ans = s[0];
    for (let i = 1; i < s.length - 1; i += 2) {
        if (s[i] != s[i + 1])
            return "-1";
        ans += s[i];
    }
    ans += s[s.length - 1];
    return ans;
}

console.log(bienDoi("12233112"));