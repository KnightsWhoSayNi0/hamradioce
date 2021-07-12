# ----------------------------
# Makefile Options
# ----------------------------

NAME ?= HAM
ICON ?= icon.png
DESCRIPTION ?= "Ham Radio Utils"
COMPRESSED ?= NO
ARCHIVED ?= NO

CFLAGS ?= -Wall -Wextra -Oz
CXXFLAGS ?= -Wall -Wextra -Oz

# ----------------------------

ifndef CEDEV
$(error CEDEV environment path variable is not set)
endif

include $(CEDEV)/meta/makefile.mk
