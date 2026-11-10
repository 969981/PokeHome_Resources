/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00405e44; name: FUN_.text__00405e44
 */


void FUN__text__00405e44(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_00ae9650;
  if (DAT_00ae9650 != (undefined8 *)0x0) {
    (**(code **)*DAT_00ae9650)(DAT_00ae9650);
    FUN__text__00400fc0(0x10,puVar1);
  }
  DAT_00ae9650 = (undefined8 *)0x0;
  return;
}


