typedef uint8_t test_t @combine("outerTest");

interface TestWrapper {

  command test_t doSomething();

}
