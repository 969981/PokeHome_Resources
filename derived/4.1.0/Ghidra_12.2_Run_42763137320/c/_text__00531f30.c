/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00531f30; name: FUN_.text__00531f30
 */


void FUN__text__00531f30(undefined4 *param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  
  FUN__text__004c52e0(*param_1,*(undefined8 *)(*(long *)(param_2 + 8) + 0x58),3,0,0xab,0,0,0);
  lVar1 = *(long *)(*(long *)(param_2 + 8) + 0x38);
  if (lVar1 != 0) {
    FUN__text__00491200(lVar1,*param_1);
  }
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (param_1[4] != 0) {
      pcVar2 = (char *)(lVar1 + 0x50);
      lVar1 = (ulong)(uint)param_1[4] * 0x58;
      do {
        if ((*(long *)(pcVar2 + -8) != 0) && (*pcVar2 != '\0')) {
          FUN__text__00400fc0(9);
          *pcVar2 = '\0';
        }
        pcVar2[-8] = '\0';
        pcVar2[-7] = '\0';
        pcVar2[-6] = '\0';
        pcVar2[-5] = '\0';
        pcVar2[-4] = '\0';
        pcVar2[-3] = '\0';
        pcVar2[-2] = '\0';
        pcVar2[-1] = '\0';
        lVar1 = lVar1 + -0x58;
        pcVar2 = pcVar2 + 0x58;
      } while (lVar1 != 0);
      lVar1 = *(long *)(param_1 + 2);
    }
    param_1[4] = 0;
    FUN__text__00400fc0(9,lVar1);
    *(undefined8 *)(param_1 + 2) = 0;
    param_1[5] = 0;
  }
  return;
}


