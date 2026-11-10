/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0022a4bc; name: FUN_.text__0022a4bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0022a4bc(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
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
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,12000,0x10);
  if (plVar2 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN__text__001281fc(plVar2,*param_3,*param_4,*param_5);
  lVar1 = _DAT_008a1960;
  plVar2[0xcc] = 0;
  plVar2[0xcd] = 0;
  plVar2[0xce] = 0;
  plVar2[0xcf] = 0;
  plVar2[0xdc] = 0;
  plVar2[0xdd] = 0;
  plVar2[0xde] = 0;
  plVar2[0xdf] = 0;
  *(undefined1 *)(plVar2 + 0xec) = 0;
  plVar2[200] = 0;
  plVar2[0xc9] = 0;
  plVar2[0xca] = 0;
  *plVar2 = lVar1 + 0x10;
  *(undefined4 *)((long)plVar2 + 0x7cc) = 0;
  plVar2[9] = lVar1 + 0xa8;
  plVar2[10] = lVar1 + 0xe8;
  *(undefined8 *)((long)plVar2 + 0x7c4) = 0;
  *(undefined8 *)((long)plVar2 + 0x764) = 0;
  *(undefined8 *)((long)plVar2 + 0x76c) = 0;
  *(undefined8 *)((long)plVar2 + 0x774) = 0;
  *(undefined8 *)((long)plVar2 + 0x77c) = 0;
  *(undefined8 *)((long)plVar2 + 0x784) = 0;
  *(undefined8 *)((long)plVar2 + 0x78c) = 0;
  *(undefined8 *)((long)plVar2 + 0x794) = 0;
  *(undefined8 *)((long)plVar2 + 0x79c) = 0;
  *(undefined8 *)((long)plVar2 + 0x7a4) = 0;
  *(undefined8 *)((long)plVar2 + 0x7ac) = 0;
  *(undefined8 *)((long)plVar2 + 0x7b4) = 0;
  *(undefined8 *)((long)plVar2 + 0x7bc) = 0;
  FUN__text__003d0f70(plVar2 + 0xfa);
  lVar1 = _DAT_008a1348 + 0x10;
  plVar2[0xfa] = lVar1;
  FUN__text__003d0f70(plVar2 + 0x1c6);
  plVar2[0x1c6] = lVar1;
  FUN__text__003d0f70(plVar2 + 0x292);
  plVar2[0x292] = lVar1;
  FUN__text__003d0f70(plVar2 + 0x35e);
  plVar2[0x35e] = lVar1;
  FUN__text__003d0f70(plVar2 + 0x42a);
  plVar2[0x42a] = lVar1;
  FUN__text__003d0f70(plVar2 + 0x4f6);
  plVar2[0x4f6] = lVar1;
  plVar2[0x5c2] = 0;
  plVar2[0x5c3] = 0;
  plVar2[0x5c4] = 0;
  plVar2[0x5c5] = 0;
  plVar2[0x5c6] = 0;
  plVar2[0x5c7] = 0;
  plVar2[0x5c8] = 0;
  plVar2[0x5c9] = 0;
  plVar2[0x5ca] = 0;
  plVar2[0x5cb] = 0;
  plVar2[0x5d8] = 0;
  plVar2[0x5d9] = 0;
  plVar2[0x5da] = 0;
  plVar2[1] = (long)param_2;
  plVar2[2] = (long)plVar2;
  plVar2[3] = 12000;
  plVar2[4] = 0x10;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  return plVar2;
}


