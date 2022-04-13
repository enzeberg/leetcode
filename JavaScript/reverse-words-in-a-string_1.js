/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    const words = s.split(' ');
    const n = words.length;
    let ans = '';
    for (let i = n - 1; i >= 0; --i) {
        if (words[i]) {
            ans += words[i];
            ans += ' ';
        }
    }
    return ans.trim();
};