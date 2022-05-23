DEBUG=0
FINALPACKAGE=1

include $(THEOS)/makefiles/common.mk

export ARCHS = armv7 armv7s arm64 arm64e

TOOL_NAME = rr
rr_FILES = main.m CMManager.m
rr_FRAMEWORKS = UIKit
rr_CODESIGN_FLAGS = -Sent.plist
rr_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tool.mk
include $(THEOS_MAKE_PATH)/aggregate.mk
