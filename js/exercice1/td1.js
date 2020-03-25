/**
 * Created by canals on 25/01/2017.
 */
'use strict'


/* exercice 1.1 */

function min(a,b) {
  return (a <b)? a : b;
}

function max = (a,b) => {
	if (a > b)
    return a;
else
	return b;
}

//console.log( min(3, 4));
console.log("Minimum entre 2 et 8 :" + min(2, 8));
console.log("Minimum entre 8 et 2 :" + min(8, 2));
console.log("Maximum entre 2 et 8 :" + min(2, 8));
console.log("Maximum entre 8 et 2 :" + min(8, 2));