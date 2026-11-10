/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00469760; name: FUN_.text__00469760
 */


uint FUN__text__00469760(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  
  uVar1 = FUN__text__00464cf0();
  lVar4 = *(long *)(param_1 + 0x70);
  if (lVar4 == 0) {
    if ((param_2 & 1) == 0) goto LAB__text__004697cc;
  }
  else {
    *(short *)(lVar4 + 0xc4) = *(short *)(lVar4 + 0xc4) + 1;
    if ((param_2 & 1) == 0) goto LAB__text__004697cc;
    *(short *)(lVar4 + 0xc6) = *(short *)(lVar4 + 0xc6) + 1;
  }
  plVar3 = *(long **)(param_1 + 0x80);
  if (plVar3 != (long *)0x0) {
    param_2 = param_2 & 0xfffffffe;
    uVar2 = (**(code **)(*plVar3 + 0x128))(plVar3,1);
    uVar1 = uVar1 & uVar2;
  }
LAB__text__004697cc:
  plVar3 = *(long **)(param_1 + 0x78);
  if (plVar3 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar3 + 0x128))(plVar3,param_2);
    uVar1 = uVar1 & uVar2;
  }
  return uVar1 & 1;
}


