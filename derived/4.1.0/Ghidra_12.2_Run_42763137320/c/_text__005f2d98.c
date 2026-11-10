/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f2d98; name: FUN_.text__005f2d98
 */


void FUN__text__005f2d98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  if (*(long *)(param_1 + 0xb8) == 0) {
    FUN__text__005f29c0(param_1,0xffffffff,param_3);
    return;
  }
  uVar1 = FUN__text__005dc7a0();
  FUN__text__005f29c0(param_1,uVar1,param_3);
  return;
}


