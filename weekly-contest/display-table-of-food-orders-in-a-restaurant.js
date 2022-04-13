/**
 * @param {string[][]} orders
 * @return {string[][]}
 */
var displayTable = function(orders) {
    var tables = {};
    
    const foods = [];
    orders.forEach((order) => {
        const tableNumber = order[1];
        const foodItem = order[2];
        if (!foods.includes(foodItem)) {
            foods.push(foodItem);
        }
        if (tables[tableNumber]) {
            if (tables[tableNumber][foodItem]) {
                ++tables[tableNumber][foodItem];
            } else {
                tables[tableNumber][foodItem] = 1;
            }
        } else {
            tables[tableNumber] = {};
            tables[tableNumber][foodItem] = 1;
        }
    });
    // console.log(tables);
    foods.sort();
    const ans = [];
    Object.keys(tables).forEach(tableNumber => {
        let line = [];
        line.push(tableNumber);
        foods.forEach(foodItem => {
            if (tables[tableNumber][foodItem]) {
                line.push((tables[tableNumber][foodItem]).toString());
            } else {
                line.push('0');
            }
        });
        ans.push(line);
    });
    ans.sort((line1, line2) => parseInt(line1[0]) - parseInt(line2[0]));
    const head = [];
    head.push('Table');
    foods.forEach(foodItem => head.push(foodItem));
    ans.splice(0, 0, head);
    return ans;
};