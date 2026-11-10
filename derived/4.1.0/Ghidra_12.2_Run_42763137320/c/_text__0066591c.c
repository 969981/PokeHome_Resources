/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066591c; name: FUN_.text__0066591c
 */


undefined8 FUN__text__0066591c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x4a8);
  FUN__text__00656b20((undefined8 *)(param_2 + 0x4a8),*(undefined8 *)(param_2 + 0x4b0),param_1,
                      param_1 + 0x30);
  if ((**(int **)(param_2 + 0x660) == 1) &&
     (puVar1 = *(undefined8 **)(param_2 + 0x4a8), puVar2 != puVar1)) {
    *(byte *)(param_2 + 0x66c) = *(byte *)(param_2 + 0x66c) & 0xfb;
    FUN__text__0065a050(*puVar1,0,6);
  }
  return 0;
}


