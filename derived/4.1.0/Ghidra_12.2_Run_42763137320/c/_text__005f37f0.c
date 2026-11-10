/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f37f0; name: FUN_.text__005f37f0
 */


short FUN__text__005f37f0(short *param_1,uint param_2)

{
  ushort uVar1;
  short sVar2;
  
  if ((*param_1 != 0x10) || (uVar1 = param_1[1], 0x10 < uVar1)) {
    return 0;
  }
  sVar2 = 0;
  if ((uVar1 != 0) && (param_2 < uVar1 - 1)) {
    sVar2 = param_1[param_2 + 3];
  }
  return sVar2;
}


