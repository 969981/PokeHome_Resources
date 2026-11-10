/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00495180; name: FUN_.text__00495180
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00495180(long param_1,int *param_2,uint param_3,undefined8 param_4)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ushort *puVar6;
  float *pfVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  
  pbVar9 = *(byte **)(param_1 + 0x90);
  iVar4 = *(int *)(_DAT_008a4ac0 + (ulong)param_3 * 4);
  if (pbVar9 != (byte *)0x0) {
    bVar1 = *pbVar9;
    uVar11 = (uint)bVar1;
    if (bVar1 < 2) {
      uVar11 = 1;
    }
    uVar5 = (ulong)uVar11;
    pbVar10 = pbVar9 + ((ulong)bVar1 & 0xfc);
    do {
      pbVar10 = pbVar10 + 4;
      pbVar9 = pbVar9 + 1;
      if ((uint)*pbVar9 == (param_3 & 0xff)) {
        iVar4 = *(int *)pbVar10;
        break;
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  *param_2 = *param_2 + iVar4;
  uVar11 = *(uint *)((ulong)param_3 * 4 + 0x73b2b0);
  uVar12 = (ulong)uVar11;
  plVar13 = (long *)(param_1 + 0x28);
  uVar5 = (**(code **)(*plVar13 + 0x20))(plVar13,uVar12);
  fVar15 = 0.0;
  if (((((uVar5 & 1) != 0) && (*(char *)(param_1 + 0x30) != '\0')) &&
      (uVar5 = (**(code **)(*plVar13 + 0x28))(plVar13,uVar12), (uVar5 & 1) != 0)) &&
     ((plVar13 = (long *)(**(code **)(*plVar13 + 0x80))(plVar13), plVar13 != (long *)0x0 &&
      (lVar3 = *plVar13, lVar3 != 0)))) {
    do {
      puVar6 = *(ushort **)(lVar3 + 0x20);
      if (puVar6 != (ushort *)0x0) {
        uVar2 = *puVar6;
        uVar8 = (uint)uVar2;
        if (uVar2 < 2) {
          uVar8 = 1;
        }
        uVar5 = (ulong)uVar8;
        pfVar7 = (float *)((long)puVar6 + ((ulong)((uint)uVar2 * 2 + 9) & 0x3fff8));
        do {
          puVar6 = puVar6 + 1;
          if ((uint)*puVar6 == (uVar11 & 0xffff)) {
            fVar15 = *pfVar7 + fVar15;
            break;
          }
          pfVar7 = pfVar7 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      lVar3 = *(long *)(lVar3 + 0x10);
    } while (lVar3 != 0);
  }
  if ((*(ulong **)(param_1 + 0x58) != (ulong *)0x0) &&
     ((**(ulong **)(param_1 + 0x58) >> (uVar12 & 0x3f) & 1) != 0)) {
    fVar14 = (float)FUN__text__00419e90(*_DAT_008a45f0,param_1 + 0x48,uVar12,param_4);
    fVar15 = fVar14 + fVar15;
  }
  fVar14 = 0.5;
  if (fVar15 <= 0.0) {
    fVar14 = -0.5;
  }
  *param_2 = *param_2 + (int)(fVar14 + fVar15);
  return;
}


