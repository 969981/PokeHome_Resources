/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046cd68; name: FUN_.text__0046cd68
 */


undefined8 FUN__text__0046cd68(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN__text__00400f80(0,0x60);
  if (puVar1 == (undefined8 *)0x0) {
    *param_1 = 0;
    return 0x34;
  }
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  *param_1 = puVar1;
  return 1;
}


