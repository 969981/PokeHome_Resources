/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d87d4; name: FUN_.text__005d87d4
 */


void FUN__text__005d87d4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x60) = 1;
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  return;
}


