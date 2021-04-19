# GoogleTestLoader Class Reference

&nbsp;&nbsp;**Inherits from** NSObject  
&nbsp;&nbsp;**Declared in** GoogleTests.mm  

## Overview

Registers an XCTestCase subclass for each Google Test case.

Generating these classes allows Google Test cases to be represented as peers
of standard XCTest suites and supports filtering of test runs to specific
Google Test cases or individual tests via Xcode.

## Tasks

### 

[+&nbsp;load](#//api/name/load)  

<a title="Class Methods" name="class_methods"></a>
## Class Methods

<a name="//api/name/load" title="load"></a>
### load

Performs registration of classes for Google Test cases after our bundle has
finished loading.

`+ (void)load`

#### Discussion
This registration needs to occur before XCTest queries the runtime for test
subclasses, but after C++ static initializers have run so that all Google
Test cases have been registered. This is accomplished by synchronously
observing the NSBundleDidLoadNotification for our own bundle.

#### Declared In
* `GoogleTests.mm`

