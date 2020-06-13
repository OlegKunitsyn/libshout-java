Java libshout binding
=============

Requirements

* Java 1.7+
* libshout 2.2+

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

Compilation
-----------
#### on Debian Buster (libshout 2.4)
 
``` bash
apt-get install git libshout-dev gcc openjdk-11-jdk maven
git clone https://github.com/OlegKunitsyn/libshout-java.git
cd libshout-java
git checkout origin/java11
mvn install
```

#### on Debian Wheezy (libshout 2.2), Jessie and Stretch (libshout 2.3)
 
``` bash
apt-get install git libshout-dev gcc openjdk-8-jdk maven
git clone https://github.com/OlegKunitsyn/libshout-java.git
cd libshout-java
mvn install
```

#### on CentOS 6.6, 7.1, 7.2, 7.3
 
``` bash
yum install git libshout-devel gcc java-1.7.0-openjdk-devel

wget -O maven.tgz http://www.eu.apache.org/dist/maven/maven-3/3.1.1/binaries/apache-maven-3.1.1-bin.tar.gz
mkdir -p maven
tar xzf maven.tgz -C maven
mkdir -p /usr/local/maven
mv maven/apache-maven-3.1.1/* /usr/local/maven
rm -f maven.tgz
echo -e 'export M2_HOME=/usr/local/maven\nexport PATH=${M2_HOME}/bin:${PATH}' > /etc/profile.d/maven.sh
source /etc/profile.d/maven.sh
echo 'The maven version: ' `/usr/local/maven/bin/mvn -version` ' has been installed.'

git clone https://github.com/OlegKunitsyn/libshout-java.git
cd libshout-java
/usr/local/maven/bin/mvn install
```

#### on Mac OS X 10.12.1
``` bash

### Prereqs
# Install Homebrew
/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
# Install Caskroom
brew tap caskroom/cask
# Install XCode CLI Tools (or XCode from the App Store)
xcode-select --install
# Install libshout-devel (for source code, shout.h etc.)
brew install libshout
# Install Java (if not already installed)
brew cask install java
# Install Maven (if not already installed)
brew install maven

### Build libshout-java
git clone https://github.com/OlegKunitsyn/libshout-java.git
cd libshout-java
maven install

```

#### on Ubuntu, Windows, OpenSuse etc
 
please commit your story


#### Docker instruction
``` bash
# 1. Clone project
git clone https://github.com/OlegKunitsyn/libshout-java.git
cd libshout-java
# 2. Build image
docker build .
# -> You will see something like this: Successfully built a7bbaac75a68 < This is [docker image ID], we will use it in next step
# Option. Run mvn install
docker run [docker image ID] mvn install
# Option. Run bash of ubuntu
# A bash on ubuntu will appear. you can do something like in ubuntu 16.04LTS (64bit)
docker run -it [docker image ID] /bin/bash
# Option. Advance. Mapping working directory vs directory in container
# It mean you can modify files in your working directory. And run it in docker environment without rebuild
docker run -it -v /path/to/libshout-java:/libshout-java/ [docker image ID]
```


