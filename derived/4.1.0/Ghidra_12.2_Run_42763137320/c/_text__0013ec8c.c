/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013ec8c; name: FUN_.text__0013ec8c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0013ec8c(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                          undefined8 *param_5)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xdc0,0x10);
  if (plVar2 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN__text__001281fc(plVar2,*param_3,*param_4,*param_5);
  lVar1 = _DAT_0089fc58;
  plVar2[200] = 0;
  *(undefined1 *)(plVar2 + 0xc9) = 0;
  plVar2[0xda] = 0;
  plVar2[0xdb] = 0;
  plVar2[0xdc] = 0;
  plVar2[0xdd] = 0;
  plVar2[0xea] = 0;
  plVar2[0xeb] = 0;
  plVar2[0xec] = 0;
  plVar2[0xed] = 0;
  plVar2[0xfa] = 0;
  plVar2[0xfb] = 0;
  plVar2[0xfc] = 0;
  plVar2[0xfd] = 0;
  plVar2[0x10d] = 0;
  plVar2[0x10c] = 0;
  plVar2[0x10b] = 0;
  plVar2[0x10a] = 0;
  plVar2[0x11d] = 0;
  plVar2[0x11c] = 0;
  plVar2[0x11b] = 0;
  plVar2[0x11a] = 0;
  plVar2[0x12a] = 0;
  plVar2[299] = 0;
  plVar2[300] = 0;
  plVar2[0x12d] = 0;
  plVar2[0x13a] = 0;
  plVar2[0x13b] = 0;
  plVar2[0x13c] = 0;
  plVar2[0x13d] = 0;
  plVar2[0x14a] = 0;
  plVar2[0x14b] = 0;
  plVar2[0x14c] = 0;
  plVar2[0x14d] = 0;
  plVar2[0x15d] = 0;
  plVar2[0x15c] = 0;
  plVar2[0x15b] = 0;
  plVar2[0x15a] = 0;
  plVar2[0x16d] = 0;
  plVar2[0x16c] = 0;
  plVar2[0x16b] = 0;
  plVar2[0x16a] = 0;
  plVar2[0x17b] = 0;
  plVar2[0x17a] = 0;
  *(undefined4 *)((long)plVar2 + 0x66c) = 0;
  plVar2[0x183] = 0;
  plVar2[0x182] = 0;
  plVar2[0x181] = 0;
  plVar2[0x180] = 0;
  plVar2[0x193] = 0;
  plVar2[0x192] = 0;
  plVar2[0x191] = 0;
  plVar2[400] = 0;
  plVar2[0x1a3] = 0;
  plVar2[0x1a2] = 0;
  plVar2[0x1a1] = 0;
  plVar2[0x1a0] = 0;
  *(undefined4 *)(plVar2 + 0x17f) = 0;
  plVar2[0x17e] = 0;
  plVar2[0x17d] = 0;
  *(undefined1 *)((long)plVar2 + 0xd84) = 0;
  plVar2[0x1b4] = 0;
  plVar2[0x1b3] = 0;
  plVar2[0x1b2] = 0;
  plVar2[0x1b1] = 0;
  plVar2[9] = lVar1 + 0xd0;
  plVar2[10] = lVar1 + 0x110;
  *(undefined8 *)((long)plVar2 + 0x65c) = 0;
  *(undefined8 *)((long)plVar2 + 0x664) = 0;
  *(undefined8 *)((long)plVar2 + 0x64c) = 0;
  *(undefined8 *)((long)plVar2 + 0x654) = 0;
  plVar2[0x17c] = 0xe98bd2f9c79e70f;
  *(undefined4 *)(plVar2 + 0x1b0) = 0xffffffff;
  *(undefined8 *)((long)plVar2 + 0xdae) = 0;
  plVar2[0x1b5] = 0;
  *plVar2 = lVar1 + 0x10;
  plVar2[1] = (long)param_2;
  plVar2[2] = (long)plVar2;
  plVar2[3] = 0xdc0;
  plVar2[4] = 0x10;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  return plVar2;
}


