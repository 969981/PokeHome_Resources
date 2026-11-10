/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00484580; name: FUN_.text__00484580
 */


void FUN__text__00484580(uint param_1,byte param_2,undefined4 *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  
  uVar8 = (uint)param_2;
  uVar2 = param_1 & 0xff;
  uVar3 = uVar8 + 3 & 0x1fc;
  iVar5 = uVar3 * uVar2;
  if (iVar5 != 0) {
    memset(param_3,0,(ulong)(uint)(iVar5 * 4));
  }
  if ((param_1 & 0xf00) == 0x200) {
    if ((param_2 != 0) && (uVar2 != 0)) {
      if (uVar2 < 0xc) {
        uVar4 = *(uint *)((ulong)(uVar2 - 1) * 4 + 0x73cc20);
        uVar7 = 0;
        uVar8 = 0;
        do {
          if ((uVar4 >> (ulong)((uint)uVar7 & 0x1f) & 1) == 0) {
            uVar6 = uVar8 * uVar3;
            uVar8 = uVar8 + 1;
            param_3[uVar6 + uVar7] = 0x3f800000;
          }
          uVar7 = uVar7 + 1;
        } while ((uVar7 < param_2) && (uVar8 < uVar2));
      }
      else {
        uVar3 = uVar2 - 1;
        if (uVar8 - 1 <= uVar2 - 1) {
          uVar3 = uVar8 - 1;
        }
        uVar8 = uVar3 + 1;
        uVar7 = (ulong)uVar8 & 3;
        if (uVar3 < 3) {
          lVar10 = 0;
        }
        else {
          uVar9 = (ulong)param_2 + 3 >> 2;
          lVar1 = 3;
          puVar11 = param_3;
          do {
            lVar10 = lVar1;
            lVar1 = lVar10 + 4;
            *(undefined4 *)((long)puVar11 + (uVar9 << 4 | 4)) = 0x3f800000;
            *puVar11 = 0x3f800000;
            *(undefined4 *)((long)puVar11 + (uVar9 << 5 | 8)) = 0x3f800000;
            *(undefined4 *)((long)puVar11 + (uVar9 * 0x30 | 0xc)) = 0x3f800000;
            puVar11 = (undefined4 *)((long)puVar11 + (uVar9 << 6 | 0x10));
          } while (lVar1 - ((ulong)uVar8 & 0xfffffffc) != 3);
          lVar10 = lVar10 + 1;
        }
        if ((uVar8 & 3) != 0) {
          uVar9 = (ulong)((uint)param_2 * 4 + 0xc) & 0x7f0 | 4;
          param_3 = (undefined4 *)((long)param_3 + lVar10 * uVar9);
          do {
            *param_3 = 0x3f800000;
            param_3 = (undefined4 *)((long)param_3 + uVar9);
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
      }
    }
  }
  else {
    if (uVar8 <= uVar2) {
      uVar2 = uVar8;
    }
    if (uVar2 != 0) {
      uVar7 = (ulong)uVar2 & 3;
      if (uVar2 < 4) {
        lVar10 = 0;
      }
      else {
        uVar9 = (ulong)param_2 + 3 >> 2;
        lVar1 = 3;
        puVar11 = param_3;
        do {
          lVar10 = lVar1;
          lVar1 = lVar10 + 4;
          *(undefined4 *)((long)puVar11 + (uVar9 << 4 | 4)) = 0x3f800000;
          *puVar11 = 0x3f800000;
          *(undefined4 *)((long)puVar11 + (uVar9 << 5 | 8)) = 0x3f800000;
          *(undefined4 *)((long)puVar11 + (uVar9 * 0x30 | 0xc)) = 0x3f800000;
          puVar11 = (undefined4 *)((long)puVar11 + (uVar9 << 6 | 0x10));
        } while (lVar1 - ((ulong)uVar2 & 0xfc) != 3);
        lVar10 = lVar10 + 1;
      }
      if ((uVar2 & 3) != 0) {
        uVar9 = (ulong)((uint)param_2 * 4 + 0xc) & 0x7f0 | 4;
        param_3 = (undefined4 *)((long)param_3 + lVar10 * uVar9);
        do {
          *param_3 = 0x3f800000;
          param_3 = (undefined4 *)((long)param_3 + uVar9);
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
  }
  return;
}


