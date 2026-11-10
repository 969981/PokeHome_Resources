/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00506740; name: FUN_.text__00506740
 */


undefined8 FUN__text__00506740(void)

{
  undefined8 *puVar1;
  
  if (DAT_00aebb00 != (undefined8 *)0x0) {
    return 2;
  }
  puVar1 = (undefined8 *)FUN__text__00400f80(9,0x48);
  DAT_00aebb00 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    return 1;
  }
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[6] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  nn::os::InitializeMutex((MutexType *)(puVar1 + 5),true,0);
  return 1;
}


