nyu_add_sv(parityshift
  ParityShift.sv
)

find_package(nyu-sync CONFIG REQUIRED)
nyu_link_sv(parityshift INTERFACE nyu::sync)
