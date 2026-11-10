/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d60a8; name: FUN_.text__003d60a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__003d60a8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,int param_5,
                   uint param_6)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  uint local_68;
  byte bStack_64;
  byte bStack_63;
  undefined2 uStack_62;
  undefined6 uStack_60;
  undefined8 uStack_5a;
  undefined8 local_52;
  undefined8 uStack_4a;
  undefined8 local_42;
  undefined8 uStack_3a;
  undefined8 local_32;
  undefined8 uStack_2a;
  
  local_68 = 0;
  bStack_64 = 0;
  bStack_63 = 0;
  uStack_4a = uRam000000000071759f;
  local_52 = _DAT_00717597;
  uStack_5a = uRam000000000071758f;
  uStack_62 = (undefined2)_DAT_00717587;
  uStack_60 = (undefined6)((ulong)_DAT_00717587 >> 0x10);
  uStack_2a = uRam00000000007175bf;
  local_32 = _DAT_007175b7;
  uStack_3a = uRam00000000007175af;
  local_42 = _DAT_007175a7;
  if (param_5 - 1U < 7) {
    uVar5 = (ulong)(param_5 - 1U) << 3;
    uStack_2a = CONCAT17((char)(0x2d5f2d3a2d5f2d >> (uVar5 & 0x38)),
                         CONCAT16((char)(0x212e5f5f2e2d2b >> (uVar5 & 0x38)),
                                  (int6)uRam00000000007175bf));
    auVar8 = FUN__text__003d62b0(&local_68,param_1,param_2,param_3,param_4);
    iVar4 = auVar8._0_4_;
  }
  else {
    auVar8 = FUN__text__003d62b0(&local_68,param_1,param_2,param_3,param_4);
    iVar4 = auVar8._0_4_;
  }
  uVar5 = auVar8._8_8_;
  if (iVar4 != 0) {
    return auVar8._0_8_;
  }
  uVar7 = (ulong)local_68;
  if ((int)local_68 < 0) {
    if (local_68 != 0xffffffff) {
      return 0x16;
    }
  }
  else if (local_68 == 0) {
LAB__text__003d6274:
    uVar5 = uVar7 + uVar5;
  }
  else {
    uVar7 = param_2 - uVar5;
    uVar6 = (ulong)&local_68 | 6;
    puVar1 = (undefined1 *)(param_1 + uVar5);
    if (local_68 == 1) {
      if (uVar7 < 2) {
        return 0x22;
      }
      *puVar1 = *(undefined1 *)(uVar6 + (bStack_64 >> 2));
      puVar1[1] = *(undefined1 *)(uVar6 + ((ulong)bStack_64 & 3) * 0x10);
      if ((param_6 & 1) == 0) {
        uVar7 = 2;
        goto LAB__text__003d6274;
      }
      if (uVar7 < 4) {
        return 0x22;
      }
      puVar1[2] = 0x3d;
    }
    else {
      if (uVar7 < 3) {
        return 0x22;
      }
      uVar2 = *(undefined1 *)
               (uVar6 + ((ulong)(((uint)bStack_64 << 0x10 | (uint)bStack_63 << 8) >> 0xc) & 0x3f));
      *puVar1 = *(undefined1 *)(uVar6 + (bStack_64 >> 2));
      uVar3 = *(undefined1 *)(uVar6 + ((ulong)bStack_63 & 0xf) * 4);
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      if ((param_6 & 1) == 0) {
        uVar5 = uVar5 + 3;
        if (param_2 <= uVar5) {
          return 0x22;
        }
        goto LAB__text__003d6280;
      }
      if (uVar7 < 4) {
        return 0x22;
      }
    }
    puVar1[3] = 0x3d;
    uVar5 = uVar5 + 4;
  }
  if (param_2 <= uVar5) {
    return 0x22;
  }
LAB__text__003d6280:
  *(undefined1 *)(param_1 + uVar5) = 0;
  return 0;
}


