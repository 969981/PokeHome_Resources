/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004af620; name: FUN_.text__004af620
 */


void FUN__text__004af620(long param_1,undefined8 param_2,long param_3,long param_4,uint param_5,
                        int param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar3 = *(uint *)(param_3 + 0x18);
  if (uVar3 != 0) {
    uVar4 = 0;
    iVar2 = 0;
    param_1 = param_1 + 0x10;
    do {
      lVar5 = (ulong)*(uint *)(param_3 + 0x14) * 0x20;
      uVar1 = *(uint *)(param_1 + lVar5);
      if (param_5 <= uVar1 && uVar1 < param_6 + param_5) {
        *(undefined4 *)(param_1 + lVar5) = 0;
        iVar2 = iVar2 + 1;
        uVar3 = *(uint *)(param_3 + 0x18);
      }
      uVar4 = uVar4 + 1;
      param_1 = param_1 + 0x20;
    } while (uVar4 < uVar3);
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + iVar2;
    *(uint *)(param_3 + 0x18) = uVar3 - iVar2;
    *(int *)(param_4 + 0x18) = *(int *)(param_4 + 0x18) + iVar2;
  }
  return;
}


