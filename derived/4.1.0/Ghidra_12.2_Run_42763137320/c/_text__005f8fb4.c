/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f8fb4; name: FUN_.text__005f8fb4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__005f8fb4(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long *__s;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = tpidr_el0;
  uVar5 = uVar5 & 0xffffffffffffe000;
  if (*(long *)(uVar5 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  lVar3 = uVar5 + 0x18;
  *(long **)(lVar3 + *(long *)(uVar5 + 0x98) * 8) = param_2;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  __s = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x1f0,0x10);
  if (__s == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x5f9148);
    (*pcVar1)();
  }
  memset(__s,0,0x1f0);
  lVar2 = _DAT_0089f690;
  *(undefined4 *)(__s + 6) = 0;
  __s[2] = 0;
  __s[3] = 0;
  __s[4] = 0;
  __s[5] = 0;
  *__s = lVar2 + 0x10;
  lVar2 = _DAT_008a5d18;
  if (uVar5 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(uVar5 + 0x98) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(uVar5 + 0x98) * 8 + -8);
    }
  }
  *_DAT_008a5d10 = 1;
  __s[0x1c] = 0;
  __s[0x1d] = 0;
  __s[0x1e] = 0;
  __s[0x1f] = 0;
  __s[0xb] = 0;
  __s[0xc] = 0;
  __s[0xd] = 0;
  __s[0xe] = 0;
  *__s = lVar2 + 0x10;
  __s[1] = lVar4;
  lVar4 = _DAT_0089f6e0 + 0x10;
  __s[0xf] = 0;
  __s[0x36] = 0;
  __s[0x2e] = 0;
  __s[0x2f] = 0;
  __s[0x32] = 0;
  __s[0x33] = 0;
  __s[9] = lVar2 + 0x40;
  __s[10] = lVar4;
  __s[0x2c] = -0x340d631b7bddd9bb;
  __s[0x2d] = 0x70f683;
  __s[0x30] = -0x340d631b7bddd9bb;
  __s[0x31] = 0x70f683;
  __s[0x34] = 0;
  __s[0x35] = 0;
  if ((uVar5 != 0) && (*(long *)(uVar5 + 0x98) != 0)) {
    lVar3 = *(long *)(lVar3 + *(long *)(uVar5 + 0x98) * 8 + -8);
    if (lVar3 != 0) goto LAB__text__005f90e8;
  }
  lVar3 = FUN__text__005f52b0();
LAB__text__005f90e8:
  *(undefined4 *)(__s + 0x39) = 0;
  __s[0x37] = lVar3;
  __s[0x38] = 0;
  __s[0x3c] = 0x3f80000000000003;
  *(undefined1 *)(__s + 0x3d) = 0;
  __s[0x3a] = 0;
  __s[0x3b] = 0;
  __s[1] = (long)param_2;
  __s[2] = (long)__s;
  __s[3] = 0x1f0;
  __s[4] = 0x10;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
  return __s;
}


