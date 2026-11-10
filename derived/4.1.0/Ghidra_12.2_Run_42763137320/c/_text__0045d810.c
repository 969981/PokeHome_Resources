/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045d810; name: FUN_.text__0045d810
 */


void FUN__text__0045d810(long param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  
  if ((*(char *)((long)param_2 + 0x1f) != '\0' && *(char *)((long)param_2 + 0x1d) != '\0') &&
     (*param_2 < 3)) {
    FUN__text__0042eb90(param_1 + 0x28,*param_2 & 1);
  }
  *(undefined1 *)(param_2 + 7) = 1;
  uVar1 = *(uint *)(param_1 + 0xe8);
  while (uVar1 != 0) {
    uVar1 = uVar1 - 1;
    plVar3 = *(long **)(*(long *)(param_1 + 0xe0) + (ulong)uVar1 * 8);
    uVar2 = FUN__text__004647d0(plVar3,*(undefined8 *)(param_2 + 0xc));
    if ((uVar2 & 1) == 0) {
      (**(code **)(*plVar3 + 0xa8))(plVar3,param_2);
    }
    if (*(uint *)(param_1 + 0xe8) <= uVar1) {
      uVar1 = *(uint *)(param_1 + 0xe8);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x108);
  while (uVar1 != 0) {
    uVar1 = uVar1 - 1;
    plVar3 = *(long **)(*(long *)(param_1 + 0x100) + (ulong)uVar1 * 8);
    uVar2 = FUN__text__004647d0(plVar3,*(undefined8 *)(param_2 + 0xc));
    if ((uVar2 & 1) == 0) {
      (**(code **)(*plVar3 + 0xa8))(plVar3,param_2);
    }
    if (*(uint *)(param_1 + 0x108) <= uVar1) {
      uVar1 = *(uint *)(param_1 + 0x108);
    }
  }
  return;
}


