/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f4830; name: FUN_.text__004f4830
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004f4830(long param_1,undefined4 param_2,undefined8 param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  
  puVar4 = _DAT_008a45d8;
  uVar6 = *(int *)(*(long *)(param_1 + 0x128) + 4) + param_4;
  uVar1 = uVar6 + param_5;
  if ((int)uVar6 < 0) {
    if ((int)uVar1 < 1) {
      return;
    }
    uVar6 = 0;
    iVar2 = *(int *)(param_1 + 0x130);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x130);
  }
  if (iVar2 != 2) {
    uVar5 = 1;
    do {
      uVar3 = *(uint *)(*(long *)(param_1 + 0x128) + (ulong)uVar5 * 0x10 + 4);
      if (uVar6 <= uVar3) {
        if (uVar1 <= uVar3) {
          return;
        }
        FUN__text__0048dab0(*puVar4,param_2,param_3,
                            *(undefined8 *)(*(long *)(param_1 + 0x128) + (ulong)uVar5 * 0x10 + 8));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 <= iVar2 - 2U);
  }
  return;
}


