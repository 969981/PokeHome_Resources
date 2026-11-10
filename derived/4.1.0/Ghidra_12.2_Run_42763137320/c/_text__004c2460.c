/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c2460; name: FUN_.text__004c2460
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004c2460(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  undefined8 *puVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined8 local_78;
  
  puVar7 = _DAT_008a45f0;
  uVar9 = (ulong)*(uint *)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0x18) != 0) {
    lVar11 = *(long *)(param_1 + 0x10);
    lVar10 = lVar11;
    do {
      puVar17 = (undefined8 *)(lVar10 + 0x20);
      if ((undefined8 *)*puVar17 != (undefined8 *)0x0) {
        puVar14 = (undefined8 *)(lVar10 + 0x18);
        puVar19 = (undefined8 *)0x0;
        puVar18 = (undefined8 *)*puVar17;
        do {
          if ((*(ushort *)(lVar10 + 0x28) >> (ulong)(*(byte *)((long)puVar18 + 0x29) & 0x1f) & 1) ==
              0) {
            uVar9 = FUN__text__004460d8(puVar18,param_2,1,puVar14);
            if ((uVar9 & 1) == 0) goto LAB__text__004c24e4;
LAB__text__004c257c:
            bVar3 = *(byte *)(puVar18 + 5);
            if ((bVar3 != 0x90) || (*(char *)((long)puVar18 + 0x2d) == '\0')) {
              uVar6 = bVar3 - 0x80;
              if (((uVar6 != 0) && (bVar3 != 0xfe)) &&
                 ((bVar3 != 0x90 || (*(char *)((long)puVar18 + 0x2d) != '\0')))) {
                lVar11 = puVar18[3];
                if (*(char *)(lVar11 + 0x48) == '\0') {
                  local_a0 = *(undefined8 *)(lVar11 + 0x10);
                }
                else {
                  local_a0 = 0;
                }
                local_80 = 0xff;
                if ((uVar6 < 0x21) &&
                   (local_80 = 0xff, (1L << ((ulong)uVar6 & 0x3f) & 0x100010001U) != 0)) {
                  local_80 = *(undefined1 *)((long)puVar18 + 0x2c);
                }
                local_88 = *(undefined1 *)((long)puVar18 + 0x29);
                local_78 = 0;
                local_90 = *(undefined4 *)(lVar11 + 0x38);
                local_98 = 0;
                if (bVar3 == 0xe0) {
                  FUN__text__00434a40((float)((uint)*(byte *)((long)puVar18 + 0x2c) |
                                             (uint)*(byte *)((long)puVar18 + 0x2d) << 7) * 0.0078125
                                      ,*puVar7,0x100000083,&local_a0,0,1,0);
                }
                else if (bVar3 == 0xb0) {
                  bVar3 = *(byte *)((long)puVar18 + 0x2c);
                  if ((bVar3 != 0x78) && (bVar3 != 0x7b)) {
                    if (bVar3 == 0x79) {
                      uVar9 = 1;
                      *(undefined2 *)(lVar10 + 0x28) = 0;
                      do {
                        FUN__text__00434b30(*puVar7,uVar9 | 0x100000000,&local_a0,0,1);
                        uVar9 = uVar9 + 1;
                      } while (uVar9 != 0x86);
                    }
                    else {
                      uVar20 = NEON_ucvtf((uint)*(byte *)((long)puVar18 + 0x2d));
                      FUN__text__00434a40(uVar20,*puVar7,(ulong)bVar3 + 0x100000001,&local_a0,0,1,0)
                      ;
                      if (*(char *)((long)puVar18 + 0x2c) == '@') {
                        uVar5 = *(ushort *)(lVar10 + 0x28) &
                                ((ushort)(1 << (ulong)(*(byte *)((long)puVar18 + 0x29) & 0x1f)) ^
                                0xffff);
                        *(ushort *)(lVar10 + 0x28) = uVar5;
                        *(ushort *)(lVar10 + 0x28) =
                             uVar5 | (ushort)(0x3f < *(byte *)((long)puVar18 + 0x2d)) <<
                                     (ulong)(*(byte *)((long)puVar18 + 0x29) & 0x1f);
                      }
                    }
                  }
                }
              }
            }
            puVar16 = (undefined8 *)*puVar18;
            puVar1 = puVar17;
            if ((undefined8 *)*puVar17 != puVar18) {
              puVar1 = puVar19;
            }
            *puVar1 = puVar16;
            if ((undefined8 *)*puVar14 == puVar18) {
              *puVar14 = puVar19;
              cVar4 = *(char *)(puVar18 + 5);
            }
            else {
              cVar4 = *(char *)(puVar18 + 5);
            }
            if ((cVar4 == -0x80) || ((cVar4 == -0x70 && (*(char *)((long)puVar18 + 0x2d) == '\0'))))
            {
              *(long *)(puVar18[2] + 0x18) = param_1;
              *puVar18 = 0;
              puVar1 = (undefined8 *)(param_1 + 0x28);
              if (*(long *)(param_1 + 0x28) != 0) {
                puVar1 = *(undefined8 **)(param_1 + 0x20);
              }
              *puVar1 = puVar18;
              *(undefined8 **)(param_1 + 0x20) = puVar18;
              puVar18 = puVar19;
            }
            else {
              FUN__text__00445db0(puVar18);
              puVar18 = puVar19;
            }
          }
          else {
            if (*(char *)(puVar18 + 5) == -0x80) {
              bVar8 = true;
            }
            else if (*(char *)(puVar18 + 5) == -0x70) {
              bVar8 = *(char *)((long)puVar18 + 0x2d) == '\0';
            }
            else {
              bVar8 = false;
            }
            uVar9 = FUN__text__004460d8(puVar18,param_2,bVar8 ^ 1,puVar14);
            if ((uVar9 & 1) != 0) goto LAB__text__004c257c;
LAB__text__004c24e4:
            puVar16 = (undefined8 *)*puVar18;
          }
          puVar19 = puVar18;
          puVar18 = puVar16;
        } while (puVar16 != (undefined8 *)0x0);
        lVar11 = *(long *)(param_1 + 0x10);
        uVar9 = (ulong)*(uint *)(param_1 + 0x18);
      }
      lVar10 = lVar10 + 0x30;
    } while (lVar10 != lVar11 + uVar9 * 0x30);
  }
  plVar12 = *(long **)(param_1 + 0x28);
  if (plVar12 != (long *)0x0) {
    plVar15 = (long *)0x0;
    do {
      while( true ) {
        plVar13 = plVar12;
        lVar10 = plVar13[2];
        plVar12 = (long *)*plVar13;
        if (*(int *)(lVar10 + 0x6c) != 0 || *(int *)(lVar10 + 0x94) != 0) break;
        plVar2 = (long *)(param_1 + 0x28);
        if (*(long **)(param_1 + 0x28) != plVar13) {
          plVar2 = plVar15;
        }
        *plVar2 = (long)plVar12;
        if (*(long **)(param_1 + 0x20) == plVar13) {
          *(long **)(param_1 + 0x20) = plVar15;
        }
        *(undefined8 *)(lVar10 + 0x18) = 0;
        FUN__text__00446af0(plVar13);
        FUN__text__00445db0(plVar13);
        if (plVar12 == (long *)0x0) {
          return;
        }
      }
      plVar15 = plVar13;
    } while (plVar12 != (long *)0x0);
  }
  return;
}


