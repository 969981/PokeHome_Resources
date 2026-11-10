/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00203a60; name: FUN_.text__00203a60
 */


void FUN__text__00203a60(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  char cVar10;
  
  if (*param_2 == 0) {
    if (*param_3 == 0) {
      return;
    }
    goto LAB__text__00203b04;
  }
  if (*param_1 != 0) {
    bVar7 = *(byte *)(param_2 + 1);
    bVar8 = bVar7;
    if ((((bVar7 == *(byte *)(param_1 + 1)) &&
         (bVar8 = *(byte *)((long)param_2 + 5), bVar8 == *(byte *)((long)param_1 + 5))) &&
        (bVar8 = *(byte *)((long)param_2 + 6), bVar8 == *(byte *)((long)param_1 + 6))) &&
       ((bVar8 = *(byte *)((long)param_2 + 7), bVar8 == *(byte *)((long)param_1 + 7) &&
        (bVar8 = *(byte *)(param_2 + 2), bVar8 == *(byte *)(param_1 + 2))))) {
      bVar8 = *(byte *)((long)param_1 + 9);
      if ((uint)*(byte *)((long)param_2 + 9) == (uint)bVar8) {
        uVar5 = param_2[3];
        if (uVar5 == param_1[3]) {
          if (((char)param_2[4] == '\0') || ((char)param_2[4] == (char)param_1[4])) {
LAB__text__00203c80:
            if (*param_3 == 0) {
              return;
            }
            bVar8 = *(byte *)(param_3 + 1);
            if ((((bVar8 == bVar7) &&
                 (bVar8 = *(byte *)((long)param_3 + 5), bVar8 == *(byte *)((long)param_2 + 5))) &&
                (bVar8 = *(byte *)((long)param_3 + 6), bVar8 == *(byte *)((long)param_2 + 6))) &&
               ((bVar8 = *(byte *)((long)param_3 + 7), bVar8 == *(byte *)((long)param_2 + 7) &&
                (bVar8 = *(byte *)(param_3 + 2), bVar8 == *(byte *)(param_2 + 2))))) {
              bVar8 = *(byte *)((long)param_3 + 9);
              bVar7 = *(byte *)((long)param_2 + 9);
              if ((uint)bVar8 == (uint)bVar7) {
                uVar5 = param_3[3];
                if (uVar5 == param_2[3]) {
                  if ((char)param_3[4] == '\0') {
                    return;
                  }
                  if ((char)param_3[4] == (char)param_2[4]) {
                    return;
                  }
                }
                else if (uVar5 == bVar7 || (int)uVar5 < (int)(uint)bVar7) {
                  return;
                }
                goto LAB__text__00203b04;
              }
            }
            if (bVar8 == 0) {
              return;
            }
LAB__text__00203b04:
            uVar3 = *(undefined8 *)(param_3 + 2);
            iVar9 = param_3[4];
            uVar2 = *(undefined8 *)param_2;
            uVar4 = *(undefined8 *)(param_2 + 2);
            *(undefined8 *)param_2 = *(undefined8 *)param_3;
            *(undefined8 *)(param_2 + 2) = uVar3;
            iVar6 = param_2[4];
            *(char *)(param_2 + 4) = (char)iVar9;
            *(undefined8 *)param_3 = uVar2;
            *(undefined8 *)(param_3 + 2) = uVar4;
            *(char *)(param_3 + 4) = (char)iVar6;
            if (*param_2 == 0) {
              return;
            }
            if (*param_1 != 0) {
              cVar10 = (char)param_2[1];
              if (((cVar10 == (char)param_1[1]) &&
                  (cVar10 = *(char *)((long)param_2 + 5), cVar10 == *(char *)((long)param_1 + 5)))
                 && ((cVar10 = *(char *)((long)param_2 + 6), cVar10 == *(char *)((long)param_1 + 6)
                     && ((cVar10 = *(char *)((long)param_2 + 7),
                         cVar10 == *(char *)((long)param_1 + 7) &&
                         (cVar10 = (char)param_2[2], cVar10 == (char)param_1[2])))))) {
                bVar7 = *(byte *)((long)param_1 + 9);
                if ((uint)*(byte *)((long)param_2 + 9) == (uint)bVar7) {
                  uVar5 = param_2[3];
                  if (uVar5 == param_1[3]) {
                    if ((char)param_2[4] == '\0') {
                      return;
                    }
                    if ((char)param_2[4] == (char)param_1[4]) {
                      return;
                    }
                  }
                  else if (uVar5 == bVar7 || (int)uVar5 < (int)(uint)bVar7) {
                    return;
                  }
                }
                else if (*(byte *)((long)param_2 + 9) == 0) {
                  return;
                }
              }
              else if (cVar10 == '\0') {
                return;
              }
            }
            uVar3 = *(undefined8 *)(param_2 + 2);
            iVar9 = param_2[4];
            uVar2 = *(undefined8 *)param_1;
            uVar4 = *(undefined8 *)(param_1 + 2);
            *(undefined8 *)param_1 = *(undefined8 *)param_2;
            *(undefined8 *)(param_1 + 2) = uVar3;
            iVar6 = param_1[4];
            *(char *)(param_1 + 4) = (char)iVar9;
            *(undefined8 *)param_2 = uVar2;
            *(undefined8 *)(param_2 + 2) = uVar4;
            *(char *)(param_2 + 4) = (char)iVar6;
            return;
          }
        }
        else if (uVar5 == bVar8 || (int)uVar5 < (int)(uint)bVar8) goto LAB__text__00203c80;
      }
      else if (*(byte *)((long)param_2 + 9) == 0) goto LAB__text__00203c80;
    }
    else if (bVar8 == 0) goto LAB__text__00203c80;
  }
  if (*param_3 == 0) goto LAB__text__00203d54;
  cVar10 = (char)param_3[1];
  if ((((cVar10 == (char)param_2[1]) &&
       (cVar10 = *(char *)((long)param_3 + 5), cVar10 == *(char *)((long)param_2 + 5))) &&
      (cVar10 = *(char *)((long)param_3 + 6), cVar10 == *(char *)((long)param_2 + 6))) &&
     ((cVar10 = *(char *)((long)param_3 + 7), cVar10 == *(char *)((long)param_2 + 7) &&
      (cVar10 = (char)param_3[2], cVar10 == (char)param_2[2])))) {
    bVar7 = *(byte *)((long)param_2 + 9);
    if ((uint)*(byte *)((long)param_3 + 9) == (uint)bVar7) {
      uVar5 = param_3[3];
      if (uVar5 == param_2[3]) {
        if (((char)param_3[4] == '\0') || ((char)param_3[4] == (char)param_2[4]))
        goto LAB__text__00203d54;
        goto LAB__text__00203c54;
      }
      if (uVar5 != bVar7 && (int)(uint)bVar7 <= (int)uVar5) goto LAB__text__00203c54;
      goto LAB__text__00203d54;
    }
    bVar1 = *(byte *)((long)param_3 + 9) != 0;
  }
  else {
    bVar1 = cVar10 != '\0';
  }
  if (bVar1) {
LAB__text__00203c54:
    uVar3 = *(undefined8 *)(param_3 + 2);
    iVar9 = param_3[4];
    uVar2 = *(undefined8 *)param_1;
    uVar4 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)param_1 = *(undefined8 *)param_3;
    *(undefined8 *)(param_1 + 2) = uVar3;
    iVar6 = param_1[4];
    *(char *)(param_1 + 4) = (char)iVar9;
    *(char *)(param_3 + 4) = (char)iVar6;
    *(undefined8 *)param_3 = uVar2;
    *(undefined8 *)(param_3 + 2) = uVar4;
    return;
  }
