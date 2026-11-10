/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004525e0; name: FUN_.text__004525e0
 */


void FUN__text__004525e0(long param_1,ushort *param_2,uint param_3,ushort *param_4,uint param_5,
                        long *param_6,long *param_7,undefined8 param_8,ushort *param_9,uint param_10
                        )

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  
  if ((int)param_6[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar4 = 0;
    do {
      lVar6 = *(long *)(param_1 + (ulong)*(ushort *)(*param_6 + uVar4 * 2) * 8);
      *(float *)(lVar6 + 4) = *(float *)(lVar6 + 8);
      if (*(float *)(lVar6 + 8) <= 0.1) {
        *(undefined1 *)(lVar6 + 0xc) = 4;
      }
      uVar5 = *(uint *)(param_6 + 1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  if (uVar5 < *(uint *)((long)param_6 + 0xc)) {
    uVar4 = (ulong)uVar5;
    do {
      lVar6 = *(long *)(param_1 + (ulong)*(ushort *)(*param_6 + uVar4 * 2) * 8);
      *(float *)(lVar6 + 0x10) = *(float *)(lVar6 + 0x14);
      if (*(float *)(lVar6 + 0x14) <= 0.1) {
        *(undefined1 *)(lVar6 + 0x18) = 4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)((long)param_6 + 0xc));
  }
  if (param_3 != 0) {
    uVar4 = (ulong)param_3;
    do {
      uVar7 = (ulong)*param_2;
      lVar6 = *(long *)(param_1 + uVar7 * 8);
      fVar8 = *(float *)(lVar6 + 8);
      if (fVar8 == *(float *)(lVar6 + 4)) {
        uVar5 = (int)*(char *)(lVar6 + 0xc) - 1;
        if ((*(char *)(lVar6 + 0xc) < 1) ||
           (*(char *)(lVar6 + 0xc) = (char)uVar5, (uVar5 & 0xff) != 0)) goto LAB__text__00452710;
        bVar2 = *(byte *)(lVar6 + 0xd);
        bVar1 = bVar2 & 0xf3;
        if ((bVar2 & 4) != 0) {
          bVar1 = bVar2;
        }
        *(byte *)(lVar6 + 0xd) = bVar1 | 4;
        lVar6 = *(long *)(param_1 + uVar7 * 8);
        fVar8 = *(float *)(lVar6 + 0x14);
        if (fVar8 != *(float *)(lVar6 + 0x10)) goto LAB__text__00452720;
LAB__text__00452760:
        uVar5 = (int)*(char *)(lVar6 + 0x18) - 1;
        if ((0 < *(char *)(lVar6 + 0x18)) &&
           (*(char *)(lVar6 + 0x18) = (char)uVar5, (uVar5 & 0xff) == 0)) {
          bVar2 = *(byte *)(lVar6 + 0x19);
          bVar1 = bVar2 & 0xf3;
          if ((bVar2 & 4) != 0) {
            bVar1 = bVar2;
          }
          *(byte *)(lVar6 + 0x19) = bVar1 | 4;
        }
      }
      else {
        *(float *)(lVar6 + 4) = fVar8;
        if (0.1 < fVar8) {
LAB__text__00452710:
          lVar6 = *(long *)(param_1 + uVar7 * 8);
          fVar8 = *(float *)(lVar6 + 0x14);
          if (fVar8 == *(float *)(lVar6 + 0x10)) goto LAB__text__00452760;
        }
        else {
          *(undefined1 *)(lVar6 + 0xc) = 4;
          lVar6 = *(long *)(param_1 + uVar7 * 8);
          fVar8 = *(float *)(lVar6 + 0x14);
          if (fVar8 == *(float *)(lVar6 + 0x10)) goto LAB__text__00452760;
        }
LAB__text__00452720:
        *(float *)(lVar6 + 0x10) = fVar8;
        if (fVar8 <= 0.1) {
          *(undefined1 *)(lVar6 + 0x18) = 4;
        }
      }
      uVar4 = uVar4 - 1;
      param_2 = param_2 + 1;
    } while (uVar4 != 0);
  }
  if (param_10 != 0) {
    uVar4 = (ulong)param_10;
    do {
      uVar7 = (ulong)*param_9;
      lVar6 = *(long *)(param_1 + uVar7 * 8);
      fVar8 = *(float *)(lVar6 + 8);
      if (fVar8 == *(float *)(lVar6 + 4)) {
        uVar5 = (int)*(char *)(lVar6 + 0xc) - 1;
        if ((*(char *)(lVar6 + 0xc) < 1) ||
           (*(char *)(lVar6 + 0xc) = (char)uVar5, (uVar5 & 0xff) != 0)) goto LAB__text__00452810;
        bVar2 = *(byte *)(lVar6 + 0xd);
        bVar1 = bVar2 & 0xf3;
        if ((bVar2 & 4) != 0) {
          bVar1 = bVar2;
        }
        *(byte *)(lVar6 + 0xd) = bVar1 | 4;
        lVar6 = *(long *)(param_1 + uVar7 * 8);
        fVar8 = *(float *)(lVar6 + 0x14);
        if (fVar8 != *(float *)(lVar6 + 0x10)) goto LAB__text__00452820;
LAB__text__00452860:
        uVar5 = (int)*(char *)(lVar6 + 0x18) - 1;
        if ((0 < *(char *)(lVar6 + 0x18)) &&
           (*(char *)(lVar6 + 0x18) = (char)uVar5, (uVar5 & 0xff) == 0)) {
          bVar2 = *(byte *)(lVar6 + 0x19);
          bVar1 = bVar2 & 0xf3;
          if ((bVar2 & 4) != 0) {
            bVar1 = bVar2;
          }
          *(byte *)(lVar6 + 0x19) = bVar1 | 4;
        }
      }
      else {
        *(float *)(lVar6 + 4) = fVar8;
        if (0.1 < fVar8) {
LAB__text__00452810:
          lVar6 = *(long *)(param_1 + uVar7 * 8);
          fVar8 = *(float *)(lVar6 + 0x14);
          if (fVar8 == *(float *)(lVar6 + 0x10)) goto LAB__text__00452860;
        }
        else {
          *(undefined1 *)(lVar6 + 0xc) = 4;
          lVar6 = *(long *)(param_1 + uVar7 * 8);
          fVar8 = *(float *)(lVar6 + 0x14);
          if (fVar8 == *(float *)(lVar6 + 0x10)) goto LAB__text__00452860;
        }
LAB__text__00452820:
        *(float *)(lVar6 + 0x10) = fVar8;
        if (fVar8 <= 0.1) {
          *(undefined1 *)(lVar6 + 0x18) = 4;
        }
      }
      uVar4 = uVar4 - 1;
      param_9 = param_9 + 1;
    } while (uVar4 != 0);
  }
  if ((int)param_7[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar4 = 0;
    do {
      lVar6 = *(long *)(param_1 + (ulong)*(ushort *)(*param_7 + uVar4 * 2) * 8);
      uVar5 = (int)*(char *)(lVar6 + 0xc) - 1;
      if ((0 < *(char *)(lVar6 + 0xc)) &&
         (*(char *)(lVar6 + 0xc) = (char)uVar5, (uVar5 & 0xff) == 0)) {
        bVar2 = *(byte *)(lVar6 + 0xd);
        bVar1 = bVar2 & 0xf3;
        if ((bVar2 & 4) != 0) {
          bVar1 = bVar2;
        }
        *(byte *)(lVar6 + 0xd) = bVar1 | 4;
      }
      uVar5 = *(uint *)(param_7 + 1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  if (uVar5 < *(uint *)((long)param_7 + 0xc)) {
    uVar4 = (ulong)uVar5;
    do {
      lVar6 = *(long *)(param_1 + (ulong)*(ushort *)(*param_7 + uVar4 * 2) * 8);
      uVar5 = (int)*(char *)(lVar6 + 0x18) - 1;
      if ((0 < *(char *)(lVar6 + 0x18)) &&
         (*(char *)(lVar6 + 0x18) = (char)uVar5, (uVar5 & 0xff) == 0)) {
        bVar2 = *(byte *)(lVar6 + 0x19);
        bVar1 = bVar2 & 0xf3;
        if ((bVar2 & 4) != 0) {
          bVar1 = bVar2;
        }
        *(byte *)(lVar6 + 0x19) = bVar1 | 4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)((long)param_7 + 0xc));
  }
  if (param_5 != 0) {
    uVar4 = (ulong)param_5;
    do {
      uVar7 = (ulong)*param_4;
      lVar6 = *(long *)(param_1 + uVar7 * 8);
      uVar5 = (int)*(char *)(lVar6 + 0xc) - 1;
      if ((*(char *)(lVar6 + 0xc) < 1) ||
         (*(char *)(lVar6 + 0xc) = (char)uVar5, (uVar5 & 0xff) != 0)) {
        lVar6 = *(long *)(param_1 + uVar7 * 8);
        cVar3 = *(char *)(lVar6 + 0x18);
      }
      else {
        bVar2 = *(byte *)(lVar6 + 0xd);
        bVar1 = bVar2 & 0xf3;
        if ((bVar2 & 4) != 0) {
          bVar1 = bVar2;
        }
        *(byte *)(lVar6 + 0xd) = bVar1 | 4;
        lVar6 = *(long *)(param_1 + uVar7 * 8);
        cVar3 = *(char *)(lVar6 + 0x18);
      }
      if ((0 < cVar3) &&
         (uVar5 = (int)cVar3 - 1, *(char *)(lVar6 + 0x18) = (char)uVar5, (uVar5 & 0xff) == 0)) {
        bVar2 = *(byte *)(lVar6 + 0x19);
        bVar1 = bVar2 & 0xf3;
        if ((bVar2 & 4) != 0) {
          bVar1 = bVar2;
        }
        *(byte *)(lVar6 + 0x19) = bVar1 | 4;
      }
      uVar4 = uVar4 - 1;
      param_4 = param_4 + 1;
    } while (uVar4 != 0);
  }
  return;
}


