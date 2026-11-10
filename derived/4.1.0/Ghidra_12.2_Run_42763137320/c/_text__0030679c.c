/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030679c; name: FUN_.text__0030679c
 */


void FUN__text__0030679c(long param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN__text__00631008(*(undefined8 *)(param_1 + 0x58));
  if ((iVar2 == 0x1ed) && (sVar1 = FUN__text__0063121c(*(undefined8 *)(param_1 + 0x58)), sVar1 == 0)
     ) {
    uVar3 = FUN__text__00631010(*(undefined8 *)(param_1 + 0x58));
    FUN__text__005fe954(0x1ed,uVar3,0);
    return;
  }
  FUN__text__00634614(*(undefined8 *)(param_1 + 0x58));
  return;
}


