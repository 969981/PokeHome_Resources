/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00497678; name: FUN_.text__00497678
 */


void FUN__text__00497678(undefined4 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if (((param_2 != 0) && (*(long *)(param_1 + 2) != 0)) &&
     (iVar1 = FUN__text__004961d0(), iVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)(param_1 + 2) = 0;
    FUN__text__0049a1f0(*(undefined8 *)(param_2 + 0x40),param_2,param_1,uVar2);
  }
  plVar3 = *(long **)(param_1 + 10);
  *param_1 = 0;
  if (plVar3 == (long *)0x0) goto LAB__text__004976f8;
  if (*plVar3 == 0) {
LAB__text__004976e8:
    FUN__text__00400fc0(2,plVar3);
  }
  else {
    *(undefined4 *)(plVar3 + 1) = 0;
    FUN__text__00400fc0(0);
    *plVar3 = 0;
    *(undefined4 *)((long)plVar3 + 0xc) = 0;
    plVar3 = *(long **)(param_1 + 10);
    if (plVar3 != (long *)0x0) goto LAB__text__004976e8;
  }
  *(undefined8 *)(param_1 + 10) = 0;
LAB__text__004976f8:
  if (*(long *)(param_1 + 4) != 0) {
    FUN__text__00400fc0(0);
  }
  *(long *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 1;
  return;
}


