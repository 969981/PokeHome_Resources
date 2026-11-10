/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00428800; name: FUN_.text__00428800
 */


undefined8 FUN__text__00428800(long *param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x68))
                    (param_1,*(undefined8 *)(param_1[3] + 0x340),*(undefined4 *)(param_1[3] + 0x348)
                    );
  if ((int)uVar1 == 1) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
  }
  return uVar1;
}


