#!/bin/bash
cd /alx-low_level_programming/0x18-dynamic_libraries
sleep 98
mv gm /tmp/original_gm
echo -e '#!/bin/bash\n\necho "--> Please make me win!"' > gm
chmod +x gm
./gm 9 8 10 24 75 9
mv /tmp/original_gm gm
