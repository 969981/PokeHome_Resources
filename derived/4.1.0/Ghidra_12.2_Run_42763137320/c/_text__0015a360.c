/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015a360; name: FUN_.text__0015a360
 */


bool FUN__text__0015a360(short *param_1)

{
  short sVar1;
  char cVar2;
  uint uVar3;
  
  sVar1 = *param_1;
  uVar3 = FUN__text__005f37a0();
  if (sVar1 == 0x10) {
    cVar2 = FUN__text__005f37a0(param_1);
    return (uVar3 >> 8 & 0xff) == 0x19 && cVar2 == '\0';
  }
  return false;
}


