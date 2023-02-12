#!/bin/bash

SCRIPT_DIR=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" &>/dev/null && pwd)

echo
while [ -n "$1" ]; do
	case "$1" in
	-f)
		echo "Deleting $SCRIPT_DIR/.build folder..."
		rm -rf $SCRIPT_DIR/.build
		;;
	*) echo "$1 is not an option" ;;
	esac
	shift
done

make dztech/dz65rgb/v2:sambaum
make kprepublic/bm16a:sambaum
make kprepublic/bm68hsrgb/rev1:sambaum
make novelkeys/nk65:sambaum
make chaos65:sambaum
make mt/ncr80/hotswap:sambaum
make owlab/link65/hotswap:sambaum
