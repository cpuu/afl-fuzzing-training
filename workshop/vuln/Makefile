
### name of project used in all labels

PROJECT		= vuln

###   source files

# use this to select files to compile by wildcards
SRC 		= $(wildcard *.c)
DEPS		= Makefile $(wildcard *.h) ../_shared_/Makefile_C_shared.mk


############################################################################

# input / output directories

TESTCASE_DIR 	= testcase_dir_000
FINDINGS_DIR 	= findings_dir_000

############################################################################

###    parallel mode settings

# nr of different fuzzers
# master is pythia by default

NR_FUZZERS_AFL		= 1
NR_FUZZERS_ASAN		= 0
NR_FUZZERS_MSAN		= 0
NR_FUZZERS_LAF		= 0
NR_FUZZERS_RB		= 1
NR_FUZZERS_FAST		= 1
# If you use driller - 1 QEmu worker is required!
NR_FUZZERS_DRILL	= 0
NR_FUZZERS_QEMU 	= 0

############################################################################

CFLAGS_LOCAL = -fno-stack-protector -z execstack
LFLAGS_LOCAL = 

############################################################################

# whole shared content of Makefile from _shared_ directory

include ../_shared_/Makefile_C_shared.mk

############################################################################

# use this section to overwrite default settings from shared Makefile