LAB__text__00203d54:
  uVar3 = *(undefined8 *)(param_2 + 2);
  iVar9 = param_2[4];
  uVar2 = *(undefined8 *)param_1;
  uVar4 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 2) = uVar3;
  iVar6 = param_1[4];
  *(char *)(param_1 + 4) = (char)iVar9;
  *(undefined8 *)param_2 = uVar2;
  *(undefined8 *)(param_2 + 2) = uVar4;
  *(char *)(param_2 + 4) = (char)iVar6;
  if (*param_3 == 0) {
    return;
  }
  if (*param_2 != 0) {
    cVar10 = (char)param_3[1];
    if ((((cVar10 == (char)param_2[1]) &&
         (cVar10 = *(char *)((long)param_3 + 5), cVar10 == *(char *)((long)param_2 + 5))) &&
        (cVar10 = *(char *)((long)param_3 + 6), cVar10 == *(char *)((long)param_2 + 6))) &&
       ((cVar10 = *(char *)((long)param_3 + 7), cVar10 == *(char *)((long)param_2 + 7) &&
        (cVar10 = (char)param_3[2], cVar10 == (char)param_2[2])))) {
      bVar7 = *(byte *)((long)param_2 + 9);
      if ((uint)*(byte *)((long)param_3 + 9) == (uint)bVar7) {
        uVar5 = param_3[3];
        if (uVar5 == param_2[3]) {
          if (((char)param_3[4] == '\0') || ((char)param_3[4] == (char)param_2[4])) {
            return;
          }
        }
        else if (uVar5 == bVar7 || (int)uVar5 < (int)(uint)bVar7) {
          return;
        }
      }
      else if (*(byte *)((long)param_3 + 9) == 0) {
        return;
      }
    }
    else if (cVar10 == '\0') {
      return;
    }
  }
  uVar3 = *(undefined8 *)(param_3 + 2);
  iVar9 = param_3[4];
  uVar2 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined8 *)(param_2 + 2) = uVar3;
  iVar6 = param_2[4];
  *(char *)(param_2 + 4) = (char)iVar9;
  *(char *)(param_3 + 4) = (char)iVar6;
  *(undefined8 *)param_3 = uVar2;
  *(undefined8 *)(param_3 + 2) = uVar4;
  return;
}


