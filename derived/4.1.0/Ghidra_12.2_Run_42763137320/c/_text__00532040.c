/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00532040; name: FUN_.text__00532040
 */


void FUN__text__00532040(long *param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  
  lVar3 = *param_1;
  lVar1 = lVar3;
  if ((int)param_1[1] == 0) {
    if (lVar3 == 0) goto LAB__text__005320e0;
  }
  else {
    do {
      lVar4 = lVar1;
      FUN__text__00531f30(lVar4,param_2);
      lVar3 = *param_1;
      lVar1 = lVar4 + 0x30;
    } while (lVar4 + 0x30 != lVar3 + (ulong)*(uint *)(param_1 + 1) * 0x30);
    if (lVar3 == 0) goto LAB__text__005320e0;
    if (*(uint *)(param_1 + 1) != 0) {
      do {
        FUN__text__00532008(lVar3);
        bVar2 = lVar4 != lVar3;
        lVar3 = lVar3 + 0x30;
      } while (bVar2);
      lVar3 = *param_1;
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  FUN__text__00400fc0(9,lVar3);
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
LAB__text__005320e0:
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    if (*(uint *)(param_1 + 3) != 0) {
      pcVar5 = (char *)(lVar3 + 0x50);
      lVar3 = (ulong)*(uint *)(param_1 + 3) * 0x58;
      do {
        if ((*(long *)(pcVar5 + -8) != 0) && (*pcVar5 != '\0')) {
          FUN__text__00400fc0(9);
          *pcVar5 = '\0';
        }
        pcVar5[-8] = '\0';
        pcVar5[-7] = '\0';
        pcVar5[-6] = '\0';
        pcVar5[-5] = '\0';
        pcVar5[-4] = '\0';
        pcVar5[-3] = '\0';
        pcVar5[-2] = '\0';
        pcVar5[-1] = '\0';
        lVar3 = lVar3 + -0x58;
        pcVar5 = pcVar5 + 0x58;
      } while (lVar3 != 0);
      lVar3 = param_1[2];
    }
    *(undefined4 *)(param_1 + 3) = 0;
    FUN__text__00400fc0(9,lVar3);
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  return;
}


