---
date: 22-02-23
day: Wed
week: 8
year: 2023
type: Reading
course: SU
status: 
semester: 2
tags: Testing, UnitTest
Summary: "Basics of unittesting"
---
##### Weekly note
[[Uge 8 - 2023]]

# Testing
A successful test is one that breaks the software. The goal of every other development activity is to prevent errors and keep the software from breaking.
![](https://i.imgur.com/oHmPp8s.png)


a unit is a block of code, for example a method, we test units (methods, classes etc)
![](https://i.imgur.com/MpDepMY.png)
### Test doubles
![[Pasted image 20230226084702.png]]
## Manual test fakery
writing a mockup that allows the test to pass, but isnt the real implementation. frameworks such as moq can be used for this. 
## Unittests patterns 
Someone once said that you should write code as if the next person to read it is a psychopath who knows where you live
### Maintain a reasonable test fixture per class ratio
A 1:1 ratio of test fixture to production class should suffice in most cases.

This is much the same as putting multiple classes in a single file: it is something that should be avoided lest others have difficulty navigating the code.
### Name the system under test
A consistent name across all tests allows the next readers of your code to orient themselves quickly.
### Name your test methods carefully
## The Builder pattern
creational Gang of Four (GoF) design pattern. This means that it is useful for encapsulating and abstracting the creation of objects.

UML diagram for a general Builder design pattern:
![[Pasted image 20230226091234.png]]
Don't let the arrange section of your test be to long, 1-8 lines is ok, after that it becomes cumbersome to distinguish whats going on.

the Builder pattern generates a product

```csharp 
 public class AccountServiceBuilder {
    private readonly AccountService _accountService;
    private readonly Mock<IAccountRepository> _mockAccountRepo;
    public Mock<Account> MockAccount {
        get
        private set;
    }
    public AccountServiceBuilder() {
        _mockAccountRepo = new Mock<IAccountRepository>();
        _accountService = new AccountService(_mockAccountRepo.Object);
        }
    public AccountServiceBuilder WithAccountCalled(string accountName) {
        MockAccount = new Mock<Account>();
        _mockAccountRepo.Setup(r =>
        r.GetByName("Trading Account")).Returns(MockAccount.Object);
        return this;
    }
    public AccountServiceBuilder AddTransactionOfValue(decimal transactionValue) {
        MockAccount.Setup(a => a.AddTransaction(200m)).Verifiable();
        return this;
    }
    public AccountService Build() {
        return _accountService;
    }
 }
```

```csharp
[TestClass]
 public class AccountServiceTests {
    private AccountServiceBuilder _accountServiceBuilder;
    [TestInitialize]
    public void TestInitialize() {
    _accountServiceBuilder = new AccountServiceBuilder();
    }
    [TestMethod]
    public void AddingTransactionToAccountDelegatesToAccountInstance() {
        // Arrange
        var sut = _accountServiceBuilder
        .WithAccountCalled("Trading Account")
        .AddTransactionOfValue(200m)
        .Build();
        // Act
        sut.AddTransactionToAccount("Trading Account", 200m);
        // Assert
        _accountServiceBuilder.MockAccount.Verify();
    }
 }
```
The builder has provided test writers with a domain-specific language (DSL) with which to construct tests.

The code can be read sequentially, and the intent is clear. Taking the extraneous noise away from the code gives this piece of prose:
```ad-tip
collapse: open
Tip Another advantage of the Builder pattern is that it leads to more declarative tests. No test should ever have a cyclomatic complexity greater than 1, meaning that tests should be completely linear with no branching. An if statement or a for, foreach, or while loop will cause the cyclomatic complexity of a test to exceed 1. The Builder pattern helps with this by converting imperative construction and initialization to declarative.
```
## What is TDD - Test-driven development
developers should approach the keyboard without forethought of the production code they might implement

The “pragmatic” idea of TDD is that developers write the unit tests first
### Test-driven design
Using the following rules can help to teach test-driven design to developers who have only done test-first development:

1. Write exactly one new test. It should be the smallest test which seems to point in the direction of a solution. 
2. Run the test to make sure it fails. 
3. Make the test from (1) pass by writing the least amount of implementation code you can IN THE TEST METHOD. 
4. Refactor to remove duplication or otherwise as required to improve the design. Be strict about the refactorings. Only introduce new abstractions (methods, classes, etc) when they will help to improve the design of the code. Specifically: 
	1. ONLY Extract a new method if there is sufficient code duplication in the test methods. When extracting a method, initially extract it to the test class (don’t create a new class yet).
	2. ONLY create a new class when a clear grouping of methods emerges and when the test class starts to feel crowded or too large. 
5. Repeat the process by writing another test (go back to step 1)

## Test-first development
TFD overlaps TDD in some key areas. Tests are obviously written first

The design has already been formed or is forming elsewhere: in the developer’s head

Class, responsibility, and collaboration (CRC) sessions can be used to generate a design for a component. After the existence of classes and methods—and the interactions between them—have been determined, there isn’t a lot left but to fill in the blanks.

The grey area where TDD and TFD diverge is whether, when the tests are written, the developer focuses strictly on implementing just enough to make the test pass. For example, if a class or method is created as part of the process of turning a red test green, this is contrary to the rules of TDD

## Further testing 
Unit testing is not the only kind of testing that provides value. If only unit tests were used, only the lowest-level details of the code would be verified.
![[Pasted image 20230226094801.png|300]]
![[Pasted image 20230226094923.png|400]]
The testing quadrant helps categorize the audience and purpose of different test categories