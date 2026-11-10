/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004500b0; name: FUN_.text__004500b0
 */


void FUN__text__004500b0(long param_1)

{
  uint *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (*(long *)(param_1 + 0xf0) == 0) {
    plVar3 = *(long **)(param_1 + 0xa8);
    if ((((plVar3 == (long *)0x0) && (plVar3 = *(long **)(param_1 + 0xb0), plVar3 == (long *)0x0))
        && (plVar3 = *(long **)(param_1 + 0xb8), plVar3 == (long *)0x0)) &&
       (plVar3 = *(long **)(param_1 + 0xc0), plVar3 == (long *)0x0)) {
      FUN__text__00457918(param_1 + 0x70,*(undefined8 *)(param_1 + 0xe8));
    }
    else {
      (**(code **)(*plVar3 + 0x58))(plVar3,*(undefined8 *)(param_1 + 0xe8));
    }
  }
  else {
    FUN__text__004dac0c(*(long *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xe8));
  }
  FUN__text__004501b0(param_1 + 0x100);
  (**(code **)(**(long **)(param_1 + 0xe0) + 0x60))(*(long **)(param_1 + 0xe0),0);
  puVar5 = *(undefined8 **)(param_1 + 0xe0);
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    FUN__text__00400fc0(5,puVar5);
  }
  *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe8);
  lVar4 = *(long *)(*(long *)(param_1 + 0xe8) + 0x18);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  lVar2 = 0;
  if (lVar4 != 0) {
    lVar2 = lVar4 + 0x18;
  }
  *(long *)(param_1 + 8) = lVar2;
  FUN__text__00428558();
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(*(long *)(param_1 + 0xe0) + 0x18);
  puVar1 = (uint *)(*(long *)(*(long *)(param_1 + 0xe0) + 0x18) + 0x313);
  *puVar1 = *puVar1 & 0xfdffffff;
  return;
}


