/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055cfa0; name: FUN_.text__0055cfa0
 */


/* WARNING: Removing unreachable block (ram,0x0055d04c) */

void FUN__text__0055cfa0(long param_1,long *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  
  FUN__text__0055ca1c(*(undefined8 *)(param_1 + 8),param_1 + 0x70);
  FUN__text__0055cd30(param_1,param_1 + 0x70);
  if (*(char *)(param_1 + 0xf8) != '\0') {
    FUN__text__0055e72c(*(undefined4 *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xf0),
                        param_1 + 0x40,*(undefined4 *)(param_1 + 0xe8),0);
    FUN__text__0055f1e0(*(undefined4 *)(param_1 + 0xf4),param_1 + 0x5c,0);
  }
  uVar2 = *(ushort *)((long)param_2 + 0x12);
  uVar6 = (ulong)uVar2;
  if (uVar2 < 0x20) {
    return;
  }
  uVar3 = *(ushort *)(param_2 + 2);
  if ((uint)uVar3 <= (uint)uVar2) goto LAB__text__0055d0d8;
  bVar1 = *(byte *)(param_2 + 1);
  if (bVar1 != 0) {
    uVar7 = (ulong)(((uint)uVar3 - (uint)uVar2) * 4);
    if (bVar1 == 1) {
      lVar5 = 0;
LAB__text__0055d0b0:
      memset((void *)(*param_2 + lVar5 * (ulong)*(ushort *)(param_2 + 2) + uVar6 * 4),0,uVar7);
    }
    else {
      uVar11 = (ulong)bVar1 & 0xfe;
      lVar4 = 4;
      do {
        lVar5 = lVar4;
        memset((void *)(*param_2 + (lVar5 + -4) * (ulong)*(ushort *)(param_2 + 2) + uVar6 * 4),0,
               uVar7);
        memset((void *)(*param_2 + lVar5 * (ulong)*(ushort *)(param_2 + 2) + uVar6 * 4),0,uVar7);
        uVar11 = uVar11 - 2;
        lVar4 = lVar5 + 8;
      } while (uVar11 != 0);
      lVar5 = lVar5 + 4;
      if ((bVar1 & 1) != 0) goto LAB__text__0055d0b0;
    }
    uVar3 = *(ushort *)(param_2 + 2);
  }
  uVar6 = (ulong)uVar3;
  *(ushort *)((long)param_2 + 0x12) = uVar3;
LAB__text__0055d0d8:
  uVar10 = (uint)uVar3;
  lVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
                    (*(long **)(param_1 + 0x10),(ulong)(*(int *)(param_1 + 0x104) * uVar10) << 2,
                     0x70e70d,0xc2);
  if (lVar4 != 0) {
    if (*(int *)(param_1 + 0x104) != 0) {
      lVar5 = 0;
      uVar11 = 0;
      uVar7 = 0;
      do {
        memcpy((void *)(lVar4 + uVar11 * 4),
               (void *)(*param_2 + lVar5 * (ulong)*(ushort *)(param_2 + 2)),
               (ulong)(uint)((int)uVar6 << 2));
        uVar7 = uVar7 + 1;
        uVar11 = (ulong)((int)uVar11 + uVar10);
        lVar5 = lVar5 + 4;
      } while (uVar7 < *(uint *)(param_1 + 0x104));
    }
    FUN__text__0055d720(param_1 + 0x20,param_2);
    FUN__text__0055e7a0(param_1 + 0x40,param_2);
    FUN__text__0055f250(param_1 + 0x5c,param_2);
    FUN__text__0055d720(param_1 + 0x30,param_2);
    if (*(int *)(param_1 + 0x104) != 0) {
      lVar9 = 0;
      lVar5 = 0;
      uVar11 = 0;
      uVar7 = 0;
      fVar12 = *(float *)(param_1 + 0x110) * 0.01;
      fVar13 = *(float *)(param_1 + 0x100) * 0.01;
      do {
        lVar8 = *param_2 + lVar9 * (ulong)*(ushort *)(param_2 + 2);
        FUN__text__0054f710(*(float *)(param_1 + 0x10c) * fVar12,*(float *)(param_1 + 0xfc) * fVar13
                            ,*(float *)(param_1 + 0x10c) * (1.0 - fVar12),
                            *(float *)(param_1 + 0xfc) * (1.0 - fVar13),lVar8,lVar4 + uVar11 * 4,
                            uVar6);
        FUN__text__0055f350(*(long *)(param_1 + 0x18) + lVar5,lVar8,uVar6);
        uVar7 = uVar7 + 1;
        uVar11 = (ulong)((int)uVar11 + uVar10);
        lVar5 = lVar5 + 0xc;
        lVar9 = lVar9 + 4;
      } while (uVar7 < *(uint *)(param_1 + 0x104));
    }
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),lVar4);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x100);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0xfc);
  }
  return;
}


