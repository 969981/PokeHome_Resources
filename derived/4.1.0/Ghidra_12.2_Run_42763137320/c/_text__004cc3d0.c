/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cc3d0; name: FUN_.text__004cc3d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__004cc3d0(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   undefined8 param_5,undefined1 *param_6)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  long local_40;
  ulong local_38;
  undefined8 local_30;
  uint local_28;
  
  local_28 = 0;
  local_38 = 0;
  local_30 = 0;
  local_40 = 0;
  FUN__text__004cc5a0(param_1,*(undefined8 *)(param_1 + 8),param_2,param_3,&local_40,param_4);
  uVar2 = local_38 & 0xffffffff;
  if ((uint)local_38 == 0) {
    uVar9 = 0;
    *param_6 = 4;
  }
  else {
    if ((uint)local_30 == 0) {
      lVar4 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
      *_DAT_008a45e8 = lVar4;
      uVar3 = (uint)((ulong)lVar4 >> 0x21);
      if ((uint)local_38 < local_30._4_4_ || (uint)local_38 - local_30._4_4_ == 0) {
        uVar8 = 0;
        if (local_30._4_4_ != 0) {
          uVar8 = uVar3 / local_30._4_4_;
        }
        lVar4 = 0;
        iVar6 = uVar3 - uVar8 * local_30._4_4_;
        do {
          if (*(short *)(*(long *)(local_40 + lVar4) + 8) == 0) {
            if (iVar6 == 0) {
              uVar5 = 3;
              uVar3 = local_30._4_4_;
              goto LAB__text__004cc56c;
            }
            iVar6 = iVar6 + -1;
          }
          lVar4 = lVar4 + 8;
        } while (uVar2 * 8 != lVar4);
      }
      else {
        lVar4 = 0;
        uVar8 = 0;
        if (local_28 != 0) {
          uVar8 = uVar3 / local_28;
        }
        uVar3 = uVar3 - uVar8 * local_28;
        do {
          uVar8 = (uint)*(ushort *)(*(long *)(local_40 + lVar4) + 8);
          bVar1 = uVar3 < uVar8;
          uVar3 = uVar3 - uVar8;
          if (bVar1) {
            *(uint *)(param_6 + 4) = (uint)local_38 - local_30._4_4_;
            *(uint *)(param_6 + 8) = (uint)local_38;
            *param_6 = 2;
            uVar9 = *(undefined8 *)(local_40 + lVar4);
            goto LAB__text__004cc578;
          }
          lVar4 = lVar4 + 8;
        } while (uVar2 * 8 != lVar4);
      }
    }
    else {
      lVar4 = 0;
      lVar7 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
      *_DAT_008a45e8 = lVar7;
      uVar3 = 0;
      uVar8 = (uint)((ulong)lVar7 >> 0x21);
      if ((uint)local_30 != 0) {
        uVar3 = uVar8 / (uint)local_30;
      }
      iVar6 = uVar8 - uVar3 * (uint)local_30;
      do {
        if (*(short *)(*(long *)(local_40 + lVar4) + 8) == 100) {
          if (iVar6 == 0) {
            uVar5 = 1;
            uVar3 = (uint)local_30;
LAB__text__004cc56c:
            *param_6 = uVar5;
            *(uint *)(param_6 + 4) = uVar3;
            *(uint *)(param_6 + 8) = (uint)local_38;
            uVar9 = *(undefined8 *)(local_40 + lVar4);
            goto LAB__text__004cc578;
          }
          iVar6 = iVar6 + -1;
        }
        lVar4 = lVar4 + 8;
      } while (uVar2 * 8 != lVar4);
    }
    uVar9 = 0;
  }
LAB__text__004cc578:
  if (local_40 != 0) {
    FUN__text__00400fc0(0);
  }
  return uVar9;
}


