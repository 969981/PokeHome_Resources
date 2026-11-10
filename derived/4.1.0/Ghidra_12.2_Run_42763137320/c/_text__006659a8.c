/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006659a8; name: FUN_.text__006659a8
 */


void FUN__text__006659a8(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x4a8);
  if (plVar1 != (long *)0x0) {
    do {
      if (*plVar1 == param_1) {
        FUN__text__00656c68(param_2 + 0x4a8,plVar1,param_2 + 0x4c8,*(undefined8 *)(param_2 + 0x4d0))
        ;
        if (*(undefined8 **)(param_2 + 0x4a8) == (undefined8 *)0x0) {
          return;
        }
        *(byte *)(param_2 + 0x66c) = *(byte *)(param_2 + 0x66c) & 0xfb;
        FUN__text__0065a050(**(undefined8 **)(param_2 + 0x4a8),0,6);
        return;
      }
      plVar1 = (long *)plVar1[2];
    } while (plVar1 != (long *)0x0);
  }
  return;
}


