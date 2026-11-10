/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00467430; name: FUN_.text__00467430
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00467430(long param_1,float *param_2,uint param_3,undefined8 param_4)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  ushort *puVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  
  pbVar5 = *(byte **)(param_1 + 0x90);
  fVar12 = *(float *)(_DAT_008a4ac0 + (ulong)param_3 * 4);
  if (pbVar5 != (byte *)0x0) {
    bVar1 = *pbVar5;
    uVar8 = (uint)bVar1;
    if (bVar1 < 2) {
      uVar8 = 1;
    }
    uVar4 = (ulong)uVar8;
    pfVar7 = (float *)(pbVar5 + ((ulong)bVar1 & 0xfc));
    do {
      pfVar7 = pfVar7 + 1;
      pbVar5 = pbVar5 + 1;
      if ((uint)*pbVar5 == (param_3 & 0xff)) {
        fVar12 = *pfVar7;
        break;
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *param_2 = *param_2 + fVar12;
  uVar8 = *(uint *)(_DAT_008a4ac8 + (ulong)param_3 * 4);
  uVar10 = (ulong)uVar8;
  plVar11 = (long *)(param_1 + 0x28);
  uVar4 = (**(code **)(*plVar11 + 0x20))(plVar11,uVar10);
  fVar12 = 0.0;
  if (((((uVar4 & 1) != 0) && (*(char *)(param_1 + 0x30) != '\0')) &&
      (uVar4 = (**(code **)(*plVar11 + 0x28))(plVar11,uVar10), (uVar4 & 1) != 0)) &&
     ((plVar11 = (long *)(**(code **)(*plVar11 + 0x80))(plVar11), plVar11 != (long *)0x0 &&
      (lVar3 = *plVar11, lVar3 != 0)))) {
    do {
      puVar6 = *(ushort **)(lVar3 + 0x20);
      if (puVar6 != (ushort *)0x0) {
        uVar2 = *puVar6;
        uVar9 = (uint)uVar2;
        if (uVar2 < 2) {
          uVar9 = 1;
        }
        uVar4 = (ulong)uVar9;
        pfVar7 = (float *)((long)puVar6 + ((ulong)((uint)uVar2 * 2 + 9) & 0x3fff8));
        do {
          puVar6 = puVar6 + 1;
          if ((uint)*puVar6 == (uVar8 & 0xffff)) {
            fVar12 = *pfVar7 + fVar12;
            break;
          }
          pfVar7 = pfVar7 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      lVar3 = *(long *)(lVar3 + 0x10);
    } while (lVar3 != 0);
  }
  if ((*(ulong **)(param_1 + 0x58) != (ulong *)0x0) &&
     ((**(ulong **)(param_1 + 0x58) >> (uVar10 & 0x3f) & 1) != 0)) {
    fVar13 = (float)FUN__text__00419e90(*_DAT_008a45f0,param_1 + 0x48,uVar10,param_4);
    fVar12 = fVar13 + fVar12;
  }
  *param_2 = *param_2 + fVar12;
  return;
}


