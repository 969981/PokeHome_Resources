/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047d75c; name: FUN_.text__0047d75c
 */


void FUN__text__0047d75c(void)

{
  undefined8 *puVar1;
  
  if (DAT_00aea850 != (undefined *)0x0) {
    DAT_00aea858 = 0;
    if (DAT_00aea850 != &DAT_00aea840) {
      FUN__text__00400fc0(4);
    }
    DAT_00aea850 = (undefined *)0x0;
    DAT_00aea85c = 0;
  }
  puVar1 = DAT_00aea688;
  if (DAT_00aea688 != (undefined8 *)0x0) {
    (**(code **)*DAT_00aea688)(DAT_00aea688);
    FUN__text__00400fc0(4,puVar1);
    DAT_00aea688 = (undefined8 *)0x0;
  }
  return;
}


