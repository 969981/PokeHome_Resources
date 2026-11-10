/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c12f0; name: FUN_.text__002c12f0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002c12f0(long param_1,uint param_2,ushort param_3,byte param_4,byte param_5,
                        uint param_6)

{
  int *piVar1;
  long lVar2;
  uint *puVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  uint local_884;
  ushort local_880;
  undefined4 local_87c;
  byte local_878;
  undefined1 local_877;
  undefined8 local_874;
  undefined4 local_86c;
  undefined4 local_868;
  ushort local_864 [2];
  undefined1 local_860 [3];
  undefined4 uStack_85d;
  undefined4 local_858;
  undefined2 local_854 [2];
  undefined1 local_850 [3];
  undefined4 auStack_84d [505];
  uint local_68;
  uint local_64;
  
  if (0x3d4 < (int)param_2) {
    return;
  }
  if (0x77 < param_3) {
    return;
  }
  uVar12 = (ulong)param_2;
  lVar14 = *(long *)(*_DAT_0089f4f8 + 0x50);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  uVar13 = *(undefined8 *)(lVar14 + 0x58);
  (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  lVar14 = 0;
  do {
    lVar2 = lVar14 + 0x20;
    *(undefined4 *)((long)local_864 + lVar14 + -4) = 0;
    *(undefined2 *)((long)local_864 + lVar14) = 0;
    *(undefined4 *)(local_860 + lVar14) = 0;
    *(undefined4 *)(local_860 + lVar14 + 3) = 0;
    *(undefined4 *)((long)local_854 + lVar14 + -4) = 0;
    *(undefined2 *)((long)local_854 + lVar14) = 0;
    *(undefined4 *)(local_850 + lVar14) = 0;
    *(undefined4 *)((long)auStack_84d + lVar14) = 0;
    lVar14 = lVar2;
  } while (lVar2 != 0x800);
  local_68 = 0;
  FUN__text__002a6340(uVar13,uVar12,&local_868);
  if (local_68 != 0) {
    lVar14 = 0;
    do {
      if (lVar14 == 0x800) {
                    /* WARNING: Subroutine does not return */
        FUN__text__0011a180(0x717b65);
      }
      piVar1 = (int *)(local_860 + lVar14);
      bVar4 = *(ushort *)((long)local_864 + lVar14) != param_3;
    } while ((bVar4 || *piVar1 != 3) &&
            (bVar5 = (ulong)local_68 * 0x10 + -0x10 != lVar14, lVar14 = lVar14 + 0x10, bVar5));
    if (!bVar4 && *piVar1 == 3) {
      param_1 = param_1 + 100;
      local_877 = 0;
      local_86c = 0xffffffff;
      local_874 = 0;
      local_884 = param_2;
      local_880 = param_3;
      local_878 = param_5 & 1;
      bVar8 = param_4;
      bVar6 = param_4;
      if (*(short *)(param_1 + uVar12 * 0x58 + 0x7a) == 0) {
        if ((*(byte *)(param_1 + uVar12 * 0x58 + 0x70) & 1) != 0) {
          local_87c = 0;
          lVar14 = FUN__text__002c10b0(param_1,&local_884,param_6 & 1,&local_64);
          if (lVar14 == 0) {
            bVar4 = false;
          }
          else {
            bVar4 = (1 << (ulong)(local_64 & 0x1f) & (uint)*(byte *)(lVar14 + 4)) != 0;
          }
          local_87c = 1;
          lVar14 = FUN__text__002c10b0(param_1,&local_884,param_6 & 1,&local_64);
          if (lVar14 == 0) {
            bVar7 = 0;
          }
          else {
            bVar7 = *(byte *)(lVar14 + 4) >> (ulong)(local_64 & 0x1f) & 1;
          }
          goto joined_r0x002c15fc;
        }
      }
      else {
        local_87c = 0;
        lVar14 = FUN__text__002c10b0(param_1,&local_884,param_6 & 1,&local_64);
        if (lVar14 == 0) {
          bVar4 = false;
        }
        else {
          bVar4 = (1 << (ulong)(local_64 & 0x1f) & (uint)*(byte *)(lVar14 + 5)) != 0;
        }
        local_87c = 1;
        lVar14 = FUN__text__002c10b0(param_1,&local_884,param_6 & 1,&local_64);
        if (lVar14 == 0) {
          bVar7 = 0;
        }
        else {
          bVar7 = *(byte *)(lVar14 + 5) >> (ulong)(local_64 & 0x1f) & 1;
        }
joined_r0x002c15fc:
        if (bVar4) {
          bVar6 = bVar7 & param_4;
        }
        else {
          bVar8 = bVar7 | param_4;
        }
      }
      bVar7 = param_4 & 1;
      param_4 = bVar6;
      if (bVar7 == 0) {
        param_4 = bVar8;
      }
      param_1 = param_1 + uVar12 * 0x58;
      puVar3 = (uint *)(param_1 + 0x70);
      *(char *)(param_1 + 0xc0) = (char)param_3;
      goto joined_r0x002c1498;
    }
  }
  param_1 = param_1 + uVar12 * 0x58;
  puVar3 = (uint *)(param_1 + 0xd4);
  *(char *)(param_1 + 0x124) = (char)param_3;
joined_r0x002c1498:
  if ((param_4 & 1) == 0) {
    uVar9 = *puVar3 & 0xfffffff7;
  }
  else {
    uVar9 = *puVar3 | 8;
  }
  uVar10 = 0x10;
  if ((param_5 & 1) == 0) {
    uVar10 = 0;
  }
  uVar11 = 0x20;
  if ((param_6 & 1) == 0) {
    uVar11 = 0;
  }
  *puVar3 = uVar11 | uVar10 | uVar9 & 0xffffffcf;
  return;
}


