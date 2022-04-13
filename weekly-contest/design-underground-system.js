
var UndergroundSystem = function() {
    this.checkInArr = [];
    this.checkOutArr = [];
};

/** 
 * @param {number} id 
 * @param {string} stationName 
 * @param {number} t
 * @return {void}
 */
UndergroundSystem.prototype.checkIn = function(id, stationName, t) {
    this.checkInArr.push({ id, stationName, t });
};

/** 
 * @param {number} id 
 * @param {string} stationName 
 * @param {number} t
 * @return {void}
 */
UndergroundSystem.prototype.checkOut = function(id, stationName, t) {
    this.checkOutArr.push({ id, stationName, t });
};

/** 
 * @param {string} startStation 
 * @param {string} endStation
 * @return {number}
 */
UndergroundSystem.prototype.getAverageTime = function(startStation, endStation) {
    let count = 0;
    let time = 0;
    for (let obj of this.checkInArr) {
        if (obj.stationName == startStation) {
            for (let out of this.checkOutArr) {
                if (out.id == obj.id && out.stationName == endStation) {
                    ++count;
                    time += out.t - obj.t;
                }
            }
        }
    }
    return time / count;
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * var obj = new UndergroundSystem()
 * obj.checkIn(id,stationName,t)
 * obj.checkOut(id,stationName,t)
 * var param_3 = obj.getAverageTime(startStation,endStation)
 */