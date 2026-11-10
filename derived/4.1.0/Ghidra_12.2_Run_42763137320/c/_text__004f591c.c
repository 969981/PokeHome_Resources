/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f591c; name: FUN_.text__004f591c
 */


void FUN__text__004f591c(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_2 + 0x108);
  lVar2 = *plVar4;
  if (lVar2 == 0) {
    uVar1 = (**(code **)(*param_1 + 0x110))(param_1);
    if ((uVar1 & 1) == 0) {
      FUN__text__004f6894(param_2,0,1);
      return;
    }
    lVar2 = *plVar4;
  }
  uVar3 = plVar4[1] - (ulong)*(uint *)(param_1 + 0x11);
  uVar1 = *(long *)(lVar2 + 8) - (ulong)*(uint *)(param_1 + 0x11);
  FUN__text__004f6894(param_2,(uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU)) -
                              (uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU)),0);
  return;
}


