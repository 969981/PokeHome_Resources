/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d73a0; name: FUN_.text__003d73a0
 */


void FUN__text__003d73a0(long param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = *(char **)(param_1 + 0x210);
  pcVar3 = (char *)FUN__text__003e2da0(*(long *)(param_1 + 0x208),0xd,
                                       (long)pcVar5 - *(long *)(param_1 + 0x208));
  if (pcVar3 != (char *)0x0 && pcVar3 != pcVar5) {
    bVar1 = false;
    pcVar5 = pcVar3;
    do {
      while( true ) {
        pcVar6 = pcVar5 + 1;
        pcVar4 = pcVar3 + 1;
        if (*pcVar5 == '\r') break;
        *pcVar3 = *pcVar5;
        pcVar3 = pcVar4;
        pcVar5 = pcVar6;
        if (pcVar6 == *(char **)(param_1 + 0x210)) goto LAB__text__003d7470;
      }
      *pcVar3 = '\n';
      if (pcVar6 == *(char **)(param_1 + 0x210)) {
        iVar2 = FUN__text__003d7494(*(undefined8 *)(param_1 + 0x220));
        if (iVar2 == 10) {
          FUN__text__003dde5c(*(undefined8 *)(param_1 + 0x220));
          bVar1 = true;
        }
      }
      else {
        pcVar3 = pcVar5 + 2;
        if (*pcVar6 != '\n') {
          pcVar3 = pcVar6;
        }
        bVar1 = (bool)(*pcVar6 == '\n' | bVar1);
        pcVar6 = pcVar3;
      }
      pcVar3 = pcVar4;
      pcVar5 = pcVar6;
    } while (pcVar6 != *(char **)(param_1 + 0x210));
LAB__text__003d7470:
    *(char **)(param_1 + 0x210) = pcVar4;
    if (bVar1) {
      *(uint *)(param_1 + 0x21c) = *(uint *)(param_1 + 0x21c) | 4;
    }
  }
  return;
}


