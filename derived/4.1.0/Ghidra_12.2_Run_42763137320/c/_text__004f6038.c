/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f6038; name: FUN_.text__004f6038
 */


undefined8 FUN__text__004f6038(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_160 [264];
  long local_58;
  
  FUN__text__004f6114(auStack_160,param_1,1);
  if (local_58 == 0) {
    uVar1 = 0;
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    uVar1 = FUN__text__004f6178(auStack_160,param_2);
  }
  FUN__text__004f6174(auStack_160);
  return uVar1;
}


