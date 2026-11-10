/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069db40; name: FUN_.text__0069db40
 */


void FUN__text__0069db40(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = FUN__text__0069de6c(param_2,*(undefined8 *)(param_3 + 0x20),
                              *(undefined2 *)(param_3 + 0x4a));
  if ((uVar1 & 1) != 0) {
    FUN__text__006b0fdc(param_3,param_1);
  }
  FUN__text__0069de50(param_2,param_1);
  FUN__text__006b09e8(param_3,param_1,param_2);
  return;
}


