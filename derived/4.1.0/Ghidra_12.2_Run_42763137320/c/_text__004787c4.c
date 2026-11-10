/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004787c4; name: FUN_.text__004787c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004787c4(undefined1 param_1 [16],float param_2,long param_3,undefined4 *param_4,
                        ulong param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  char local_44 [4];
  
  if ((*(ushort *)(param_3 + 0x208) >> 6 & 1) != 0) {
    return;
  }
  uVar6 = param_5 & 0xffffffff;
  if ((uint)param_5 < 0x3b) {
    if ((1L << (param_5 & 0x3f) & 0x1f800000U) != 0) {
LAB__text__00478884:
      FUN__text__004789d8(param_3,uVar6);
      return;
    }
    if ((1L << (param_5 & 0x3f) & 0x4000000007c0000U) != 0) {
      FUN__text__004789d8(param_2,param_3,uVar6);
      goto LAB__text__00478838;
    }
    if (uVar6 == 0x2e) {
      *(undefined4 *)(param_3 + 0x1b0) = 0;
      goto LAB__text__00478884;
    }
  }
  uVar3 = *(uint *)(uVar6 * 4 + 0x73b3d8);
  if ((uVar3 != 0x4a) &&
     (uVar6 = (ulong)*(uint *)(&DAT_0073b558 + (ulong)uVar3 * 4),
     *(uint *)(&DAT_0073b558 + (ulong)uVar3 * 4) != 0x1a)) {
    lVar1 = param_3 + 0x88;
    if (*_DAT_008a45a8 == 1) {
      lVar2 = param_3 + (ulong)(uVar3 >> 6) * 8;
      uVar7 = 1L << ((ulong)uVar3 & 0x3f);
      if ((*(ulong *)(lVar2 + 0x128) & uVar7) != 0) {
        if (param_2 != 0.0) {
          local_44[0] = '\0';
          uVar5 = (uint)*(byte *)(param_4 + 1);
          uStack_58 = *param_4;
          local_5c = 0;
          if (uVar5 != 2) {
            local_5c = (uint)*(byte *)((long)param_4 + 5) << 0x10;
          }
          local_5c = uVar3 & 0xff | uVar5 << 8 | local_5c;
          local_54 = 0;
          if (uVar5 != 2) {
            local_54 = param_4[2];
          }
          lVar4 = FUN__text__004626a0(param_3 + 0xf0,&local_5c,local_44);
          if (lVar4 == 0) {
            param_2 = 0.0;
            fVar8 = 0.0;
          }
          else {
            if (local_44[0] == '\0') {
              fVar8 = 0.0;
            }
            else {
              fVar8 = *(float *)(lVar4 + 0xc);
            }
            param_2 = fVar8 + param_2;
            *(float *)(lVar4 + 0xc) = param_2;
          }
          if (((*(ulong *)(lVar2 + 0x138) & uVar7) != 0) ||
             ((fVar9 = *(float *)(lVar1 + uVar6 * 4), fVar8 == fVar9 && (param_2 < fVar9)))) {
            *(ushort *)(param_3 + 0x14a) = *(ushort *)(param_3 + 0x14a) | 0x400;
          }
          else if (fVar9 < param_2) {
            *(float *)(lVar1 + uVar6 * 4) = param_2;
          }
        }
        goto LAB__text__00478838;
      }
    }
    *(float *)(lVar1 + uVar6 * 4) = *(float *)(lVar1 + uVar6 * 4) + param_2;
  }
LAB__text__00478838:
  if ((((uint)param_5 == 0x2f) && ((*(ushort *)(param_3 + 0x208) & 1) != 0)) &&
     (*(long **)(param_3 + 0x1d8) != (long *)0x0)) {
    (**(code **)(**(long **)(param_3 + 0x1d8) + 0x20))();
  }
  return;
}


