/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00463684; name: FUN_.text__00463684
 */


void FUN__text__00463684(uint param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long local_18;
  
  uVar1 = 0x42480000;
  if (((param_1 ^ 0xffffffff) & 0x7f800000) != 0) {
    uVar1 = param_1;
  }
  local_18 = param_3;
  FUN__text__004636e0(param_2,*(undefined8 *)(param_3 + 0x318),*(undefined4 *)(param_3 + 800),
                      CONCAT44(*(undefined4 *)(param_3 + 0x31c),uVar1),
                      *(undefined4 *)(param_3 + 800),&local_18);
  return;
}


