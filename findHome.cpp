// input-- an list of maps where each index represents a house block and map contains mapping of different buildings 
// whether they are present or not in that house block and another list of buildings that are essential
// output-- index of the house which has the minimum farthest distance to travel to acess all the essential buildings
// example--
// input->
// blocks={{{"school",true},{"market",false},{"gym",false}},{{"school",false},{"market",false},{"gym",true}},{{"school",true},{"market",false},{"gym",true}},
//           {{"school",true},{"market",false},{"gym",false}},{{"school",true},{"market",true},{"gym",false}}}
// essential={"school","market","gym"}
// output->
// 3
// beacuse house block with index 3 has the minimum farthest distance to acess all essential buildings
// i.e 1 in this case
