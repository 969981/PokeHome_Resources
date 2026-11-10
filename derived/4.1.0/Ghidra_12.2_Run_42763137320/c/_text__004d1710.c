/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d1710; name: FUN_.text__004d1710
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004d1710(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  uint *puVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  
  if (param_2 < 4) {
    cVar3 = (char)param_3;
    if (((param_3 ^ 0xffffffff) & 0xff) == 0) {
      lVar6 = 0;
      plVar14 = (long *)(param_1 + 0x168);
      bVar4 = (*(uint *)(param_1 + 0x160) & 0xf00) == 0x300;
    }
    else {
      lVar8 = param_1 + (long)(int)cVar3 * 0x30;
      lVar6 = (long)cVar3 + 1;
      plVar14 = (long *)(lVar8 + 0xb0);
      bVar4 = *(char *)(lVar8 + 0xc5) != '\0';
    }
    *(char *)(param_1 + lVar6 + 0x178) = cVar3;
    uVar10 = (ulong)(param_2 & 0xff);
    do {
      uVar1 = uVar10 + 1;
      *(char *)(param_1 + uVar1 + 0x178) = (char)uVar10;
      lVar6 = param_1 + uVar10 * 0x30;
      plVar2 = (long *)(lVar6 + 0xa0);
      uVar16 = *(uint *)(lVar6 + 0xa8);
      if (uVar16 != 0) {
        do {
          uVar16 = uVar16 - 1;
          lVar8 = *plVar2;
          plVar11 = *(long **)(lVar8 + (ulong)uVar16 * 8);
          if (plVar11 != (long *)0x0) {
            plVar5 = (long *)plVar11[0x12];
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x10))(plVar5,_DAT_008a47f0);
              plVar11[0x12] = 0;
            }
            puVar12 = (undefined8 *)plVar11[0x13];
            if (puVar12 != (undefined8 *)0x0) {
              (**(code **)*puVar12)(puVar12);
              FUN__text__00400fc0(5,puVar12);
              plVar11[0x13] = 0;
            }
            (**(code **)(*plVar11 + 0x28))(plVar11);
            lVar8 = *plVar2;
            puVar12 = *(undefined8 **)(lVar8 + (ulong)uVar16 * 8);
            if (puVar12 != (undefined8 *)0x0) {
              (**(code **)*puVar12)(puVar12);
              FUN__text__00400fc0(5,puVar12);
              lVar8 = *plVar2;
            }
          }
          uVar9 = *(uint *)(lVar6 + 0xa8);
          puVar12 = (undefined8 *)(lVar8 + (ulong)uVar16 * 8);
          puVar7 = (undefined8 *)((lVar8 + (ulong)uVar9 * 8) - 8);
          if (puVar12 < puVar7) {
            *puVar12 = *puVar7;
            uVar9 = *(uint *)(lVar6 + 0xa8);
          }
          *(undefined1 *)(param_1 + uVar10 * 0x30 + 0xc4) = 0;
          *(uint *)(lVar6 + 0xa8) = uVar9 - 1;
        } while (uVar16 != 0);
      }
      lVar8 = param_1 + uVar10 * 0x30;
      puVar13 = (uint *)(lVar8 + 0xb8);
      uVar16 = *puVar13;
      plVar11 = (long *)(lVar8 + 0xb0);
      lVar8 = *plVar11;
      if (uVar16 != 0) {
        lVar15 = (ulong)uVar16 * 0x30;
        do {
          FUN__text__004d3ca8(lVar8);
          lVar8 = lVar8 + 0x30;
          lVar15 = lVar15 + -0x30;
        } while (lVar15 != 0);
        lVar8 = *plVar11;
      }
      *puVar13 = 0;
      *(undefined8 *)(param_1 + uVar10 * 0x30 + 0xc0) = 0x1000000ffffffff;
      if (lVar8 != 0) {
        FUN__text__00400fc0(0,lVar8);
        *plVar11 = 0;
        *(undefined4 *)(param_1 + uVar10 * 0x30 + 0xbc) = 0;
      }
      if (*plVar2 != 0) {
        *(undefined4 *)(lVar6 + 0xa8) = 0;
        FUN__text__00400fc0(0);
        *plVar2 = 0;
        *(undefined4 *)(lVar6 + 0xac) = 0;
      }
      *(undefined1 *)(param_1 + uVar10 * 0x30 + 200) = 0;
      uVar10 = uVar1;
    } while (uVar1 != 4);
    if ((int)plVar14[1] != 0) {
      lVar6 = *plVar14;
      do {
        FUN__text__004d19d0(param_1,param_3,param_2,bVar4,lVar6);
        lVar6 = lVar6 + 0x30;
      } while (lVar6 != *plVar14 + (ulong)*(uint *)(plVar14 + 1) * 0x30);
    }
  }
  return;
}


