/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00129c90; name: FUN_.text__00129c90
 */


void FUN__text__00129c90(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  lVar2 = *param_1;
  *param_1 = param_2;
  if (lVar2 == 0) {
    return;
  }
  plVar3 = *(long **)(lVar2 + 0x18);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3;
    if (*(long **)(lVar2 + 0x20) != plVar3) {
      plVar1 = *(long **)(lVar2 + 0x20);
      do {
        plVar4 = plVar1 + -1;
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          plVar1[-1] = 0;
        }
        plVar1 = plVar4;
      } while (plVar4 != plVar3);
      plVar1 = *(long **)(lVar2 + 0x18);
    }
    *(long **)(lVar2 + 0x20) = plVar3;
    (**(code **)(**(long **)(lVar2 + 0x30) + 0x18))
              (*(long **)(lVar2 + 0x30),plVar1,*(long *)(lVar2 + 0x28) - (long)plVar1,8);
  }
  if (*(long *)(lVar2 + 0x10) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x10) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x10) = 0;
  }
  if (*(long *)(lVar2 + 8) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 8) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 8) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00129d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],lVar2,param_1[2],param_1[3]);
  return;
}


