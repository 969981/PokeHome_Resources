/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e4564; name: FUN_.text__004e4564
 */


void FUN__text__004e4564(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if ((long *)*param_1 != (long *)0x0) {
    uVar1 = (**(code **)(*(long *)*param_1 + 0x18))();
    if ((uVar1 & 1) != 0) {
      (**(code **)(*(long *)*param_1 + 0x28))();
    }
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      FUN__text__00400fc0(5,puVar2);
    }
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    FUN__text__00400fc0(5);
    param_1[1] = 0;
  }
  if (param_1[3] != 0) {
    FUN__text__00400fc0(5);
    param_1[3] = 0;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (param_1[6] != 0) {
    FUN__text__00400fc0(5);
    param_1[6] = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


