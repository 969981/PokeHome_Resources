/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068cfb0; name: FUN_.text__0068cfb0
 */


int * FUN__text__0068cfb0(long param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x10);
  if (*(ushort *)(param_1 + 0x10) != 0) {
    piVar2 = (int *)(param_1 + (ulong)*(ushort *)(param_1 + 6));
    do {
      if (*piVar2 == param_2) {
        return piVar2 + 2;
      }
      uVar1 = uVar1 - 1;
      piVar2 = (int *)((long)piVar2 + (ulong)(uint)piVar2[1]);
    } while (uVar1 != 0);
  }
  return (int *)0x0;
}


