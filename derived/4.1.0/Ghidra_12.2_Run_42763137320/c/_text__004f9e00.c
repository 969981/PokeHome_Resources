/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f9e00; name: FUN_.text__004f9e00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004f9e00(long *param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined8 *puVar5;
  int *piVar6;
  char *pcVar7;
  ulong uVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  undefined4 uVar12;
  int *piVar13;
  int *local_50;
  ulong local_48;
  
  if ((*(char *)(_DAT_008a45b0 + 0x10) == '\0') || ((int)param_1[0x2a] != 1)) {
    FUN__text__004f23f0(param_1);
    return;
  }
  if (((int)param_1[0x29] == 0) ||
     (iVar3 = (int)param_1[0x29] + -1, *(int *)(param_1 + 0x29) = iVar3, iVar3 != 0)) {
    return;
  }
  plVar1 = param_1 + 0x27;
  if ((undefined4 *)param_1[0x2e] == (undefined4 *)0x0) {
    uVar12 = 0;
    pcVar7 = (char *)param_1[0x2f];
  }
  else {
    uVar12 = *(undefined4 *)param_1[0x2e];
    pcVar7 = (char *)param_1[0x2f];
  }
  if (pcVar7 == (char *)0x0) {
    bVar4 = false;
    puVar5 = (undefined8 *)FUN__text__004cafc8(plVar1,uVar12,0);
  }
  else {
    bVar4 = *pcVar7 != '\x02';
    puVar5 = (undefined8 *)FUN__text__004cafc8(plVar1,uVar12,bVar4);
  }
  if (puVar5 != (undefined8 *)0x0) {
    local_50 = (int *)0x0;
    local_48 = 0;
    FUN__text__004cc9f0(param_1 + 0x2a,&local_50);
    uVar8 = local_48 & 0xffffffff;
    piVar6 = local_50;
    if ((int)local_48 != 0) {
      piVar13 = local_50;
      do {
        if (*piVar13 == 0) {
LAB__text__004f9f10:
          FUN__text__00464a20(piVar13[1]);
          uVar8 = local_48 & 0xffffffff;
          piVar6 = local_50;
        }
        else {
          piVar9 = (int *)*puVar5;
          uVar2 = *(uint *)(puVar5 + 1);
          piVar10 = piVar9;
          if (uVar2 == 0) {
LAB__text__004f9f74:
            if (piVar10 != piVar9 + uVar2) goto LAB__text__004f9f10;
          }
          else {
            lVar11 = (ulong)uVar2 << 2;
            do {
              if (*piVar10 == *piVar13) goto LAB__text__004f9f74;
              piVar10 = piVar10 + 1;
              lVar11 = lVar11 + -4;
            } while (lVar11 != 0);
          }
        }
        piVar13 = piVar13 + 2;
      } while (piVar13 != piVar6 + uVar8 * 2);
    }
    if (piVar6 != (int *)0x0) {
      local_48 = local_48 & 0xffffffff00000000;
      FUN__text__00400fc0(0);
    }
  }
  FUN__text__004cb070(plVar1,uVar12,bVar4);
  (**(code **)(*param_1 + 0x2b0))(param_1);
  return;
}


