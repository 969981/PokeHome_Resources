/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c2fc0; name: FUN_.text__006c2fc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006c2fc0(long *param_1,long *param_2,undefined8 param_3,long param_4,long param_5,
                        long param_6)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  byte bVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long lVar16;
  
  FUN__text__006b2060();
  lVar11 = _DAT_008a6928;
  plVar8 = param_1 + 0x1f;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((long)param_1 + 0x10a) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined8 *)((long)param_1 + 0xd2) = 0;
  *(undefined8 *)((long)param_1 + 0xda) = 0;
  *param_1 = lVar11 + 0x10;
  FUN__text__0069d6f4(plVar8);
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  FUN__text__0069d6f4(plVar8);
  *(undefined4 *)((long)param_1 + 0xec) = 0xffffffff;
  FUN__text__0069d6f4(plVar8);
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  FUN__text__0069d6f4(plVar8);
  *(undefined4 *)((long)param_1 + 0xf4) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((long)param_1 + 0x10a) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  lVar11 = param_5;
  if (*(short *)(param_6 + 0x44) != 0 || param_5 == 0) {
    lVar11 = param_4;
  }
  *(byte *)(param_1 + 0x21) = *(byte *)(lVar11 + 0x65) >> 2 & 3;
  bVar4 = *(byte *)(lVar11 + 0x65);
  bVar12 = (bVar4 >> 1 & 1) != 0;
  if ((bool)bVar12) {
    *(undefined1 *)((long)param_1 + 0x10a) = 1;
    bVar4 = *(byte *)(lVar11 + 0x65);
  }
  if ((bVar4 & 1) != 0) {
    bVar12 = bVar12 | 2;
    *(byte *)((long)param_1 + 0x10a) = bVar12;
    bVar4 = *(byte *)(lVar11 + 0x65);
  }
  if ((bVar4 >> 4 & 1) != 0) {
    *(byte *)((long)param_1 + 0x10a) = bVar12 | 4;
  }
  puVar1 = (undefined4 *)(lVar11 + (ulong)*(uint *)(lVar11 + 0x68));
  bVar12 = *(byte *)((long)puVar1 + 0x12);
  if (2 < bVar12) {
    bVar12 = 3;
  }
  if (bVar12 != 0) {
    FUN__text__0069d730(plVar8,bVar12);
  }
  FUN__text__006c3530(param_1,lVar11);
  *(undefined4 *)(param_1 + 0x1d) = *puVar1;
  *(undefined4 *)((long)param_1 + 0xec) = puVar1[1];
  *(undefined4 *)(param_1 + 0x1e) = puVar1[2];
  *(undefined4 *)((long)param_1 + 0xf4) = puVar1[3];
  if ((bVar12 != 0) && ((char)param_1[0x1f] != '\0')) {
    FUN__text__0069d860(plVar8,puVar1 + 5,bVar12);
  }
  uVar6 = FUN__text__0069d8f0(*(undefined8 *)(param_6 + 0x30),
                              *(undefined2 *)(param_4 + (ulong)*(uint *)(param_4 + 0x68) + 0x10));
  if (param_5 == 0) {
    uVar7 = 0;
    plVar8 = (long *)FUN__text__006a0f04(0x50);
  }
  else {
    uVar7 = FUN__text__0069d8f0(*(undefined8 *)(param_6 + 0x38),
                                *(undefined2 *)(param_5 + (ulong)*(uint *)(param_5 + 0x68) + 0x10));
    plVar8 = (long *)FUN__text__006a0f04(0x50);
  }
  if (plVar8 != (long *)0x0) {
    *plVar8 = _DAT_008a69f0 + 0x10;
    FUN__text__006a9930(plVar8,param_2,param_3,uVar6,uVar7,param_6);
  }
  param_1[0x23] = (long)plVar8;
  FUN__text__006ab450(plVar8,param_2,param_3,param_6);
  *(undefined1 *)((long)param_1 + 0x109) = 0;
  param_1[0x22] = 0;
  bVar12 = *(byte *)(lVar11 + 100);
  if (bVar12 != 0) {
    plVar8 = param_1 + 0x22;
    lVar9 = FUN__text__006a0f04((ulong)bVar12 << 4);
    if (lVar9 == 0) {
      *plVar8 = 0;
    }
    else {
      if (bVar12 == 1) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        puVar15 = (undefined1 *)(lVar9 + 0x10);
        do {
          uVar14 = uVar14 + 2;
          puVar15[-0x10] = 0;
          *(undefined8 *)(puVar15 + -8) = 0;
          *puVar15 = 0;
          *(undefined8 *)(puVar15 + 8) = 0;
          puVar15 = puVar15 + 0x20;
        } while (((ulong)bVar12 & 0xfe) != uVar14);
      }
      if ((bVar12 & 1) != 0) {
        puVar15 = (undefined1 *)(lVar9 + uVar14 * 0x10);
        *puVar15 = 0;
        *(undefined8 *)(puVar15 + 8) = 0;
      }
      param_1[0x22] = lVar9;
      *(byte *)((long)param_1 + 0x109) = bVar12;
    }
    lVar9 = lVar11 + (ulong)*(uint *)(lVar11 + 0x6c);
    lVar2 = param_4 + (ulong)*(uint *)(param_4 + 0x6c);
    if (param_5 == 0) {
      if ('\0' < *(char *)((long)param_1 + 0x109)) {
        lVar16 = 0;
        uVar14 = 0;
        do {
          *(undefined1 *)(*plVar8 + lVar16) =
               *(undefined1 *)(lVar11 + 2 + (ulong)*(uint *)(lVar9 + uVar14 * 4));
          if (uVar14 < *(byte *)(param_4 + 100)) {
            uVar6 = FUN__text__0069d8f0(*(undefined8 *)(param_6 + 0x30),
                                        *(undefined2 *)
                                         (param_4 + (ulong)*(uint *)(lVar2 + uVar14 * 4)));
            puVar10 = (undefined8 *)FUN__text__006a0f04(0x50);
          }
          else {
            uVar6 = 0;
            puVar10 = (undefined8 *)FUN__text__006a0f04(0x50);
          }
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = 0x89dc28;
            FUN__text__006a9930(puVar10,param_2,param_3,uVar6,0,param_6);
          }
          *(undefined8 **)(param_1[0x22] + lVar16 + 8) = puVar10;
          FUN__text__006ab450(*(undefined8 *)(param_1[0x22] + lVar16 + 8),param_2,param_3,param_6);
          uVar14 = uVar14 + 1;
          lVar16 = lVar16 + 0x10;
        } while ((long)uVar14 < (long)*(char *)((long)param_1 + 0x109));
      }
    }
    else if ('\0' < *(char *)((long)param_1 + 0x109)) {
      uVar3 = *(uint *)(param_5 + 0x6c);
      lVar16 = 0;
      uVar14 = 0;
      do {
        *(undefined1 *)(*plVar8 + lVar16) =
             *(undefined1 *)(lVar11 + 2 + (ulong)*(uint *)(lVar9 + uVar14 * 4));
        if (uVar14 < *(byte *)(param_4 + 100)) {
          uVar6 = FUN__text__0069d8f0(*(undefined8 *)(param_6 + 0x30),
                                      *(undefined2 *)
                                       (param_4 + (ulong)*(uint *)(lVar2 + uVar14 * 4)));
        }
        else {
          uVar6 = 0;
        }
        uVar7 = FUN__text__0069d8f0(*(undefined8 *)(param_6 + 0x38),
                                    *(undefined2 *)
                                     (param_5 +
                                     (ulong)*(uint *)(param_5 + (ulong)uVar3 + uVar14 * 4)));
        puVar10 = (undefined8 *)FUN__text__006a0f04(0x50);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = 0x89dc28;
          FUN__text__006a9930(puVar10,param_2,param_3,uVar6,uVar7,param_6);
        }
        *(undefined8 **)(param_1[0x22] + lVar16 + 8) = puVar10;
        FUN__text__006ab450(*(undefined8 *)(param_1[0x22] + lVar16 + 8),param_2,param_3,param_6);
        uVar14 = uVar14 + 1;
        lVar16 = lVar16 + 0x10;
      } while ((long)uVar14 < (long)*(char *)((long)param_1 + 0x109));
    }
    if (*(char *)(lVar11 + 100) == '\x01') {
      bVar5 = 1 < *(byte *)(param_1 + 0x21) - 1;
      uVar6 = 4;
      if (bVar5) {
        uVar6 = 0xc;
      }
      uVar13 = 3;
      if (!bVar5) {
        uVar13 = 1;
      }
      lVar11 = FUN__text__006a0f04(uVar6);
      param_1[0x24] = lVar11;
      *(undefined4 *)(param_1 + 0x25) = uVar13;
      if (param_2 != (long *)0x0) {
        lVar11 = FUN__text__006c1690(param_3,0x10,0x230);
        *param_2 = *param_2 + lVar11 * (ulong)*(uint *)(param_1 + 0x25);
      }
    }
  }
  return;
}


