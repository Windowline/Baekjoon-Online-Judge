# GoogleTestCase Class Reference

&nbsp;&nbsp;**Inherits from** XCTestCase  
&nbsp;&nbsp;**Declared in** GoogleTests.mm  

## Overview

Base class for the generated classes for Google Test cases.

## Tasks

### 

[+&nbsp;bundleForClass](#//api/name/bundleForClass)  

[+&nbsp;testInvocations](#//api/name/testInvocations)  

<a title="Class Methods" name="class_methods"></a>
## Class Methods

<a name="//api/name/bundleForClass" title="bundleForClass"></a>
### bundleForClass

Associates generated Google Test classes with the test bundle.

`+ (NSBundle *)bundleForClass`

#### Discussion
This affects how the generated test cases are represented in reports. By
associating the generated classes with a test bundle the Google Test cases
appear to be part of the same test bundle that this source file is compiled
into. Without this association they appear to be part of a bundle
representing the directory of an internal Xcode tool that runs the tests.

#### Declared In
* `GoogleTests.mm`

<a name="//api/name/testInvocations" title="testInvocations"></a>
### testInvocations

Implementation of [XCTestCase testInvocations] that returns an array of test
invocations for each test method in the class.

`+ (NSArray *)testInvocations`

#### Discussion
This differs from the standard implementation of testInvocations, which only
adds methods with a prefix of &ldquo;test&rdquo;.

#### Declared In
* `GoogleTests.mm`

