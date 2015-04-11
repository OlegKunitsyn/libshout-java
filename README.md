Java libshout binding
=============

Requirements

* Java 1.7
* libshout 2.2.2

Target folder contains libshout-java.so ready for use on 32-bit Linux. Put it in the user.dir of your project.

``` java
Libshout libshout = new Libshout();
System.out.println(libshout.getVersion());
```

Streaming
-----------
of test.mp3 to local Icecast2 on http://localhost:8000/mymount

``` java
byte[] buffer = new byte[1024];
InputStream mp3 = new BufferedInputStream(new FileInputStream(new File("test.mp3")));
Libshout icecast = new Libshout();
icecast.setHost("localhost");
icecast.setPort(8000);
icecast.setProtocol(Libshout.PROTOCOL_HTTP);
icecast.setPassword("hackme");
icecast.setMount("/mymount");
icecast.setFormat(Libshout.FORMAT_MP3);
icecast.open();
int read = mp3.read(buffer);
while (read > 0) {
	icecast.send(buffer, read);
	read = mp3.read(buffer);
}
icecast.close();
mp3.close();
```

[Demo](http://myfm.at)

Compilation
-----------
on Debian Wheezy
 
``` bash
apt-get install git libshout3-dev gcc openjdk-7-jdk maven
git clone https://github.com/OlegKunitsyn/libshout-java.git
cd libshout-java
mvn install
```

on CentOS 6.6
 
``` bash
yum install git libshout-devel gcc java-1.7.0-openjdk-devel
wget --no-check-certificate https://raw.githubusercontent.com/monksy/centos-maven-install/master/maven-install.sh
chmod +x maven-install.sh
./maven-install.sh
git clone https://github.com/OlegKunitsyn/libshout-java.git
cd libshout-java
/usr/local/maven/bin/mvn install
```

on Ubuntu, Windows, OpenSuse etc
 
please commit your story
