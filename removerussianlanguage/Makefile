TARGET := iphone:clang:latest:7.0

include $(THEOS)/makefiles/common.mk

export ARCHS = armv7 armv7s arm64 arm64e

BUNDLE_NAME = removerussianlanguage

removerussianlanguage_FILES = rrlrsRootListController.m includes/CMManager.m
removerussianlanguage_FRAMEWORKS = UIKit
removerussianlanguage_PRIVATE_FRAMEWORKS = Preferences

$(BUNDLE_NAME)_EXTRA_FRAMEWORKS += Cephei CepheiPrefs

removerussianlanguage_INSTALL_PATH = /Library/PreferenceBundles
removerussianlanguage_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/bundle.mk
