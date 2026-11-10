/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001f2cdc; name: FUN_.text__001f2cdc
 */


byte FUN__text__001f2cdc(long param_1)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x270) == 0) {
    uVar2 = FUN__text__00132134(*(undefined8 *)(param_1 + 200));
    bVar1 = 1;
    if ((uVar2 & 1) != 0) {
      FUN__text__00322230();
      *(undefined4 *)(param_1 + 0x270) = 1;
      return 1;
    }
  }
  else {
    iVar3 = 0x1e;
    if (*(int *)(param_1 + 0x274) < 0x1e) {
      iVar3 = *(int *)(param_1 + 0x274) + 1;
    }
    *(int *)(param_1 + 0x274) = iVar3;
    bVar1 = FUN__text__00322800();
    bVar1 = bVar1 ^ 1 | *(int *)(param_1 + 0x274) < 0x1e;
  }
  return bVar1 & 1;
}


