/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ceafc; name: FUN_.text__002ceafc
 */


undefined4 FUN__text__002ceafc(void)

{
  undefined4 uVar1;
  int *piVar2;
  ulong uVar3;
  
  piVar2 = (int *)FUN__text__002ce960();
  uVar1 = 0;
  if (piVar2 != (int *)0x0) {
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0x11) ||
       (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[8], uVar3 == 0)) {
      return 0;
    }
    uVar1 = *(undefined4 *)((long)piVar2 + uVar3);
  }
  return uVar1;
}


