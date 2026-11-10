/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00675630; name: FUN_.text__00675630
 */


undefined8 FUN__text__00675630(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*param_1 + 0x1e8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN__text__006783e4(puVar1[1]);
    *puVar1 = 0;
    puVar1[1] = 0;
    if ((FILE *)puVar1[2] != (FILE *)0x0) {
      fclose((FILE *)puVar1[2]);
    }
    puVar1[2] = 0;
  }
  return 0;
}


