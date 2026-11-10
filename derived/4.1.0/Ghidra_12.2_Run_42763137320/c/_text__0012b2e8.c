/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012b2e8; name: FUN_.text__0012b2e8
 */


undefined8 FUN__text__0012b2e8(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN__text__0012b320();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN__text__0012b720(param_1);
  return uVar2;
}


