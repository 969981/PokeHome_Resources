/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00115190; name: FUN_.text__00115190
 */


long FUN__text__00115190(int *param_1,int *param_2)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar10;
  uint uVar9;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  
  uVar12 = (ulong)*(ushort *)((long)param_1 + (6 - (long)*param_1));
  puVar1 = (uint *)((long)param_1 + uVar12);
  uVar13 = (ulong)*puVar1;
  puVar1 = (uint *)((long)puVar1 + uVar13);
  if (*puVar1 != 0) {
    iVar4 = param_2[2];
    lVar11 = 0;
    iVar3 = param_2[5];
    do {
      uVar14 = (ulong)*(uint *)((long)param_1 + lVar11 + uVar12 + uVar13 + 4);
      lVar2 = (uVar14 - (long)*(int *)((long)puVar1 + uVar14 + lVar11 + 4)) + lVar11;
      if ((*(ushort *)((long)puVar1 + lVar2 + 4) < 5) ||
         (uVar8 = (ulong)*(ushort *)((long)puVar1 + lVar2 + 8), uVar8 == 0)) {
        piVar15 = (int *)0x0;
        if (iVar4 == 2) goto LAB__text__00115248;
LAB__text__0011527c:
        if (iVar4 != 1) {
          if (iVar4 == 0) {
            if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 5) ||
               (uVar8 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2], uVar8 == 0))
            goto LAB__text__00115304;
            uVar7 = (uint)*(byte *)((long)piVar15 + uVar8);
            if (uVar7 < 5) {
              uVar7 = 0x19U >> (ulong)(uVar7 & 0x1f) & 1;
              goto joined_r0x001152bc;
            }
          }
LAB__text__00115318:
          uVar7 = 0;
          goto joined_r0x0011531c;
        }
        if (((*(ushort *)((long)piVar15 - (long)*piVar15) < 5) ||
            (uVar8 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2], uVar8 == 0)) ||
           ((*(char *)((long)piVar15 + uVar8) != '\x01' &&
            ((*(char *)((long)piVar15 + uVar8) != '\x03' &&
             (*(char *)((long)piVar15 + uVar8) != '\x05')))))) goto LAB__text__00115318;
LAB__text__00115304:
        uVar7 = 1;
joined_r0x001152bc:
        if (iVar3 == 2) goto LAB__text__0011539c;
LAB__text__00115320:
        if ((iVar3 != 1) && (iVar3 != 0)) {
          uVar10 = 0;
          uVar9 = 0;
          goto joined_r0x00115368;
        }
        if (*(ushort *)((long)piVar15 - (long)*piVar15) < 7) {
          uVar10 = 1;
          uVar9 = 1;
          goto joined_r0x00115368;
        }
        uVar8 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3];
        cVar6 = '\0';
        if (uVar8 != 0) {
          cVar6 = *(char *)((long)piVar15 + uVar8);
        }
        uVar10 = (uint)(cVar6 == '\0');
        uVar9 = (uint)(cVar6 == '\0');
joined_r0x00115358:
        if (*param_2 == 0x365) goto LAB__text__001153e4;
LAB__text__001151d4:
        bVar5 = true;
        uVar7 = uVar7 & uVar9;
      }
      else {
        lVar2 = uVar14 + uVar8;
        piVar15 = (int *)((long)puVar1 +
                         (ulong)*(uint *)((long)puVar1 + lVar2 + lVar11 + 4) + lVar11 + lVar2 + 4);
        if (iVar4 != 2) goto LAB__text__0011527c;
LAB__text__00115248:
        if (*(ushort *)((long)piVar15 - (long)*piVar15) < 5) {
          cVar6 = '\0';
        }
        else {
          uVar8 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2];
          cVar6 = '\0';
          if (uVar8 != 0) {
            cVar6 = *(char *)((long)piVar15 + uVar8);
          }
        }
        uVar7 = (uint)(cVar6 == '\x02');
joined_r0x0011531c:
        if (iVar3 != 2) goto LAB__text__00115320;
LAB__text__0011539c:
        if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 7) ||
           (uVar8 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar8 == 0)) {
          uVar10 = 0;
          uVar9 = 0;
          goto joined_r0x00115358;
        }
        bVar5 = *(char *)((long)piVar15 + uVar8) == '\x01';
        uVar10 = (uint)bVar5;
        uVar9 = (uint)bVar5;
joined_r0x00115368:
        if (*param_2 != 0x365) goto LAB__text__001151d4;
LAB__text__001153e4:
        if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 9) ||
           (uVar8 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[4], uVar8 == 0)) {
          bVar5 = param_2[6] == 0;
          uVar7 = uVar7 & uVar10;
        }
        else {
          bVar5 = param_2[6] == *(int *)((long)piVar15 + uVar8);
          uVar7 = uVar7 & uVar10;
        }
      }
      if ((uVar7 == 1) && (bVar5)) {
        return (long)puVar1 + lVar11 + uVar14 + 4;
      }
      lVar11 = lVar11 + 4;
    } while ((ulong)*puVar1 * 4 != lVar11);
  }
  return 0;
}


