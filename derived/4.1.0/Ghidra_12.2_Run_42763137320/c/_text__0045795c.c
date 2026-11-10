/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045795c; name: FUN_.text__0045795c
 */


void FUN__text__0045795c(long param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 extraout_s0;
  undefined4 auStack_50 [4];
  undefined8 local_28;
  
  if ((*param_2 == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 0x90) == 0)) {
    return;
  }
  if (((DAT_00aea698 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00aea698), iVar1 != 0)) {
    DAT_00aea690 = 0x81;
    __cxa_guard_release(&DAT_00aea698);
  }
  lVar9 = *(long *)(param_1 + 0x10);
  local_28 = 0;
  if (*(long *)(lVar9 + 0x90) != 0) {
    FUN__text__00458870(*(long *)(lVar9 + 0x90),&DAT_00aea690,(long)&local_28 + 4,&local_28);
    uVar6 = local_28 & 0xffffffff;
    uVar5 = (ulong)local_28._4_4_;
    if (local_28._4_4_ != 0 || (int)local_28 != 0) {
      if (((*(byte *)(*(long *)(param_1 + 0x10) + 0x314) >> 4 & 1) == 0) ||
         (*(int *)(*(long *)(param_1 + 0x10) + 0x380) != -1)) {
        uVar7 = uVar5 * 8 + 0xf & 0xffffffff0;
        lVar3 = (long)auStack_50 - uVar7;
        puVar8 = (undefined4 *)(lVar3 - (uVar6 * 8 + 0xf & 0xffffffff0));
        lVar4 = (long)puVar8 - uVar7;
        uVar2 = 0;
        if (*(long *)(lVar9 + 0x90) != 0) {
          uVar2 = FUN__text__00458970(*(long *)(lVar9 + 0x90),&DAT_00aea690,lVar3,puVar8,lVar4,
                                      (long)&local_28 + 4,&local_28);
          uVar6 = local_28 & 0xffffffff;
          uVar5 = local_28 >> 0x20;
        }
      }
      else {
        if (*(long *)(lVar9 + 0x90) == 0) {
          auStack_50[2] = 0x3f800000;
          uVar2 = 0;
        }
        else {
          uVar2 = FUN__text__00458a90(*(long *)(lVar9 + 0x90),&DAT_00aea690);
          auStack_50[2] = extraout_s0;
        }
        puVar8 = auStack_50 + 2;
        lVar3 = 0;
        lVar4 = 0;
        uVar5 = 0;
        uVar6 = 1;
        auStack_50[3] = auStack_50[2];
      }
      FUN__text__00457b60(uVar2,param_2,lVar3,puVar8,lVar4,uVar5,uVar6);
      return;
    }
  }
  return;
}


