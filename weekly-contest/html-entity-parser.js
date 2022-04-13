/**
 * @param {string} text
 * @return {string}
 */
/* var obj = {
    '&quot;': '"',
    '&apos;': '\'',
    '&amp;': '&',
    '&gt;': '>',
    '&lt;': '<',
    '&frasl;': '/',

}; */
var entityParser = function (text) {
    let s;
    s = text.replace(/\&quot\;/g, '"');
    s = s.replace(/\&apos\;/g, "'");
    s = s.replace(/\&amp\;/g, '&');
    s = s.replace(/\&gt\;/g, '>');
    s = s.replace(/\&lt\;/g, '<');
    s = s.replace(/\&frasl\;/g, '/');
    return s;
};