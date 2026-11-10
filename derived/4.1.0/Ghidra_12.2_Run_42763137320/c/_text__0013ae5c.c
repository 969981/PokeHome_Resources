/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013ae5c; name: FUN_.text__0013ae5c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0013ae5c(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
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
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xc60,0x10);
  if (plVar2 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN__text__001281fc(plVar2,*param_3,*param_4,*param_5);
  lVar1 = _DAT_0089fbc0;
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
  *(undefined4 *)((long)plVar2 + 0x66c) = 0;
  plVar2[0x153] = 0;
  plVar2[0x152] = 0;
  plVar2[0x151] = 0;
  plVar2[0x150] = 0;
  *(undefined4 *)(plVar2 + 0x14f) = 0;
  plVar2[0x14e] = 0;
  plVar2[0x14d] = 0;
  plVar2[0x165] = 0;
  plVar2[0x164] = 0;
  plVar2[0x163] = 0;
  plVar2[0x162] = 0;
  plVar2[0x177] = 0;
  plVar2[0x176] = 0;
  plVar2[0x175] = 0;
  plVar2[0x174] = 0;
  *(undefined1 *)((long)plVar2 + 0xc24) = 0;
  plVar2[0x188] = 0;
  plVar2[0x187] = 0;
  plVar2[0x186] = 0;
  plVar2[0x185] = 0;
  plVar2[9] = lVar1 + 0xd0;
  plVar2[10] = lVar1 + 0x110;
  *(undefined8 *)((long)plVar2 + 0x64c) = 0;
  *(undefined8 *)((long)plVar2 + 0x654) = 0;
  *(undefined8 *)((long)plVar2 + 0x65c) = 0;
  *(undefined8 *)((long)plVar2 + 0x664) = 0;
  plVar2[0x14c] = 0xe98bd2f9c79e70f;
  plVar2[0x160] = -0x340d631b7bddd9bb;
  plVar2[0x172] = -0x340d631b7bddd9bb;
  *(undefined4 *)(plVar2 + 0x184) = 0xffffffff;
  *plVar2 = lVar1 + 0x10;
  plVar2[1] = (long)param_2;
  plVar2[2] = (long)plVar2;
  plVar2[3] = 0xc60;
  plVar2[4] = 0x10;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  return plVar2;
}


