const addon = require('./build/Release/addon');

const obj = new addon.usbdevWrap(10);

console.log(obj.plusOne());
console.log(obj.plusOne());
console.log(obj.plusOne());
console.log(obj.plusOne());
console.log(obj.plusOne());
console.log(obj.plusOne());

console.log(obj.openDeviceWrap());
console.log(obj.serviceSlotWrap()); 

/*const obj2 = new addon.videostreamingWrap(20);

console.log(obj2.plusOne());
console.log(obj2.serviceSlotWrap());*/