/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d2624; name: FUN_.text__002d2624
 */


void FUN__text__002d2624(undefined8 param_1,long *param_2)

{
  void *__s;
  ulong uVar1;
  
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  if (*(long *)(uVar1 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar1 + 0x18 + *(long *)(uVar1 + 0x98) * 8) = param_2;
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
  __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x2a0,0x10);
  if (__s == (void *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
    memset((void *)0x0,0,0x2a0);
                    /* WARNING: Subroutine does not return */
    FUN__text__002ce000(0);
  }
  memset(__s,0,0x2a0);
                    /* WARNING: Subroutine does not return */
  FUN__text__002ce000(__s);
}


