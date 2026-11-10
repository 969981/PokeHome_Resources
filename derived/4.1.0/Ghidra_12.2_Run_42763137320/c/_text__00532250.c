/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00532250; name: FUN_.text__00532250
 */


void FUN__text__00532250(long *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  char *pcVar10;
  
  if (param_2 == 0) {
    lVar3 = param_1[2];
    if (lVar3 != 0) {
      if (*(uint *)(param_1 + 3) != 0) {
        pcVar10 = (char *)(lVar3 + 0x50);
        lVar3 = (ulong)*(uint *)(param_1 + 3) * 0x58;
        do {
          if ((*(long *)(pcVar10 + -8) != 0) && (*pcVar10 != '\0')) {
            FUN__text__00400fc0(9);
            *pcVar10 = '\0';
          }
          pcVar10[-8] = '\0';
          pcVar10[-7] = '\0';
          pcVar10[-6] = '\0';
          pcVar10[-5] = '\0';
          pcVar10[-4] = '\0';
          pcVar10[-3] = '\0';
          pcVar10[-2] = '\0';
          pcVar10[-1] = '\0';
          lVar3 = lVar3 + -0x58;
          pcVar10 = pcVar10 + 0x58;
        } while (lVar3 != 0);
        lVar3 = param_1[2];
      }
      *(undefined4 *)(param_1 + 3) = 0;
      FUN__text__00400fc0(9,lVar3);
      param_1[2] = 0;
      *(undefined4 *)((long)param_1 + 0x1c) = 0;
    }
    uVar5 = (ulong)*(uint *)(param_1 + 1);
    if (*(uint *)(param_1 + 1) != 0) {
      lVar8 = *param_1;
      lVar3 = lVar8;
      do {
        lVar4 = *(long *)(lVar3 + 8);
        if (lVar4 != 0) {
          if (*(uint *)(lVar3 + 0x10) != 0) {
            lVar8 = (ulong)*(uint *)(lVar3 + 0x10) * 0x58;
            pcVar10 = (char *)(lVar4 + 0x50);
            do {
              if ((*(long *)(pcVar10 + -8) != 0) && (*pcVar10 != '\0')) {
                FUN__text__00400fc0(9);
                *pcVar10 = '\0';
              }
              pcVar10[-8] = '\0';
              pcVar10[-7] = '\0';
              pcVar10[-6] = '\0';
              pcVar10[-5] = '\0';
              pcVar10[-4] = '\0';
              pcVar10[-3] = '\0';
              pcVar10[-2] = '\0';
              pcVar10[-1] = '\0';
              lVar8 = lVar8 + -0x58;
              pcVar10 = pcVar10 + 0x58;
            } while (lVar8 != 0);
            lVar4 = *(long *)(lVar3 + 8);
          }
          *(undefined4 *)(lVar3 + 0x10) = 0;
          FUN__text__00400fc0(9,lVar4);
          *(undefined8 *)(lVar3 + 8) = 0;
          *(undefined4 *)(lVar3 + 0x14) = 0;
          lVar8 = *param_1;
          uVar5 = (ulong)*(uint *)(param_1 + 1);
        }
        lVar3 = lVar3 + 0x30;
      } while (lVar3 != lVar8 + uVar5 * 0x30);
    }
  }
  else {
    uVar6 = *(uint *)(param_1 + 1);
    if (uVar6 != 0) {
      iVar7 = 0;
      do {
        iVar1 = iVar7 + (uVar6 >> 1);
        uVar2 = *(uint *)(*param_1 + (long)iVar1 * 0x30);
        if (uVar2 == param_2) {
          lVar8 = *param_1 + (long)iVar1 * 0x30;
          plVar9 = (long *)(lVar8 + 8);
          lVar3 = *plVar9;
          if (lVar3 == 0) {
            return;
          }
          if (*(uint *)(lVar8 + 0x10) != 0) {
            pcVar10 = (char *)(lVar3 + 0x50);
            lVar3 = (ulong)*(uint *)(lVar8 + 0x10) * 0x58;
            do {
              if ((*(long *)(pcVar10 + -8) != 0) && (*pcVar10 != '\0')) {
                FUN__text__00400fc0(9);
                *pcVar10 = '\0';
              }
              pcVar10[-8] = '\0';
              pcVar10[-7] = '\0';
              pcVar10[-6] = '\0';
              pcVar10[-5] = '\0';
              pcVar10[-4] = '\0';
              pcVar10[-3] = '\0';
              pcVar10[-2] = '\0';
              pcVar10[-1] = '\0';
              lVar3 = lVar3 + -0x58;
              pcVar10 = pcVar10 + 0x58;
            } while (lVar3 != 0);
            lVar3 = *plVar9;
          }
          *(undefined4 *)(lVar8 + 0x10) = 0;
          FUN__text__00400fc0(9,lVar3);
          *plVar9 = 0;
          *(undefined4 *)(lVar8 + 0x14) = 0;
          return;
        }
        if (uVar2 < param_2) {
          iVar7 = iVar1 + 1;
        }
        uVar2 = uVar6 - (uVar2 < param_2);
        uVar6 = uVar2 >> 1;
      } while (1 < uVar2);
    }
  }
  return;
}


