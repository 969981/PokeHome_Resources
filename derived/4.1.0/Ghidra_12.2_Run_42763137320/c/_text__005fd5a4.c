/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fd5a4; name: FUN_.text__005fd5a4
 */


void FUN__text__005fd5a4(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    return;
  }
  FUN__text__005d9290(*(long *)(param_1 + 0x58),param_1 + 0x50);
  lVar1 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  return;
}


