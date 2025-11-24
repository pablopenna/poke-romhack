# Poke-romhack
*Name TBD*

This romhack is based on the amazing `pokeemerald-expansion` project.

You can see the original README [here](./OG_README.md).

# Dependencies
To build the project you need to install the following depencies in your system:
```sh
sudo apt install build-essential binutils-arm-none-eabi gcc-arm-none-eabi libnewlib-arm-none-eabi git libpng-dev python3
```

# Building
To build the rom, just run the following command:
```sh
make
```

To increase its speed, you can get the number of cores in your system with:
```sh
nproc
```

and provide it to the make command:
```sh
make -j$(nproc)
```

If all ran successfully, you will find the resulting rom in the root directory of the project.
It is named `pokeemerald.gba`

# Running

Load the rom in actual hardware or use an emulator. The `mGBA` core is recommended.
