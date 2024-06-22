carBase: addNewCar.o countCars.o loadCarData.o lookForCarId.o lookForCarModelType.o noMoreCars.o oneLessCar.o printOne.o sortCarId.o printAll.o mainA3.o
	gcc addNewCar.o countCars.o loadCarData.o lookForCarId.o lookForCarModelType.o noMoreCars.o oneLessCar.o printOne.o sortCarId.o printAll.o mainA3.o -o bin/carBase
addNewCar.o: src/addNewCar.c include/headerA3.h
	gcc -Wall -std=c99 -Wall -c src/addNewCar.c
countCars.o: src/countCars.c include/headerA3.h
	gcc -Wall -std=c99 -Wall -c src/countCars.c
loadCarData.o: src/loadCarData.c include/headerA3.h
	gcc -Wall -std=c99 -Wall -c src/loadCarData.c
lookForCarId.o: src/lookForCarId.c include/headerA3.h
	gcc -Wall -std=c99 -Wall -c src/lookForCarId.c
lookForCarModelType.o: src/lookForCarModelType.c include/headerA3.h
	gcc -Wall -std=c99 -Wall -c src/lookForCarModelType.c
noMoreCars.o: src/noMoreCars.c include/headerA3.h
	gcc -Wall -std=c99 -Wall -c src/noMoreCars.c
oneLessCar.o: src/oneLessCar.c include/headerA3.h
	gcc -Wall -std=c99 -Wall -c src/oneLessCar.c
printOne.o: src/printOne.c include/headerA3.h
	gcc -Wall -std=c99 -Wall -c src/printOne.c
sortCarId.o: src/sortCarId.c include/headerA3.h
	gcc -Wall -std=c99 -Wall -c src/sortCarId.c
printAll.o: src/printAll.c include/headerA3.h
	gcc -Wall -std=c99 -Wall -c src/printAll.c
mainA3.o: src/mainA3.c include/headerA3.h
	gcc -Wall -std=c99 -Wall -c src/mainA3.c
clean:
	rm -f *.o bin/carBase