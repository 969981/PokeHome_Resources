/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003bcd10; name: FUN_.text__003bcd10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__003bcd10(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long *__s;
  ulong uVar3;
  
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  __s = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x180,0x10);
  if (__s == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
    memset((void *)0x0,0,0x180);
    FUN__text__003a1464(0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x3bce1c);
    (*pcVar1)();
  }
  memset(__s,0,0x180);
  FUN__text__003a1464(__s);
  __s[0x28] = 0;
  lVar2 = _DAT_008a34f0;
  *(undefined2 *)(__s + 0x29) = 0;
  __s[0x2a] = 0;
  __s[0x14] = 0;
  __s[0x15] = 0;
  __s[0x16] = 0;
  __s[0x17] = 0;
  __s[0x18] = 0;
  __s[0x19] = 0;
  __s[9] = lVar2 + 0x128;
  __s[10] = lVar2 + 0x168;
  *(undefined1 *)(__s + 0x2e) = 1;
  __s[4] = 0x10;
  __s[0x1a] = 0;
  __s[0x1b] = 0;
  *__s = lVar2 + 0x10;
  __s[1] = (long)param_2;
  __s[2] = (long)__s;
  __s[3] = 0x180;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  return __s;
}


