/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f7130; name: FUN_.text__003f7130
 */


undefined8 FUN__text__003f7130(long param_1,int param_2,char param_3,char param_4)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  int *piVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  
  piVar5 = *(int **)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0x10);
  piVar8 = piVar5;
  if (uVar2 != 0) {
    lVar10 = (ulong)uVar2 * 0x18;
    while (*piVar8 != param_2) {
      piVar8 = piVar8 + 6;
      lVar10 = lVar10 + -0x18;
      if (lVar10 == 0) {
        return 2;
      }
    }
  }
  if (piVar8 != piVar5 + (ulong)uVar2 * 6) {
    plVar6 = *(long **)(piVar8 + 4);
    uVar7 = (ulong)*(uint *)(plVar6 + 4);
    if (*(uint *)(plVar6 + 4) != 0) {
      pcVar11 = (char *)plVar6[3];
      do {
        if (*pcVar11 == param_4) {
          *pcVar11 = param_3;
          lVar10 = 0;
          if (*plVar6 != 0) {
            lVar10 = *plVar6 + -0x70;
          }
          uVar2 = *(uint *)(plVar6 + 4);
          if (uVar2 == 0) {
            FUN__text__003fa250(*(undefined8 *)(lVar10 + 0x50),lVar10,0);
            return 1;
          }
          pcVar11 = (char *)plVar6[3];
          uVar7 = (ulong)uVar2 & 3;
          if (uVar2 < 4) {
            cVar4 = '\0';
          }
          else {
            cVar4 = '\0';
            uVar9 = (ulong)uVar2 & 0xfffffffc;
            do {
              cVar3 = *pcVar11;
              if (*pcVar11 <= cVar4) {
                cVar3 = cVar4;
              }
              cVar4 = pcVar11[1];
              if (pcVar11[1] <= cVar3) {
                cVar4 = cVar3;
              }
              cVar3 = pcVar11[2];
              if (pcVar11[2] <= cVar4) {
                cVar3 = cVar4;
              }
              pcVar1 = pcVar11 + 3;
              pcVar11 = pcVar11 + 4;
              cVar4 = *pcVar1;
              if (*pcVar1 <= cVar3) {
                cVar4 = cVar3;
              }
              uVar9 = uVar9 - 4;
            } while (uVar9 != 0);
          }
          if ((uVar2 & 3) != 0) {
            do {
              cVar3 = *pcVar11;
              if (*pcVar11 <= cVar4) {
                cVar3 = cVar4;
              }
              cVar4 = cVar3;
              uVar7 = uVar7 - 1;
              pcVar11 = pcVar11 + 1;
            } while (uVar7 != 0);
          }
          FUN__text__003fa250(*(undefined8 *)(lVar10 + 0x50));
          return 1;
        }
        pcVar11 = pcVar11 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return 2;
}


