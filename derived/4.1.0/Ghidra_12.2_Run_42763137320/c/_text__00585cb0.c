/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00585cb0; name: FUN_.text__00585cb0
 */


undefined8
FUN__text__00585cb0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,short param_5)

{
  undefined2 *puVar1;
  
  if (*(char *)(param_1 + 0xda) != '\0') {
    if (*(long *)(param_1 + 0xb8) != 0) {
      FUN__text__00400fc0(5);
      *(undefined1 *)(param_1 + 0xda) = 0;
      *(long *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
  }
  *(short *)(param_1 + 0xd8) = param_5;
  puVar1 = (undefined2 *)(param_1 + 0x8e);
  if (param_5 != 1) {
    puVar1 = (undefined2 *)(param_1 + 0x82);
  }
  FUN__text__00585d70(param_1 + 0x18,*(undefined4 *)(param_3 + 4),*puVar1);
  *(undefined4 *)(param_1 + 0x10) = 3;
  return 1;
}


