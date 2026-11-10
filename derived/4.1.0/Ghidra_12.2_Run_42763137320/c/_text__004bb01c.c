/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004bb01c; name: FUN_.text__004bb01c
 */


void FUN__text__004bb01c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  *(byte *)((long)param_1 + 0x36) = *(byte *)((long)param_1 + 0x36) & 0xe0 | bVar1 & 0x1f;
  iVar2 = (**(code **)(*param_1 + 0x50))();
  if (iVar2 == 1) {
    FUN__text__004bb3a0(param_1,param_2,param_3);
    return;
  }
  return;
}


