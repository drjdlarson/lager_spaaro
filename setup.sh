# Setup script from BFS build tool repo
# Update packages
apt-get update
# Upgrade packages
apt-get upgrade -y
# Install git
apt-get install -y git
# Install build essential
apt-get install -y build-essential
# Install g++10
apt-get install g++-10
# Install libusb-dev
apt-get install libusb-dev
# Update to make g++10 the default
update-alternatives --remove-all gcc 
update-alternatives --remove-all g++
update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-9 10
update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-10 20
update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-9 10
update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-10 20
update-alternatives --set cc /usr/bin/gcc
update-alternatives --set c++ /usr/bin/g++
# Install CMake
apt-get install -y libssl-dev
wget https://github.com/Kitware/CMake/releases/download/v3.21.3/cmake-3.21.3.tar.gz
tar -xvf cmake-3.21.3.tar.gz
cd cmake-3.21.3
./bootstrap
make
make install
cd ..
rm cmake-3.21.3.tar.gz
rm -r cmake-3.21.3
# Install gcc-arm-none-eabi
wget https://developer.arm.com/-/media/Files/downloads/gnu-rm/10.3-2021.07/gcc-arm-none-eabi-10.3-2021.07-x86_64-linux.tar.bz2
tar -xvf gcc-arm-none-eabi-10.3-2021.07-x86_64-linux.tar.bz2
cd gcc-arm-none-eabi-10.3-2021.07
cp -r * /usr/local
cd ..
rm gcc-arm-none-eabi-10.3-2021.07-x86_64-linux.tar.bz2
rm -r gcc-arm-none-eabi-10.3-2021.07
# Install Protocol Buffers
apt-get install -y autoconf automake libtool curl make g++ unzip
wget https://github.com/protocolbuffers/protobuf/releases/download/v3.18.1/protobuf-all-3.18.1.tar.gz
tar -xvf protobuf-all-3.18.1.tar.gz
cd protobuf-3.18.1
./configure
make
make check
make install
ldconfig
apt-get install -y python3-dev python3-pip python3-setuptools
cd python
python3 setup.py build
python3 setup.py test
python3 setup.py build --cpp_implementation
python3 setup.py test --cpp_implementation
python3 setup.py install
cd ../..
rm protobuf-all-3.18.1.tar.gz
rm -r protobuf-3.18.1
pip3 install protobuf==3.18.1
# nanopb
git clone https://github.com/bolderflight/nanopb.git /usr/local/nanopb
# Install cpplint
pip install cpplint