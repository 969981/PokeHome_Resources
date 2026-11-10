/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00196c90; name: FUN_.text__00196c90
 */


byte FUN__text__00196c90(undefined8 *param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  
  lVar4 = FUN__text__00321ac0();
  cVar1 = *(char *)(lVar4 + 0x19ab17);
  bVar2 = FUN__text__003069e8(*param_1,7);
  if ((cVar1 != '\0') || ((bVar2 & 1) == 0)) {
    bVar2 = cVar1 != '\0' & bVar2;
    lVar4 = FUN__text__00321ac0();
    cVar1 = *(char *)(lVar4 + 0x19ab16);
    bVar3 = FUN__text__003069e8(*param_1,6);
    if (cVar1 == '\0') {
      if ((bVar3 & 1) != 0) goto LAB__text__00196cd0;
    }
    else {
      bVar2 = bVar3 | bVar2;
    }
    lVar4 = FUN__text__00321ac0();
    cVar1 = *(char *)(lVar4 + 0x19ab15);
    bVar3 = FUN__text__003069e8(*param_1,5);
    if (cVar1 == '\0') {
      if ((bVar3 & 1) != 0) goto LAB__text__00196cd0;
    }
    else {
      bVar2 = bVar3 | bVar2;
    }
    lVar4 = FUN__text__00321ac0();
    cVar1 = *(char *)(lVar4 + 0x19ab14);
    bVar3 = FUN__text__003069e8(*param_1,4);
    if (cVar1 == '\0') {
      if ((bVar3 & 1) != 0) goto LAB__text__00196cd0;
    }
    else {
      bVar2 = bVar3 | bVar2;
    }
    lVar4 = FUN__text__00321ac0();
    cVar1 = *(char *)(lVar4 + 0x19ab13);
    bVar3 = FUN__text__003069e8(*param_1,3);
    if (cVar1 == '\0') {
      if ((bVar3 & 1) != 0) goto LAB__text__00196cd0;
    }
    else {
      bVar2 = bVar3 | bVar2;
    }
    lVar4 = FUN__text__00321ac0();
    cVar1 = *(char *)(lVar4 + 0x19ab12);
    bVar3 = FUN__text__003069e8(*param_1,2);
    if (cVar1 == '\0') {
      if ((bVar3 & 1) != 0) goto LAB__text__00196cd0;
    }
    else {
      bVar2 = bVar3 | bVar2;
    }
    lVar4 = FUN__text__00321ac0();
    cVar1 = *(char *)(lVar4 + 0x19ab11);
    bVar3 = FUN__text__003069e8(*param_1,1);
    if (cVar1 != '\0') {
      return (bVar3 | bVar2) & 1;
    }
    if ((bVar3 & 1) == 0) goto LAB__text__00196cd4;
  }
LAB__text__00196cd0:
  bVar2 = 0;
LAB__text__00196cd4:
  return bVar2 & 1;
}


