/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00306bcc; name: FUN_.text__00306bcc
 */


byte FUN__text__00306bcc(long param_1)

{
  short sVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = FUN__text__00631008(*(undefined8 *)(param_1 + 0x58));
  sVar1 = FUN__text__00631010(*(undefined8 *)(param_1 + 0x58));
  if ((iVar2 == 0x19 && sVar1 == 8) || ((bVar3 = 0, iVar2 == 0x85 && (sVar1 == 1)))) {
    bVar3 = 1;
  }
  return ((iVar2 == 0x286 || iVar2 == 0x382) && (ushort)(sVar1 - 1U) < 2 ||
         iVar2 == 800 && (ushort)(sVar1 - 1U) < 3) | bVar3;
}


