/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00633938; name: FUN_.text__00633938
 */


undefined8 FUN__text__00633938(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = FUN__text__00618f90(*(undefined8 *)(param_1 + 0x2f0));
  if (uVar1 == *(byte *)(param_2 + 1)) {
    iVar2 = FUN__text__006101d0(*(undefined8 *)(param_1 + 0x2f0));
    if ((iVar2 == *param_2) &&
       (uVar3 = FUN__text__00619d30(*(undefined8 *)(param_1 + 0x2f0),(long)param_2 + 6),
       (uVar3 & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}


