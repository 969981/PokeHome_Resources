/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0033fa10; name: FUN_.text__0033fa10
 */


void FUN__text__0033fa10(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x88,8);
  if (lVar1 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  *param_3 = 0;
                    /* WARNING: Subroutine does not return */
  FUN__text__00110090(lVar1);
}


