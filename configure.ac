AC_PREREQ(2.63)
AC_INIT(ppos, 1.00)

AC_PREFIX_DEFAULT([/opt/ppos])

AC_ARG_WITH([kernelsrc],
  AC_HELP_STRING(
    [--with-kernelsrc=path],[Path to 'kernel src', default is /lib/modules/uname_r/build]),
  [WITH_KERNELSRC=$withval],[WITH_KERNELSRC=yes])

AC_ARG_WITH([target],
  AC_HELP_STRING(
    [--with-target={attached-mic | builtin-mic | builtin-x86}],[target, default is attached-mic]),
  [WITH_TARGET=$withval],[WITH_TARGET=yes])

case "X$WITH_KERNELSRC" in
    Xyes | Xno | X)
	WITH_KERNELSRC='/lib/modules/`uname -r`/build'
	;;
    X/*)
	;;
    *)
	WITH_KERNELSRC="`pwd`/$WITH_KERNELSRC"
	;;
esac

if test "X$WITH_TARGET" = Xyes -o "X$WITH_TARGET" = Xno; then
	WITH_TARGET=attached-mic
fi

if test "X$bindir" = X; then
	BINDIR="$bindir"
fi

if test "X$sbindir" = X; then
	SBINDIR="$sbindir"
fi

test "x$prefix" = xNONE && prefix="$ac_default_prefix"

case $WITH_TARGET in
    attached-mic)
	ARCH=`uname -m`
	AC_PROG_CC
	if test "X$BINDIR" = X; then
		BINDIR="$prefix/bin"
	fi
	if test "X$SBINDIR" = X; then
		SBINDIR="$prefix/sbin"
	fi
	if test "X$KMODDIR" = X; then
		KMODDIR="$prefix/kmod"
	fi
	;;
    builtin-mic)
	ARCH=k1om
	AC_CHECK_PROG(XCC,
		[x86_64-$ARCH-linux-gcc],
		[x86_64-$ARCH-linux-gcc],
		[no])
	CC=$XCC
	if test "X$BINDIR" = X; then
		BINDIR="$prefix/attached/bin"
	fi
	if test "X$SBINDIR" = X; then
		SBINDIR="$prefix/attached/sbin"
	fi
	if test "X$KMODDIR" = X; then
		KMODDIR="$prefix/attached/kmod"
	fi
	;;
    builtin-x86)
	ARCH=`uname -m`
	AC_PROG_CC
	XCC=$CC
	if test "X$BINDIR" = X; then
		BINDIR="$prefix/bin"
	fi
	if test "X$SBINDIR" = X; then
		SBINDIR="$prefix/sbin"
	fi
	if test "X$KMODDIR" = X; then
		KMODDIR="$prefix/kmod"
	fi
	;;
    *)
	AC_MSG_ERROR([target $WITH_TARGET is unknwon])
	;;
esac

KDIR="$WITH_KERNELSRC"
TARGET="$WITH_TARGET"

AC_SUBST(CC)
AC_SUBST(XCC)
AC_SUBST(ARCH)
AC_SUBST(KDIR)
AC_SUBST(TARGET)
AC_SUBST(BINDIR)
AC_SUBST(SBINDIR)
AC_SUBST(KMODDIR)

AC_CONFIG_FILES([
	Makefile
	linux/core/Makefile.module
	linux/user/Makefile
	linux/driver/builtin/Makefile
	linux/driver/attached/mic/Makefile
])

AC_OUTPUT