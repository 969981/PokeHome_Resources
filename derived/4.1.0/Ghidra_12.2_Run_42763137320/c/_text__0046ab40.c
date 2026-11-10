/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046ab40; name: FUN_.text__0046ab40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0046ab40(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  ushort *puVar9;
  float *pfVar10;
  long *plVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  
  do {
    lVar3 = param_1;
    param_1 = *(long *)(lVar3 + 0x78);
  } while ((*(ulong *)(lVar3 + 0x98) & 0x20020000ffe) == 0 && *(long *)(lVar3 + 0x78) != 0);
  FUN__text__0046a4e0(lVar3,param_2);
  *(undefined2 *)(param_4 + 5) = *(undefined2 *)(lVar3 + 0xd0);
  if (((*(long *)(lVar3 + 0x58) != 0) && ((*(byte *)(*(long *)(lVar3 + 0x58) + 5) >> 6 & 1) != 0))
     || (uVar4 = (**(code **)(*(long *)(lVar3 + 0x28) + 0x20))((long *)(lVar3 + 0x28),0x2e),
        (uVar4 & 1) != 0)) {
    plVar11 = (long *)(lVar3 + 0x28);
    uVar4 = (**(code **)(*plVar11 + 0x20))(plVar11,0x2e);
    fVar14 = 0.0;
    if ((((uVar4 & 1) != 0) && (*(char *)(lVar3 + 0x30) != '\0')) &&
       ((uVar4 = (**(code **)(*plVar11 + 0x28))(plVar11,0x2e), (uVar4 & 1) != 0 &&
        (plVar11 = (long *)(**(code **)(*plVar11 + 0x80))(plVar11), plVar11 != (long *)0x0)))) {
      for (lVar5 = *plVar11; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x10)) {
        puVar9 = *(ushort **)(lVar5 + 0x20);
        if (puVar9 != (ushort *)0x0) {
          uVar2 = *puVar9;
          uVar8 = (uint)uVar2;
          if (uVar2 < 2) {
            uVar8 = 1;
          }
          uVar4 = (ulong)uVar8;
          pfVar10 = (float *)((long)puVar9 + ((ulong)((uint)uVar2 * 2 + 9) & 0x3fff8));
          do {
            puVar9 = puVar9 + 1;
            if (*puVar9 == 0x2e) {
              fVar14 = *pfVar10 + fVar14;
              break;
            }
            pfVar10 = pfVar10 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
      }
    }
    if ((*(long *)(lVar3 + 0x58) != 0) && ((*(byte *)(*(long *)(lVar3 + 0x58) + 5) >> 6 & 1) != 0))
    {
      fVar12 = (float)FUN__text__00419e90(*_DAT_008a45f0,lVar3 + 0x48,0x2e,param_2);
      fVar14 = fVar12 + fVar14;
    }
    *(ushort *)(param_4 + 5) = *(ushort *)(param_4 + 5) & 0xffbf | (ushort)(0.0 < fVar14) << 6;
  }
  if ((*(long *)(lVar3 + 0x58) == 0) || (-1 < *(char *)(*(long *)(lVar3 + 0x58) + 2))) {
    pbVar6 = *(byte **)(lVar3 + 0x90);
    if (pbVar6 == (byte *)0x0) {
      *param_4 = 0x42c80000;
      pbVar6 = *(byte **)(lVar3 + 0x90);
    }
    else {
      bVar1 = *pbVar6;
      uVar8 = (uint)bVar1;
      if (bVar1 < 2) {
        uVar8 = 1;
      }
      uVar4 = (ulong)uVar8;
      pbVar7 = pbVar6 + ((ulong)bVar1 & 0xfc);
      do {
        pbVar7 = pbVar7 + 4;
        pbVar6 = pbVar6 + 1;
        if (*pbVar6 == 0x47) {
          *param_4 = *(undefined4 *)pbVar7;
          pbVar6 = *(byte **)(lVar3 + 0x90);
          goto joined_r0x0046ad7c;
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      *param_4 = 0x42c80000;
      pbVar6 = *(byte **)(lVar3 + 0x90);
    }
  }
  else {
    uVar13 = FUN__text__00419e90(*_DAT_008a45f0,lVar3 + 0x48,0x17,param_2);
    *param_4 = uVar13;
    pbVar6 = *(byte **)(lVar3 + 0x90);
  }
joined_r0x0046ad7c:
  if (pbVar6 != (byte *)0x0) {
    bVar1 = *pbVar6;
    uVar8 = (uint)bVar1;
    if (bVar1 < 2) {
      uVar8 = 1;
    }
    uVar4 = (ulong)uVar8;
    pbVar7 = pbVar6 + ((ulong)bVar1 & 0xfc);
    do {
      pbVar7 = pbVar7 + 4;
      pbVar6 = pbVar6 + 1;
      if (*pbVar6 == 0x46) {
        param_4[1] = *(undefined4 *)pbVar7;
        return;
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  param_4[1] = 0;
  return;
}


