/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c3378; name: FUN_.text__003c3378
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003c3378(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                        undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  char acStack_164 [260];
  
  lVar3 = *(long *)(*_DAT_0089f4f0 + 0x80);
  if (lVar3 != 0) {
    plVar2 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  uVar1 = FUN__text__00114ad0(lVar3 + 0x1b0,param_2,param_3 & 1);
  memset(acStack_164,0,0x104);
  snprintf(acStack_164,0x104,(char *)0x71959e,uVar1);
  FUN__text__003d0ed4(param_1,acStack_164,param_4,param_5,param_6);
  return;
}


