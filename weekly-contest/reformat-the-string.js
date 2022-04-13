/**
 * @param {string} s
 * @return {string}
 */
var reformat = function (s) {
    const letters = [];
    const nums = [];
    const len = s.length;
    for (let i = 0; i < len; ++i) {
        if (isNaN(parseInt(s[i]))) {
            letters.push(s[i]);
        } else {
            nums.push(s[i]);
        }
    }
    let ans = '';
    const lettersLen = letters.length;
    const numsLen = nums.length;
    console.log(lettersLen);
    console.log(numsLen);
    if (Math.abs(lettersLen - numsLen) <= 1) {
        let longer, shorter;
        if (lettersLen >= numsLen) {
            longer = letters;
            shorter = nums;
        } else {
            longer = nums;
            shorter = letters;
        }
        const longerLen = longer.length;
        const shorterLen = shorter.length;
        let i = 0;
        for (; i < shorterLen; ++i) {
            ans += longer[i];
            ans += shorter[i];
        }
        if (i < longerLen) {
            ans += longer[i];
        }
    }
    return ans;
};