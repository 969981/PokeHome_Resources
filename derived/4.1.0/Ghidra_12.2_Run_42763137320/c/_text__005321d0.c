/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005321d0; name: FUN_.text__005321d0
 */


void FUN__text__005321d0(long *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    FUN__text__005317e0(param_1 + 2,param_3);
    return;
  }
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 != 0) {
    iVar4 = 0;
    do {
      iVar1 = iVar4 + (uVar3 >> 1);
      uVar2 = *(uint *)(*param_1 + (long)iVar1 * 0x30);
      if (uVar2 == param_2) {
        FUN__text__005317e0(*param_1 + (long)iVar1 * 0x30 + 8,param_3);
        return;
      }
      if (uVar2 < param_2) {
        iVar4 = iVar1 + 1;
      }
      uVar2 = uVar3 - (uVar2 < param_2);
      uVar3 = uVar2 >> 1;
    } while (1 < uVar2);
  }
  return;
}


