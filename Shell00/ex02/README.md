# ex02: “Oh yeah, moooore…”

In one continuous numbered list, here’s exactly what I did:

1. **Create the base directories**  
   ```bash
   mkdir test0 test2
2.Create the zero‐length files
touch test1 test3 test4
3.Create a hard link for test3
ln test3 test5

4.Create a symbolic link to test0
ln -s test0 test6

5.Set the required permissions
chmod 715 test0    # drwx--xr-x
chmod 714 test1    # -rwx--xr--
chmod 504 test2    # dr-x---r--
chmod 404 test3    # -r-----r--
chmod 641 test4    # -rw-r----x
chmod 404 test5    # same as test3 (hard link)
chmod -h 755 test6 # lrwxr-xr-x

6.Adjust file sizes
dd if=/dev/zero of=test1 bs=1 count=4   # test1 = 4 bytes
truncate -s 1 test3                     # test3 = 1 byte
truncate -s 2 test4                     # test4 = 2 bytes
# test5 follows test3 because it’s a hard link

7.Set the timestamps
touch -t 201706012047 test0      # Jun 1 20:47
touch -t 201706012146 test1      # Jun 1 21:46
touch -t 201706012245 test2      # Jun 1 22:45
touch -t 201706012344 test3      # Jun 1 23:44
touch -t 201706012343 test4      # Jun 1 23:43
touch -t 201706012344 test5      # Jun 1 23:44 (hard link)
touch -h -t 201706012220 test6   # Jun 1 22:20 (symlink)

8.Package everything into a tarball
tar -cf exo2.tar *

9.Verify the archive contents
tar -tvf exo2.tar

