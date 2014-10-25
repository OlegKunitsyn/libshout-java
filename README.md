Java libshout binding
=============

Requirements

* Java 1.7
* libshout 2.2.2

Target folder contains libshout-java.so ready for use on 32-bit Linux. Put it in the user.dir of your project.

``` java
libshout = new Libshout();
System.out.println(libshout.getVersion());
```
