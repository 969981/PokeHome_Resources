/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e9200; name: FUN_.text__005e9200
 */


void FUN__text__005e9200(void)

{
  uint uVar1;
  uint uVar2;
  
  if (0 < (int)DAT_00c15348) {
    uVar1 = DAT_00c15348 - 0x401;
    uVar2 = DAT_00c15348;
    do {
      uVar2 = uVar2 - 1;
      if (uVar1 < 0xfffffc00) {
                    /* WARNING: Subroutine does not return */
        FUN__text__0011a180(0x717b65);
      }
      (**(code **)(**(long **)(&DAT_00c13348 + (ulong)uVar2 * 8) + 8))();
    } while (uVar2 != 0);
  }
  DAT_00c15348 = 0;
  return;
}


