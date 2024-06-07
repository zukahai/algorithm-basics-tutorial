var commonChars = function(words) {
    let ans = [];
    for (let c = 'a'; c <= 'z'; c = String.fromCharCode(c.charCodeAt(0) + 1)){
        let minCount = -1;
        for (let word of words) {
            let wordCount = 0;
            for (let i = 0; i < word.length; i++) {
                if (word[i] === c) {
                    wordCount++
                }
            }
            minCount = (minCount === -1) ? wordCount : Math.min(minCount, wordCount);
        }
        if (minCount) {
            ans = ans.concat(Array(minCount).fill(c));
        }
    }
    return ans;
};

console.log(commonChars(["bella","label","roller"]));