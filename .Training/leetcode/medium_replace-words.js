var replaceWords = function(dictionary, sentence) {
    dictionary.sort((a, b) => a.length - b.length);
    let words = sentence.split(' ');
    for (let i = 0; i < words.length; i++) {
        for (let root of dictionary) {
            if (words[i].startsWith(root)) {
                words[i] = root;
                break;
            }
        }
    }
    return words.join(' ');
};

console.log(replaceWords(["cat","bat","rat"], "the cattle was rattled by the battery"));