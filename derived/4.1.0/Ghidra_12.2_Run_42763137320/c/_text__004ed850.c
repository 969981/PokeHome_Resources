/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ed850; name: FUN_.text__004ed850
 */


void FUN__text__004ed850(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  while (puVar2 != (undefined8 *)0x0) {
    lVar1 = puVar2[1];
    if (lVar1 == 0) {
      *(undefined8 *)(param_1 + 8) = 0;
    }
    *(long *)(param_1 + 0x10) = lVar1;
    puVar2[1] = 0;
    (**(code **)*puVar2)(puVar2);
    FUN__text__00400fc0(0,puVar2);
    puVar2 = *(undefined8 **)(param_1 + 0x10);
  }
  return;
}


