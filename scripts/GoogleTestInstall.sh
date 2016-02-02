#install google test in the external directory
cd ../external/

wget https://github.com/google/googletest/archive/release-1.7.0.tar.gz

tar xf release-1.7.0.tar.gz
cd googletest-release-1.7.0
cmake -DBUILD_SHARED_LIBS=ON
make

# cleanup tar after script
cd ../
rm release-1.7.0.tar.gz
