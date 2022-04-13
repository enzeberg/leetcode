/**
 * @param {string} S
 * @return {string}
 */
var removeDuplicates = function(S) {
    let i = 1;
    while (i < S.length) {
      if (S[i] === S[i - 1]) {
        S = S.substr(0, i - 1).concat(S.substr(i + 1));
        i = 1;
      } else {
        i++;
      }
    }
    return S;
};