/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a256c; name: FUN_.text__002a256c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002a256c(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  
  if (param_3 - 4U < 0xfffffffe) {
    return;
  }
  lVar6 = *(long *)(*_DAT_0089f5b0 + 0x60);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar6 + 0x100);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  iVar1 = FUN__text__00631008(param_2);
  if (iVar1 == 0x147) {
    uVar2 = FUN__text__00631010(param_2);
    uVar3 = FUN__text__00634538(param_2);
    iVar1 = 2;
    if ((uVar3 & 1) == 0) {
      iVar1 = 0;
    }
    uVar2 = iVar1 + (uVar2 & 0xffff);
    if (param_3 == 3) {
      piVar5 = (int *)(lVar4 + (ulong)uVar2 * 4 + 100);
      iVar1 = *piVar5;
    }
    else {
      piVar5 = (int *)(lVar4 + (ulong)uVar2 * 4 + 0x54);
      iVar1 = *piVar5;
    }
    if (iVar1 == 0) {
      iVar1 = FUN__text__00634578(param_2);
      *piVar5 = iVar1;
    }
  }
  else if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002a2670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


