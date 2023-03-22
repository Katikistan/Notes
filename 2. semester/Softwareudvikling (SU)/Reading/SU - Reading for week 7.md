---
date: 11-02-23
day: Sat
week: 7
year: 2023
type: Reading
course: SU
status: 
semester: 2
tags:
Summary: ""
---
##### Weekly note
[[Uge 7 - 2023]]

# CS Chapter 3
C# demands that all program logic be contained within a type definition (recall from Chapter 1 that type is a general term referring to a member of the set {class, interface, structure, enumeration, delegate}). **Unlike many other languages, in C# it is not possible to create global functions or global points of data. Rather, all data members and all methods must be contained within a type definition.**
![](https://i.imgur.com/RPE9nWt.png)
![](https://i.imgur.com/jP3DLAp.png)
![](https://i.imgur.com/m4wwgN5.png)

![](https://i.imgur.com/1CPzNqN.png)
All intrinsic data types support what is known as a default constructor

```csharp
static void LocalVarDeclarations() {
	Console.WriteLine("=> Data Declarations:");
	// Local variables are declared and initialized as follows:
	// dataType varName = initialValue;
	int myInt = 0;
	string myString;
	myString = "This is my character data";
	// Declare 3 bools on a single line.
	bool b1 = true, b2 = false, b3 = b1;
	// Use System.Boolean data type to declare a bool.
	System.Boolean b4 = false;
	Console.WriteLine("Your data: {0}, {1}, {2}, {3}, {4}, {5}",
		myInt, myString, b1, b2, b3, b4);
	Console.WriteLine();
}
```

```csharp
static void NewingDataTypesWith9() {
	Console.WriteLine("=> Using new to create variables:");
	bool b = new(); // Set to false.
	int i = new(); // Set to 0.
	double d = new(); // Set to 0.
	DateTime dt = new(); // Set to 1/1/0001 12:00:00 AM
}
```
The class hierarchy of system types: 
![|350](https://i.imgur.com/kWGrkmg.png)
### System.Char

```csharp
static void CharFunctionality()
{
	Console.WriteLine("=> char type Functionality:");
	char myChar = 'a';
	Console.WriteLine("char.IsDigit('a'): {0}", char.IsDigit(myChar));
	Console.WriteLine("char.IsLetter('a'): {0}", char.IsLetter(myChar));
	Console.WriteLine("char.IsWhiteSpace('Hello There', 5): {0}",
	char.IsWhiteSpace("Hello There", 5));
	Console.WriteLine("char.IsWhiteSpace('Hello There', 6): {0}",
	char.IsWhiteSpace("Hello There", 6));
	Console.WriteLine("char.IsPunctuation('?'): {0}",
	char.IsPunctuation('?'));
	Console.WriteLine();
}
```
### Parsing Values from String Data
parses string data into some other type, can be useful for converting user input into valueable data.
```csharp
static void ParseFromStrings()
{
	Console.WriteLine("=> Data type parsing:");
	bool b = bool.Parse("True");
	Console.WriteLine("Value of b: {0}", b);
	double d = double.Parse("99.884");
	Console.WriteLine("Value of d: {0}", d);
	int i = int.Parse("8");
	Console.WriteLine("Value of i: {0}", i);
	char c = Char.Parse("w");
	Console.WriteLine("Value of c: {0}", c);
	Console.WriteLine();
}
```
#### TryParse
The `TryParse()` statement takes an `out` parameter (the out modifier is covered in detail in [[#CS Chapter 4|Chapter 4]]) and returns a bool if the parsing was successful.

```csharp 
static void ParseFromStringsWithTryParse()
{
	Console.WriteLine("=> Data type parsing with TryParse:");
	if (bool.TryParse("True", out bool b))
	{
	Console.WriteLine("Value of b: {0}", b);
	}
	else
	{
	Console.WriteLine("Default value of b: {0}", b);
	}
}
```
### System.DateTime and System.TimeSpan
```csharp
static void UseDatesAndTimes()
{
	// This constructor takes (year, month, day).
	DateTime dt = new DateTime(2015, 10, 17);
	// What day of the month is this?
	Console.WriteLine("The day of {0} is {1}", dt.Date, dt.DayOfWeek);
	// Month is now December.
	dt = dt.AddMonths(2);
	Console.WriteLine("Daylight savings: {0}", dt.IsDaylightSavingTime());
	// This constructor takes (hours, minutes, seconds).
	TimeSpan ts = new TimeSpan(4, 30, 0);
	Console.WriteLine(ts);
	// Subtract 15 minutes from the current TimeSpan and
	// print the result.
	Console.WriteLine(ts.Subtract(new TimeSpan(0, 15, 0)));
	DateOnly d = new DateOnly(2021,07,21);
	Console.WriteLine(d);
	TimeOnly t = new TimeOnly(13,30,0,0);
	Console.WriteLine(t);
}
```
## System.Numerics
defines a structure named BigInteger. used when you need to represent humongous numerical values, which are not constrained by a fixed upper or lower limit.
```ad-note
System.Numerics namespace defines a second structure named Complex, which allows you to model mathematically complex numerical data (e.g., imaginary units, real data, hyperbolic tangents).

```

```csharp
using System.Numerics;
static void UseBigInteger() {
BigInteger biggy = BigInteger.Parse("9999999999999999999999999999999999999999999999");
}
```
## Binary literals - digit seperator 
you can use `_` to seperate digits, this can used with binary literals too:
16:  0b_0001_0000
## Strings
strings are arrays of char. 

```csharp
static void StringConcatenation()
{
	string s1 = "Programming the ";
	string s2 = "PsychoDrill (PTP)";
	string s3 = s1 + s2; //emits call to String.Concat()
}
```
![](https://i.imgur.com/j6OTRyf.png)
![](https://i.imgur.com/aHxDdZb.png)
![](https://i.imgur.com/MRI2bSu.png)
```csharp
static void StringEqualitySpecifyingCompareRules()
{
	Console.WriteLine("=> String equality (Case Insensitive:");
	string s1 = "Hello!";
	string s2 = "HELLO!";
	Console.WriteLine("s1 = {0}", s1);
	Console.WriteLine("s2 = {0}", s2);
	Console.WriteLine();
	// Check the results of changing the default compare rules.
	Console.WriteLine("Default rules: s1={0},s2={1}s1.Equals(s2): {2}", 
    s1, s2, s1.Equals(s2));
	Console.WriteLine("Ignore case: s1.Equals(s2, StringComparison.OrdinalIgnoreCase): {0}",
	s1.Equals(s2, StringComparison.OrdinalIgnoreCase));
	Console.WriteLine("Ignore case, Invariant Culture: s1.Equals(s2, StringComparison.InvariantCultureIgnoreCase): {0}", s1.Equals(s2, StringComparison.InvariantCulture
	IgnoreCase));
	Console.WriteLine();
	Console.WriteLine("Default rules: s1={0},s2={1} s1.IndexOf(\"E\"): {2}", s1, s2, s1.IndexOf("E"));
	Console.WriteLine("Ignore case: s1.IndexOf(\"E\", StringComparison.OrdinalIgnoreCase): {0}", s1.IndexOf("E", StringComparison.OrdinalIgnoreCase));
	Console.WriteLine("Ignore case, Invariant Culture: s1.IndexOf(\"E\", StringComparison.InvariantCultureIgnoreCase): {0}", s1.IndexOf("E", StringComparison.InvariantCulture
	IgnoreCase));
	Console.WriteLine();
}
```
strings are immutable:

```csharp
static void StringsAreImmutable() {
	Console.WriteLine("=> Immutable Strings:\a");
	// Set initial string value.
	string s1 = "This is my string.";
	Console.WriteLine("s1 = {0}", s1);
	// Uppercase s1?
	string upperString = s1.ToUpper();
	Console.WriteLine("upperString = {0}", upperString);
	// Nope! s1 is in the same format!
	Console.WriteLine("s1 = {0}", s1);
}
//output: 
// s1 = This is my string.
// upperString = THIS IS MY STRING.
// s1 = This is my string.
// you are returned a copy of the string in a modified format.
```

``` csharp
static void StringsAreImmutable2()
{
	Console.WriteLine("=> Immutable Strings 2:\a");
	string s2 = "My other string";
	s2 = "New string value";
	Console.WriteLine(s2);
}
```
overstående bliver compiled således:

```CIL
.method assembly hidebysig static void '<<Main>$>g__StringsAreImmutable2()|0,8'() cil managed
{
// Code size 32 (0x20)
.maxstack 1
.locals init (string V_0)
IL_0000: nop
...
IL_000c: ldstr "My other string"
IL_0011: stloc.0
IL_0012: ldstr "New string value"
IL_0017: stloc.0
IL_0018: ldloc.0
IL_0013: nop
...
IL_0014: ret
} // end of method Program::StringsAreImmutable2

The previous string object that contained the value "My other string" will eventually be garbage collected.
```
the string class can be inefficient and result in bloated code if misused, especially when performing string concatenation or working with huge amounts of text data. If you need to represent basic character data such as a US Social Security number, first or last names, or simple bits of text used within your application, the string class is the perfect choice. 

instead for text use the stringbuilder method in the namespace text
#### Using the System.Text.StringBuilder Type
when you call members of this type, you are directly modifying the object’s internal character data, not obtaining a copy of the data in a modified format.

Her importeres Text fra system namespaces og vi kan du lave en instance af en stringbuilder `sb` med `new` 
```csharp
using System.Text;
static void FunWithStringBuilder()
{
	Console.WriteLine("=> Using the StringBuilder:");
	StringBuilder sb = new StringBuilder("**** Fantastic Games ****");
	sb.Append("\n");
	sb.AppendLine("Half Life");
	sb.AppendLine("Morrowind");
	sb.AppendLine("Deus Ex" + "2");
	sb.AppendLine("System Shock");
	Console.WriteLine(sb.ToString());
	sb.Replace("2", " Invisible War");
	Console.WriteLine(sb.ToString());
	Console.WriteLine("sb has {0} chars.", sb.Length);
	Console.WriteLine();
}
// holder by default en string af 16 char, men kan udvides med ekstra arguemnt til contructoren:
// Make a StringBuilder with an initial size of 256.
StringBuilder sb = new StringBuilder("**** Fantastic Games ****", 256);
```
if you append more characters than the specified limit, the StringBuilder object will copy its data into a new instance and grow the buffer by the specified limit.
## Narrowing and Widening (Data Type Conversions)
C# will allow for type conversions if they dont cause any loss of data, otherwise they have to be made explicitly.

```csharp
Console.WriteLine("***** Fun with type conversions *****");
// Add two shorts and print the result.
short numb1 = 9, numb2 = 10;
Console.WriteLine("{0} + {1} = {2}",
numb1, numb2, Add(numb1, numb2));
Console.ReadLine();
static int Add(int x, int y)
{
	return x + y;
}
```
Here we are allowed to convert a short into an int. that is because there is no possibility for loss of data.  the max value of a short (32,767) is within range of the max range of an int (2,147,483,647) therefore the compiler will implicitly convert the short to an int. 

*widening* is the term used to define an implicit upward cast that does not result in a loss of data.
``` csharp
// Compiler error below!
short numb1 = 30000, numb2 = 30000;
short answer = Add(numb1, numb2);
Console.WriteLine("{0} + {1} = {2}",
numb1, numb2, answer);
Console.ReadLine();
// error: Cannot implicitly convert type 'int' to 'short'. An explicit conversion exists (are you missing a cast?)
```
this implicit upward cast can cause some problems, here we overflow the max value of a short.

the CoreCLR was unable to apply a narrowing operation. narrowing is the opposite of widening, in that a larger value is stored within a smaller data type variable. Narrowing operations always return an error, even if you reason there should be no loss of data:

```csharp
static void NarrowingAttempt()
{
	byte myByte = 0;
	int myInt = 200;
	myByte = myInt;
	Console.WriteLine("Value of myByte: {0}", myByte);
}
```
here the int is within the range of a byte but nevertheless an error is thrown. that is because c# priorities type safety. If we want to deal with the potential loss of data we can use an explicit cast using the C# casting operator, ().

```csharp
short numb1 = 30000, numb2 = 30000;
// Explicitly cast the int into a short (and allow loss of data).
short answer = (short)Add(numb1, numb2);
Console.WriteLine("{0} + {1} = {2}",
numb1, numb2, answer);
NarrowingAttempt();
Console.ReadLine();
static int Add(int x, int y)
{
return x + y;
}
static void NarrowingAttempt()
{
	byte myByte = 0;
	int myInt = 200;
	// Explicitly cast the int into a byte (no loss of data).
	myByte = (byte)myInt;
	Console.WriteLine("Value of myByte: {0}", myByte);
}
// output:
30000 + 30000 = -5536
Value of myByte: 200
```
here we see that adding the two shorts within the code, the end result is completely unacceptable (30,000 + 30,000 = –5536?).

if loss of data is always unacceptable, use the `checked` and `unchecked` keywords to ensure data loss does not escape undetected.
### Using the checked Keyword
When you wrap a statement (or a block of statements) within the scope of the `checked` keyword, the C# compiler emits additional CIL instructions that test for overflow conditions that may result when adding, multiplying, subtracting, or dividing two numerical data types.

```CSHARP
static void ProcessBytes()
{
	byte b1 = 100;
	byte b2 = 250;
	// This time, tell the compiler to add CIL code
	// to throw an exception if overflow/underflow
	// takes place.
	try
	{
		byte sum = checked((byte)Add(b1, b2));
		Console.WriteLine("sum = {0}", sum);
	}
	catch (OverflowException ex)
	{
		Console.WriteLine(ex.Message);
	}
}
Arithmetic operation resulted in an overflow.
```
return value of `Add()` has been wrapped within the scope of the checked keyword. Because the sum is greater than a byte, this triggers a runtime exception. Notice the error message printed out via the Message property.

overflow checking over a block of code statements:
```csharp
try
{
	checked
	{
		byte sum = (byte)Add(b1, b2);
		Console.WriteLine("sum = {0}", sum);
	}
}
catch (OverflowException ex)
{
	Console.WriteLine(ex.Message);
}
```
#### Allow for projectwide overflow checking
if you project shouldnt allow for a silent overflow, instead of wrapping all multiple lines of code with the checking keyword, you could add this to your `.proj` file instead
```
<PropertyGroup>
<CheckForOverflowUnderflow>true</CheckForOverflowUnderflow>
</PropertyGroup>
```
### Using the unchecked Keyword 
if you have allowed for projectwide overflow checking and then want to allow for data loss in a certain codeblock you could use the `unchecked` keyword to allow data loss:
`
```csharp
// Assuming /checked is enabled,
// this block will not trigger
// a runtime exception.
unchecked
{
byte sum = (byte)(b1 + b2);
Console.WriteLine("sum = {0} ", sum);
}
```
## Implicitly Typed Local Variables (var)
while it is good practice to explicitly specify data types of variable, C# also allows for implicitly typing local variable with the `var` keyword. 
```csharp
static void DeclareImplicitVars()
{
// var variableName = initialValue;
var myInt = 0;
var myBool = true;
var myString = "Time, marches on...";
// Implicitly typed numeric variables.
var myUInt = 0u;
var myInt = 0;
var myLong = 0L;
var myDouble = 0.5;
var myFloat = 0.5F;
var myDecimal = 0.5M;
}
```
In this case, the compiler is able to infer, the types of the values. 
you can use this implicit typing for any type including arrays, generic types and your own custom types.
```ad-note
strictly speaking, var is not a C# keyword. However, when the var token is used as a data type, it is contextually treated as a keyword by the compiler.
```
### Restrictions on Implicitly Typed Variables
Implicit typing applies only to local variables in a method or property scope
the var keyword cannot be used to define return values, parameters, or field data of a custom type.

Cannot be used as field data!:
`private var myInt = 10;`

Cannot be used as a return value or parameter type!
`public var MyMethod(var x, var y){}`

Variables using `var` must be declared with an intial value, it can't be `null`. Only if the variable is a reference type!  
`var myCar = new SportsCar();
`myCar = null;`

can assign the value of an implicitly typed local variable to the value of other variables, implicitly typed or not:
`var myInt = 0;`
`var anotherInt = myInt;`

permissible to return an implicitly typed local variable to the caller, if the method return type is the same underlying type as the var-defined data point.
```csharp
static int GetAnInt()
{
var retVal = 9;
return retVal;
}
```

**Be aware that implicit typing of local variables results in strongly typed data. Therefore, use of the var keyword is not the same technique used with scripting languages (such as JavaScript or Perl)**

If you know you need an int, declare an int! Makes it easier for others to read your code. 

With [[LINQ]] implicit typing is extremely helpful because you do not need to explicitly define the type that a query may return, which in some cases would be literally impossible to do. 
## Iteration constructs (loops)
C# has the following iteration contructs:
- for loop
- foreach/in loop
- while loop
- do/while loop
### for loop

```csharp
// A basic for loop.
static void ForLoopExample() {
// Note! "i" is only visible within the scope of the for loop.
	for(int i = 0; i < 4; i++)
	{
		Console.WriteLine("Number is: {0} ", i);
	}
// "i" is not visible here.
}
```
executes a statement or a block of statements while a specified Boolean expression evaluates to `true`
#### Elements of a for loop
using the above example
##### initializer
executed only once, before entering the loop. Typically, you declare and initialize a local loop variable in that section. The declared variable can't be accessed from outside the `for` statement.
`int i = 0`
##### condition
determines if the next iteration in the loop should be executed. If it evaluates to `true` or isn't present, the next iteration is executed; otherwise, the loop is exited. The _condition_ section must be a Boolean expression.
`i < 4`
##### iterator
defines what happens after each execution of the body of the loop.
`i++` here `i` is increased by 1, you could use `i--` to decrement i by 1. 

The iterator section can contain zero or more of the following statement expressions, separated by commas:
-   prefix or postfix [increment](https://learn.microsoft.com/en-us/dotnet/csharp/language-reference/operators/arithmetic-operators#increment-operator-) expression, such as `++i` or `i++`
-   prefix or postfix [decrement](https://learn.microsoft.com/en-us/dotnet/csharp/language-reference/operators/arithmetic-operators#decrement-operator---) expression, such as `--i` or `i--`
-   [assignment](https://learn.microsoft.com/en-us/dotnet/csharp/language-reference/operators/assignment-operator)
-   invocation of a method
-   [await](https://learn.microsoft.com/en-us/dotnet/csharp/language-reference/operators/await) expression
-   creation of an object by using the [new](https://learn.microsoft.com/en-us/dotnet/csharp/language-reference/operators/new-operator) operator
Less common ways of using the initializer and iterator:
```c#
int i;
int j = 3;
for (i = 0, Console.WriteLine($"Start: i={i}, j={j}"); i < j; i++, j--, Console.WriteLine($"Step: i={i}, j={j}"))
{
    //...
}
// Output:
// Start: i=0, j=3
// Step: i=1, j=2
// Step: i=2, j=1
```
### for each loop
```csharp
var fibNumbers = new List<int> { 0, 1, 1, 2, 3, 5, 8, 13 };
foreach (int element in fibNumbers)
{
    Console.Write($"{element} ");
}
// Output:
// 0 1 1 2 3 5 8 13
// Iterate array items using foreach.
static void ForEachLoopExample()
{
string[] carTypes = {"Ford", "BMW", "Yugo", "Honda" };
foreach (string c in carTypes)
```
can be used with a type if these conditions are met:
-  A type has the public parameterless `GetEnumerator` method. the `GetEnumerator` method can be a type's [extension method](https://learn.microsoft.com/en-us/dotnet/csharp/programming-guide/classes-and-structs/extension-methods).
-   The return type of the `GetEnumerator` method has the public `Current` property and the public parameterless `MoveNext` method whose return type is `bool`

The var keyword can also be used for the iteration variable.
### while loop

```csharp
int n = 0;
while (n < 5)
{
    Console.Write(n);
    n++;
}
// Output:
// 01234
```
While loop may never execute if the terminating condition is false from the onset
### while/do loop
```csharp
static void DoWhileLoopExample() {
	string userIsDone = "";
	do
	{
		Console.WriteLine("In do/while loop");
		Console.Write("Are you done? [yes] [no]: ");
		userIsDone = Console.ReadLine();
	}while(userIsDone.ToLower() != "yes"); // Note the semicolon!
}
```
difference is that do/while loops are guaranteed to execute codeblock at least once. 
## Conditionals (if else, pattern matching, switch case)
### Pattern matching 

```csharp 
void IfElsePatternMatchingUpdatedInCSharp9()
{
	object testItem1 = 123;
	Type t = typeof(string);
	char c = 'f';
	//Type patterns
	if (t is Type)
	{
		Console.WriteLine($"{t} is a Type");
	}
	//Relational, Conjuctive, and Disjunctive patterns
	if (c is >= 'a' and <= 'z' or >= 'A' and <= 'Z')
	{
		Console.WriteLine($"{c} is a character");
	};
	//Parenthesized patterns
	if (c is (>= 'a' and <= 'z') or (>= 'A' and <= 'Z') or '.' or ',')
	{
		Console.WriteLine($"{c} is a character or separator");
	};
	//Negative patterns
	if (testItem1 is not string)
	{
		Console.WriteLine($"{testItem1} is not a string");
	}
	if (testItem1 is not null)
	{
		Console.WriteLine($"{testItem1} is not null");
	}
	Console.WriteLine();
}
```
### Ternary operator 
```csharp
static void ExecuteIfElseUsingConditionalOperator()
{
string stringData = "My textual data";
Console.WriteLine(stringData.Length > 0
? "string is greater than 0 characters"
: "string is not greater than 0 characters");
Console.WriteLine();
}
```
### Switch case on enumarble 
```csharp
static void SwitchOnEnumExample()
{
	Console.Write("Enter your favorite day of the week: ");
	DayOfWeek favDay;
	try
	{
		favDay = (DayOfWeek) Enum.Parse(typeof(DayOfWeek),  Console.ReadLine());
	}
	catch (Exception)
	{
		Console.WriteLine("Bad input!");
		return;
	}
	switch (favDay)
	{
		case DayOfWeek.Sunday:
			Console.WriteLine("Football!!");
			break;
		case DayOfWeek.Monday:
			Console.WriteLine("Another day, another dollar");
			break;
		case DayOfWeek.Tuesday:
			Console.WriteLine("At least it is not Monday");
			break;
		case DayOfWeek.Wednesday:
			Console.WriteLine("A fine day.");
			break;
		case DayOfWeek.Thursday:
			Console.WriteLine("Almost Friday...");
			break;
		case DayOfWeek.Friday:
			Console.WriteLine("Yes, Friday rules!");
			break;
		case DayOfWeek.Saturday:
			Console.WriteLine("Great day indeed.");
			break;
	}
	Console.WriteLine();
}
// cases can be lumbed together 
case DayOfWeek.Saturday:
case DayOfWeek.Sunday:
	Console.WriteLine("It’s the weekend!");
	break;
```
you can go to other cases with the `goto` keyword. 
```csharp
case 1:
	//do something
	goto case 2;
case 2:
	//do something else
	break;
```

```csharp
static string FromRainbow(string colorBand)
{
	return colorBand switch
	{
	"Red" => "#FF0000",
	"Orange" => "#FF7F00",
	"Yellow" => "#FFFF00",
	"Green" => "#00FF00",
	"Blue" => "#0000FF",
	"Indigo" => "#4B0082",
	"Violet" => "#9400D3",
	_ => "#FFFFFF",
	};
}
//Switch expression with Tuples
static string RockPaperScissors(string first, string second)
{
	return (first, second) switch
	{
		("rock", "paper") => "Paper wins.",
		("rock", "scissors") => "Rock wins.",
		("paper", "rock") => "Paper wins.",
		("paper", "scissors") => "Scissors wins.",
		("scissors", "rock") => "Rock wins.",
		("scissors", "paper") => "Scissors wins.",
		(_, _) => "Tie.",
	};
}
// calling the method
Console.WriteLine(RockPaperScissors("paper","rock"));
Console.WriteLine(RockPaperScissors("scissors","rock"));
```

# CS Chapter 4

# CS Chapter 5
# CS Chapter 6
