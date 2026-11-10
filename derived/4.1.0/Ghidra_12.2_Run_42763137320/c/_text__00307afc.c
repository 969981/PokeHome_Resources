/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00307afc; name: FUN_.text__00307afc
 */


int FUN__text__00307afc(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long local_28;
  
  FUN__text__003204a0(&local_28);
  uVar2 = FUN__text__003028c4(local_28,param_1 + 0x60);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  if ((uVar2 & 1) == 0) {
    return *(int *)(param_1 + 0x98);
  }
  lVar3 = FUN__text__00325bc0();
  iVar1 = *(int *)(lVar3 + 0x2c);
  if (9 < iVar1 - 1U) {
    iVar1 = 0;
  }
  return iVar1;
}


