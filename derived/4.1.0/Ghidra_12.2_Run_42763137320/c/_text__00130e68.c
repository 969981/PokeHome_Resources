/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00130e68; name: FUN_.text__00130e68
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__00130e68(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
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
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,2000,0x10);
  if (plVar2 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN__text__001281fc(plVar2,*param_3,*param_4,*param_5);
  lVar1 = _DAT_0089fab0;
  plVar2[200] = 0;
  plVar2[0xc9] = 0;
  plVar2[0xca] = 0;
  plVar2[0xcb] = 0;
  plVar2[0xcc] = 0;
  plVar2[0xcd] = 0;
  plVar2[0xce] = 0;
  plVar2[0xcf] = 0;
  plVar2[0xd0] = 0;
  plVar2[0xd1] = 0;
  *(undefined2 *)(plVar2 + 0xd2) = 0;
  *plVar2 = lVar1 + 0x10;
  plVar2[9] = lVar1 + 0xb8;
  plVar2[10] = lVar1 + 0xf8;
  FUN__text__001199b0(plVar2 + 0xd3);
  *(undefined1 *)(plVar2 + 0xf8) = 0;
  lVar1 = _DAT_0089fb28;
  plVar2[0xf9] = 0;
  plVar2[9] = lVar1 + 0xb8;
  plVar2[10] = lVar1 + 0xf8;
  *plVar2 = lVar1 + 0x10;
  plVar2[1] = (long)param_2;
  *(undefined4 *)((long)plVar2 + 0x7c4) = 5;
  plVar2[2] = (long)plVar2;
  plVar2[3] = 2000;
  plVar2[4] = 0x10;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  return plVar2;
}


