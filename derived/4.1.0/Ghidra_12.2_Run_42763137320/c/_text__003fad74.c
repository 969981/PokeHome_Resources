/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fad74; name: FUN_.text__003fad74
 */


undefined4
FUN__text__003fad74(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5)

{
  long lVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  lVar1 = FUN__text__003f5ce8(param_3,param_4,param_5);
  *(long *)(param_1 + 0x18) = lVar1;
  uVar2 = 1;
  if (lVar1 == 0) {
    uVar2 = 2;
  }
  return uVar2;
}


