### Да се реализира, програма която да следи колко и какви работници е наела фирма:
### Да се реализира клас, описващ работник чрез име, позиция (няма лимит на дължината на низовете) и заплата. Реализирайте конструктор с параметри и подразбиране (в едно), копи конструктор, предефиниран оператор =, деструктор (канонично представяне на клас), set/get методи. Класът да поддържа фунцкията:
```c++
void print() const - принтира данните за работника на стандартния изход
```
### Да се реализира клас, описващ фирма чрез име (низ с променлива дължина) и саморазширяващ се масив от работници, както и каквито други променливи са необохдими за работата с масива (те са две - помислете). Класът да бъде в каноничен вид (голяма четворка отново) + set/get методи. Помислете и за това какво е смислено да инициализира конструкторът и за какво е смислено да има set/get методи. Класът да поддържа функциите:
```c++
void print() const - принтира името на фирмата, общия брой работници и данните за всеки от рабониците (по един на ред)
void sort() - сортира работниците в масива по заплата.
void addWorker(Worker const& newWorker) - добавя един работник в края на масива.
```
### Ако масивът е препълнен, да удвоява капацитета му и да добави работника пак в края (примерно 20 капацитет и 20 работника => 40 капацитет и 21 работника). За удобство си напишете void resize(int newCapacity) в private частта като помощна функция
```c++
void removeByName(char const* name) - Премахва първия срещнат работник с даденото име. Не е необходимо да запази реда в масива.
```
### Ако масивът от работници има 4 пъти по голям капацитет отколкото е нужно, да се намалява двойно капацитета (примерно капацитет 80 и 15 работника => капацитет 40 и 15 работника) (помислете къде трябва да правите тази проверка). Демонстрирайте работата на класовете във функция void testCompany(), извиквайки я в main метода.