/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00205890; name: FUN_.text__00205890
 */


void FUN__text__00205890(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = FUN__text__00633b34(param_2,2);
  if (((uVar3 & 1) == 0) && (iVar2 = FUN__text__00631008(param_2), iVar2 == 0x287)) {
    sVar1 = FUN__text__00631010(param_2);
    if ((sVar1 == 1) && (uVar3 = FUN__text__00632d74(param_2,0x224), (uVar3 & 1) == 0)) {
      FUN__text__00633c7c(param_2,0,0);
      return;
    }
    sVar1 = FUN__text__00631010(param_2);
    if ((sVar1 == 0) && (uVar3 = FUN__text__00632d74(param_2,0x224), (uVar3 & 1) != 0)) {
      FUN__text__00633c7c(param_2,1,0);
      return;
    }
  }
  return;
}


