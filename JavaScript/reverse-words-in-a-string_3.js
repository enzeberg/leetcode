/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    const words = s.trim().split(/\s+/);
    let ans = '';
    for (let i = words.length - 1; i > 0; --i) {
        ans += words[i];
        ans += ' ';
    }
    if (words.length > 0) {
        ans += words[0];
    }
    return ans;
};