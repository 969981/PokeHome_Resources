/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f9b40; name: FUN_.text__004f9b40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__004f9b40(long *param_1)

{
  long *plVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  undefined4 uVar10;
  ulong uVar11;
  int *piVar12;
  int *piVar13;
  int *local_60;
  ulong local_58;
  
  if ((*(char *)(_DAT_008a45b0 + 0x10) == '\0') || ((int)param_1[0x2a] != 1)) {
    uVar11 = FUN__text__004f2310(param_1);
    return uVar11;
  }
  if ((int)param_1[0x29] != 0) {
    *(int *)(param_1 + 0x29) = (int)param_1[0x29] + 1;
    return 1;
  }
  uVar3 = (**(code **)(*param_1 + 0x2a8))(param_1);
  if (uVar3 != 1) {
    return (ulong)uVar3;
  }
  plVar1 = param_1 + 0x27;
  if ((undefined4 *)param_1[0x2e] == (undefined4 *)0x0) {
    uVar10 = 0;
    pcVar6 = (char *)param_1[0x2f];
  }
  else {
    uVar10 = *(undefined4 *)param_1[0x2e];
    pcVar6 = (char *)param_1[0x2f];
  }
  if (pcVar6 == (char *)0x0) {
    bVar2 = false;
    puVar4 = (undefined8 *)FUN__text__004cafc8(plVar1,uVar10,0);
  }
  else {
    bVar2 = *pcVar6 != '\x02';
    puVar4 = (undefined8 *)FUN__text__004cafc8(plVar1,uVar10,bVar2);
  }
  if (puVar4 == (undefined8 *)0x0) {
    uVar11 = 0x34;
  }
  else {
    local_60 = (int *)0x0;
    local_58 = 0;
    FUN__text__004cc9f0(param_1 + 0x2a,&local_60);
    piVar5 = local_60;
    if ((int)local_58 == 0) {
      uVar11 = 1;
    }
    else {
      uVar11 = 1;
      piVar12 = local_60;
      do {
        if (*piVar12 == 0) {
LAB__text__004f9cac:
          uVar11 = FUN__text__00464880(piVar12[1]);
          uVar11 = uVar11 & 0xffffffff;
          piVar13 = local_60;
        }
        else {
          piVar7 = (int *)*puVar4;
          uVar3 = *(uint *)(puVar4 + 1);
          piVar8 = piVar7;
          piVar13 = piVar5;
          if (uVar3 == 0) {
LAB__text__004f9ca0:
            if (piVar8 != piVar7 + uVar3) goto LAB__text__004f9cac;
          }
          else {
            lVar9 = (ulong)uVar3 << 2;
            do {
              if (*piVar8 == *piVar12) goto LAB__text__004f9ca0;
              piVar8 = piVar8 + 1;
              lVar9 = lVar9 + -4;
            } while (lVar9 != 0);
          }
        }
        if ((int)uVar11 == 1) {
          piVar5 = piVar13;
        }
        else {
          piVar5 = piVar12;
          if (piVar13 != piVar12) {
            do {
              piVar8 = (int *)*puVar4;
              uVar3 = *(uint *)(puVar4 + 1);
              piVar5 = piVar8;
              if (uVar3 == 0) {
LAB__text__004f9d24:
                if (piVar5 != piVar8 + uVar3) {
                  FUN__text__00464a20(piVar12[1]);
                }
              }
              else {
                lVar9 = (ulong)uVar3 << 2;
                do {
                  if (*piVar5 == *piVar13) goto LAB__text__004f9d24;
                  piVar5 = piVar5 + 1;
                  lVar9 = lVar9 + -4;
                } while (lVar9 != 0);
              }
              piVar13 = piVar13 + 2;
            } while (piVar13 != piVar12);
            piVar5 = local_60;
          }
        }
        piVar12 = piVar12 + 2;
      } while (piVar12 != piVar5 + (local_58 & 0xffffffff) * 2);
    }
    if (piVar5 != (int *)0x0) {
      local_58 = local_58 & 0xffffffff00000000;
      FUN__text__00400fc0(0);
      local_60 = (int *)0x0;
      local_58 = local_58 & 0xffffffff;
    }
    if ((int)uVar11 == 1) {
      *(int *)(param_1 + 0x29) = (int)param_1[0x29] + 1;
      uVar3 = FUN__text__004caff4(plVar1,uVar10,bVar2);
      uVar11 = (ulong)uVar3;
      if (uVar3 == 1) {
        return 1;
      }
      (**(code **)(*param_1 + 0x140))(param_1);
    }
  }
  (**(code **)(*param_1 + 0x2b0))(param_1);
  return uVar11;
}


