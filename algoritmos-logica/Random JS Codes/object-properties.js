const someObj = {
    propName: "John"
};


function propPrefix(str) {
    const s = "prop";
    return s + str;
}


const someProp = propPrefix("Name");
console.log(someObj[someProp]);


/*
###############################################################################################
###############################################################################################
###############################################################################################
*/

// Setup
function phoneticLookup(val) {
    let result = "";

    // switch (val) {
    //     case "alpha":
    //         result = "Adams";
    //         break;
    //     case "bravo":
    //         result = "Boston";
    //         break;
    //     case "charlie":
    //         result = "Chicago";
    //         break;
    //     case "delta":
    //         result = "Denver";
    //         break;
    //     case "echo":
    //         result = "Easy";
    //         break;
    //     case "foxtrot":
    //         result = "Frank";
    // }

    const lookup = {
        alpha: "Adams",
        bravo: "Boston",
        charlie: "Chicago",
        delta: "Denver",
        echo: "Easy",
        foxtrot: "Frank"
    };

    result = lookup[val];

    return result;
}

console.log(phoneticLookup("charlie"));

/*
###############################################################################################
###############################################################################################
###############################################################################################
*/

const recordCollection = {
    2548: {
        albumTitle: 'Slippery When Wet',
        artist: 'Bon Jovi',
        tracks: ['Let It Rock', 'You Give Love a Bad Name']
    },
    2468: {
        albumTitle: '1999',
        artist: 'Prince',
        tracks: ['1999', 'Little Red Corvette']
    },
    1245: {
        artist: 'Robert Palmer',
        tracks: []
    },
    5439: {
        albumTitle: 'ABBA Gold'
    }
};


function updateRecords(records, id, prop, value) {
    if (prop != "tracks" && value != "") {
        records[id][prop] = value;
    } else if (prop == "tracks" && !records[id].hasOwnProperty("tracks")) {
        records[id][prop] = [];
        records[id][prop].push(value);
    } else if (prop == "tracks" && value != "") {
        records[id][prop].push(value);
    } else if (value == "") {
        delete records[id][prop];
    }

    return records;
}

console.log(updateRecords(recordCollection, 5439, 'artist', 'ABBA'));

/*
###############################################################################################
###############################################################################################
###############################################################################################
*/

function multiplyAll(arr) {
    let product = 1;

    for (let i = 0; i < arr.length; i++) {
        for (let j = 0; j < arr[i].length; j++) {
            product *= arr[i][j];
        }
    }

    return product;
}
  
console.log(multiplyAll([[1, 2], [3, 4], [5, 6, 7]]));
