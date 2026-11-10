/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00203e90; name: FUN_.text__00203e90
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN__text__00203e90(int *param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  undefined2 uVar11;
  bool bVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  int iVar19;
  char cVar20;
  char cVar21;
  uint uVar22;
  int *piVar23;
  
  lVar17 = (long)param_2 - (long)param_1 >> 2;
  if ((ulong)(lVar17 * -0x3333333333333333) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00203ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (*(code *)(&UNK__text__00203ee4 +
                       (ulong)*(ushort *)(lVar17 * -0x6666666666666666 + 0x726f32) * 4))(1);
    return uVar13;
  }
  FUN__text__00203a60(param_1,param_1 + 5,param_1 + 10);
  if (param_1 + 0xf == param_2) {
    return 1;
  }
  lVar17 = 0;
  iVar19 = 0;
  piVar14 = param_1 + 0xf;
  piVar23 = param_1 + 10;
LAB__text__00203f70:
  piVar18 = piVar14;
  iVar2 = *piVar18;
  if (iVar2 == 0) goto LAB__text__00203f5c;
  if (*piVar23 == 0) {
    cVar20 = (char)piVar18[1];
LAB__text__00204028:
    uVar1 = *(undefined8 *)(piVar23 + 2);
    cVar21 = *(char *)((long)piVar18 + 5);
    cVar5 = *(char *)((long)piVar18 + 6);
    cVar6 = *(char *)((long)piVar18 + 7);
    cVar7 = (char)piVar18[2];
    bVar4 = *(byte *)((long)piVar18 + 9);
    uVar11 = *(undefined2 *)((long)piVar18 + 10);
    uVar3 = piVar18[3];
    *(undefined8 *)piVar18 = *(undefined8 *)piVar23;
    *(undefined8 *)(piVar18 + 2) = uVar1;
    cVar8 = (char)piVar18[4];
    *(char *)(piVar18 + 4) = (char)piVar23[4];
    piVar14 = param_1;
    if (piVar23 != param_1) {
      uVar22 = (uint)bVar4;
      lVar15 = lVar17;
      if (cVar20 == '\0') {
        do {
          lVar16 = (long)param_1 + lVar15;
          if (*(int *)(lVar16 + 0x14) != 0) {
            if (*(char *)(lVar16 + 0x18) != '\0') goto LAB__text__00204204;
            if (cVar21 == *(char *)(lVar16 + 0x19)) {
              cVar9 = cVar5;
              if (((cVar5 == *(char *)(lVar16 + 0x1a)) &&
                  (cVar9 = cVar6, cVar6 == *(char *)(lVar16 + 0x1b))) &&
                 (cVar9 = cVar7, cVar7 == *(char *)(lVar16 + 0x1c))) {
                bVar10 = *(byte *)(lVar16 + 0x1d);
                if (uVar22 == bVar10) {
                  if (uVar3 == *(uint *)(lVar16 + 0x20)) {
                    if ((cVar8 == '\0') || (cVar8 == *(char *)(lVar16 + 0x24)))
                    goto LAB__text__00204204;
                  }
                  else if (uVar3 == bVar10 || (int)uVar3 < (int)(uint)bVar10)
                  goto LAB__text__00204204;
                }
                else if (uVar22 == 0) goto LAB__text__00204204;
              }
              else if (cVar9 == '\0') goto LAB__text__00204204;
            }
            else if (cVar21 == '\0') goto LAB__text__0020420c;
          }
          piVar23 = piVar23 + -5;
          bVar12 = lVar15 != -0x14;
          *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)(lVar16 + 0x14);
          *(undefined8 *)(lVar16 + 0x30) = *(undefined8 *)(lVar16 + 0x1c);
          *(undefined1 *)(lVar16 + 0x38) = *(undefined1 *)(lVar16 + 0x24);
          lVar15 = lVar15 + -0x14;
        } while (bVar12);
      }
      else {
        do {
          lVar16 = (long)param_1 + lVar15;
          if ((*(int *)(lVar16 + 0x14) != 0) && (cVar20 == *(char *)(lVar16 + 0x18))) {
            if (cVar21 == *(char *)(lVar16 + 0x19)) {
              cVar9 = cVar5;
              if (((cVar5 == *(char *)(lVar16 + 0x1a)) &&
                  (cVar9 = cVar6, cVar6 == *(char *)(lVar16 + 0x1b))) &&
                 (cVar9 = cVar7, cVar7 == *(char *)(lVar16 + 0x1c))) {
                bVar10 = *(byte *)(lVar16 + 0x1d);
                if (uVar22 == bVar10) {
                  if (uVar3 == *(uint *)(lVar16 + 0x20)) {
                    if ((cVar8 == '\0') || (cVar8 == *(char *)(lVar16 + 0x24)))
                    goto LAB__text__00204204;
                  }
                  else if (uVar3 == bVar10 || (int)uVar3 < (int)(uint)bVar10)
                  goto LAB__text__00204204;
                }
                else if (uVar22 == 0) goto LAB__text__00204204;
              }
              else if (cVar9 == '\0') goto LAB__text__00204204;
            }
            else if (cVar21 == '\0') goto LAB__text__0020420c;
          }
          piVar23 = piVar23 + -5;
          bVar12 = lVar15 != -0x14;
          *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)(lVar16 + 0x14);
          *(undefined8 *)(lVar16 + 0x30) = *(undefined8 *)(lVar16 + 0x1c);
          *(undefined1 *)(lVar16 + 0x38) = *(undefined1 *)(lVar16 + 0x24);
          lVar15 = lVar15 + -0x14;
        } while (bVar12);
      }
    }
    goto LAB__text__00203f28;
  }
  cVar20 = (char)piVar18[1];
  if (cVar20 == (char)piVar23[1]) {
    cVar21 = *(char *)((long)piVar18 + 5);
    if ((((cVar21 == *(char *)((long)piVar23 + 5)) &&
         (cVar21 = *(char *)((long)piVar18 + 6), cVar21 == *(char *)((long)piVar23 + 6))) &&
        (cVar21 = *(char *)((long)piVar18 + 7), cVar21 == *(char *)((long)piVar23 + 7))) &&
       (cVar21 = (char)piVar18[2], cVar21 == (char)piVar23[2])) {
      bVar4 = *(byte *)((long)piVar23 + 9);
      if ((uint)*(byte *)((long)piVar18 + 9) == (uint)bVar4) {
        uVar3 = piVar18[3];
        if (uVar3 == piVar23[3]) {
          if (((char)piVar18[4] != '\0') && ((char)piVar18[4] != (char)piVar23[4]))
          goto LAB__text__00204028;
        }
        else if (uVar3 != bVar4 && (int)(uint)bVar4 <= (int)uVar3) goto LAB__text__00204028;
      }
      else if (*(byte *)((long)piVar18 + 9) != 0) goto LAB__text__00204028;
    }
    else if (cVar21 != '\0') goto LAB__text__00204028;
  }
  else if (cVar20 != '\0') {
    cVar20 = '\x01';
    goto LAB__text__00204028;
  }
  goto LAB__text__00203f5c;
LAB__text__00204204:
  piVar14 = piVar23;
  goto LAB__text__00203f28;
LAB__text__0020420c:
  piVar14 = (int *)(lVar16 + 0x28);
LAB__text__00203f28:
  iVar19 = iVar19 + 1;
  *piVar14 = iVar2;
  *(char *)(piVar14 + 1) = cVar20;
  *(char *)((long)piVar14 + 5) = cVar21;
  *(char *)((long)piVar14 + 6) = cVar5;
  *(char *)((long)piVar14 + 7) = cVar6;
  *(char *)(piVar14 + 2) = cVar7;
  *(byte *)((long)piVar14 + 9) = bVar4;
  *(undefined2 *)((long)piVar14 + 10) = uVar11;
  piVar14[3] = uVar3;
  *(char *)(piVar14 + 4) = cVar8;
  if (iVar19 == 8) {
    return (ulong)(piVar18 + 5 == param_2);
  }
LAB__text__00203f5c:
  lVar17 = lVar17 + 0x14;
  piVar14 = piVar18 + 5;
  piVar23 = piVar18;
  if (piVar18 + 5 == param_2) {
    return 1;
  }
  goto LAB__text__00203f70;
}


