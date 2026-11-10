/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00310108; name: FUN_.text__00310108
 */


undefined4 FUN__text__00310108(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN__text__00310150();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  uVar1 = FUN__text__003102e8(*(undefined8 *)(param_1 + 0x60));
  uVar2 = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  return uVar2;
}


