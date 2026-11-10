/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f48fc; name: FUN_.text__004f48fc
 */


void FUN__text__004f48fc(long param_1,uint param_2,uint param_3,int *param_4,int *param_5,
                        int *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  
  if ((int)param_2 < 0) {
    if (param_3 <= -param_2) goto LAB__text__004f4a18;
    param_3 = param_3 + param_2;
    param_2 = 0;
  }
  uVar1 = *(int *)(*(long *)(param_1 + 0x128) + (ulong)*(uint *)(param_1 + 0x130) * 0x10 + -0xc) -
          *(int *)(*(long *)(param_1 + 0x128) + 4);
  if ((param_3 + param_2 <= uVar1) || (param_3 = uVar1 - param_2, param_2 <= uVar1 && param_3 != 0))
  {
    lVar5 = FUN__text__004f2a20();
    uVar1 = *(uint *)(lVar5 + 8);
    iVar6 = 0;
    if (uVar1 != 0) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = (uVar1 + param_2) / uVar1;
      }
      uVar2 = (uVar1 + ((uVar1 + param_2) - uVar2 * uVar1)) - 1;
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = (uVar2 + param_3) / uVar1;
      }
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      iVar6 = uVar3 - uVar4;
    }
    *param_4 = iVar6;
    uVar1 = *(uint *)(lVar5 + 4);
    iVar6 = 0;
    if (uVar1 != 0) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = (uVar1 + param_2) / uVar1;
      }
      uVar2 = (uVar1 + ((uVar1 + param_2) - uVar2 * uVar1)) - 1;
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = (uVar2 + param_3) / uVar1;
      }
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      iVar6 = uVar3 - uVar4;
    }
    *param_5 = iVar6;
    uVar1 = *(uint *)(lVar5 + 0xc);
    iVar6 = 0;
    if (uVar1 != 0) {
      uVar2 = (uVar1 + param_2) - *(int *)(lVar5 + 0x10);
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar2 / uVar1;
      }
      uVar2 = (uVar1 + (uVar2 - uVar3 * uVar1)) - 1;
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = (uVar2 + param_3) / uVar1;
      }
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      iVar6 = uVar3 - uVar4;
    }
    *param_6 = iVar6;
    return;
  }
LAB__text__004f4a18:
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  return;
}


