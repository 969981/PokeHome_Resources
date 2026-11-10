/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00670730; name: FUN_.text__00670730
 */


void FUN__text__00670730(undefined8 param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int **)(param_2 + 0x660) == (int *)0x0) {
    return;
  }
  if (**(int **)(param_2 + 0x660) != 1) {
    FUN__text__006706dc(param_1,param_2 + 0x4c8);
    FUN__text__006706dc(param_1,param_2 + 0x4a8);
    return;
  }
  bVar1 = *(byte *)(param_2 + 0x66c);
  if ((bVar1 >> 1 & 1) == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = FUN__text__00665cf4(param_1,param_2);
    bVar1 = *(byte *)(param_2 + 0x66c);
    uVar3 = uVar3 ^ 1;
  }
  if ((bVar1 >> 2 & 1) == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN__text__00665d14(param_1,param_2);
    uVar2 = uVar2 ^ 1;
  }
  iVar4 = FUN__text__006706dc(param_1,param_2 + 0x4c8);
  if (iVar4 != 0 && (uVar3 & 1) == 0) {
    FUN__text__00665dac(param_2);
  }
  iVar4 = FUN__text__006706dc(param_1,param_2 + 0x4a8);
  if (iVar4 == 0 || (uVar2 & 1) != 0) {
    return;
  }
  FUN__text__00665998(param_2);
  return;
}


