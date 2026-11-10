/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047b6a8; name: FUN_.text__0047b6a8
 */


void FUN__text__0047b6a8(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (*(ushort *)(plVar1 + 2) - 1 != 0) {
      *(short *)(plVar1 + 2) = (short)(*(ushort *)(plVar1 + 2) - 1);
      *(undefined8 *)(param_1 + 0x40) = 0;
      return;
    }
    if (*plVar1 != 0) {
      *(undefined4 *)(plVar1 + 1) = 0;
      FUN__text__00400fc0(0);
      *plVar1 = 0;
      *(undefined4 *)((long)plVar1 + 0xc) = 0;
    }
    FUN__text__00400fc0(0,plVar1);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}


