/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function (s) {
    const words = s.split(' ').filter(item => item.length > 0);
    const n = words.length;
    let ans = '';
    for (let i = n - 1; i > 0; --i) {
        ans += words[i];
        ans += ' ';
    }
    if (n > 0) {
        ans += words[0];
    }
    return ans;
};