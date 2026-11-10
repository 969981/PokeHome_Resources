/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00451290; name: FUN_.text__00451290
 */


void FUN__text__00451290(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar2 = *(long **)(param_1 + 0xe0);
  if ((plVar2 == (long *)0x0) || (plVar2[3] != param_2)) {
    plVar2 = *(long **)(param_1 + 0xe8);
    if ((plVar2 == (long *)0x0) || (plVar2[3] != param_2)) {
      return;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,0);
    puVar3 = *(undefined8 **)(param_1 + 0xe8);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN__text__00400fc0(5,puVar3);
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
    return;
  }
  if ((*(byte *)(plVar2 + 4) & 1) != 0) {
    iVar1 = (**(code **)(*plVar2 + 0x90))();
    if (iVar1 == 1) {
      return;
    }
    if (*(long *)(param_1 + 0xe0) == 0) goto LAB__text__004512fc;
  }
  FUN__text__004286a0();
LAB__text__004512fc:
  *(undefined4 *)(param_1 + 0xf8) = 2;
  *(undefined4 *)(param_1 + 300) = 0x11;
  return;
}


