/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a2ed0; name: FUN_.text__002a2ed0
 */


void FUN__text__002a2ed0(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar2 = *(long **)(param_1 + 8);
  *(long **)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = plVar2;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  lVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,0x310,8);
  if (lVar1 == 0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2);
  }
  FUN__text__00637458(lVar1,plVar2,0,0,0);
  *(long **)(lVar1 + 8) = plVar2;
  *(long *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)(lVar1 + 0x18) = 0x310;
  *(undefined8 *)(lVar1 + 0x20) = 8;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  lVar4 = 0x28;
  do {
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x54);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x1ac);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x304);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x45c);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x5b4);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x70c);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x864);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x9bc);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0xb14);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0xc6c);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0xdc4);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0xf1c);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x1074);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x11cc);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x1324);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x147c);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x15d4);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x172c);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x1884);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x19dc);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x1b34);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x1c8c);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x1de4);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x1f3c);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x2094);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x21ec);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x2344);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x249c);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x25f4);
    thunk_FUN__text__0063758c(lVar1,param_1 + 0x274c);
    param_1 = param_1 + 0x2850;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
                    /* WARNING: Could not recover jumptable at 0x002a3188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  return;
}


