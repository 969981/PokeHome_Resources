/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f6af4; name: FUN_.text__005f6af4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN__text__005f6af4(void)

{
  int iVar1;
  
  if (((DAT_00c15c30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00c15c30), iVar1 != 0)) {
    nn::os::InitializeLightEvent(&DAT_00c15c28,0,1);
    DAT_00c15c2a = 0x4f;
    DAT_00c15c2b = 0;
    FUN__text__001001d0(_DAT_008a5658,&DAT_00c15c28,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_00c15c30);
    return &DAT_00c15c28;
  }
  return &DAT_00c15c28;
}


