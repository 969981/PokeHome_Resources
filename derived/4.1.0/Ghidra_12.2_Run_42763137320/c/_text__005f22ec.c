/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f22ec; name: FUN_.text__005f22ec
 */


void FUN__text__005f22ec(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
  *(float *)(lVar2 + 0x8e8) = (float)((double)*(long *)(lVar1 + 8) / 1000000000.0);
  return;
}


