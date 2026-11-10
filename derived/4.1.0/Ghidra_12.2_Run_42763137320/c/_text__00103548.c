/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00103548; name: FUN_.text__00103548
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00103548(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar2 = _DAT_0089f3d8;
  lVar5 = *_DAT_0089f3d8;
  plVar4 = *(long **)(lVar5 + 0x28);
  *(long **)(lVar5 + 0x2d0) = plVar4;
  plVar1 = _DAT_0089f350;
  lVar3 = *_DAT_0089f350;
  *(long *)(lVar5 + 0x2e0) = lVar3;
  lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,lVar3,8);
  *(long *)(lVar5 + 0x2d8) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar5 + 0x2d0) + 0xb8))();
    lVar3 = *(long *)(lVar5 + 0x2d8);
  }
  FUN__text__005f6b94(lVar3,lVar3 + 0xa8,*plVar1 + -0xa8,0);
  *(long *)(lVar5 + 0x2c8) = lVar3;
  lVar5 = *plVar2;
  *(long **)(lVar5 + 0x2f0) = plVar4;
  plVar1 = _DAT_0089f358;
  lVar3 = *_DAT_0089f358;
  *(long *)(lVar5 + 0x300) = lVar3;
  lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,lVar3,8);
  *(long *)(lVar5 + 0x2f8) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar5 + 0x2f0) + 0xb8))();
    lVar3 = *(long *)(lVar5 + 0x2f8);
  }
  FUN__text__005f6b94(lVar3,lVar3 + 0xa8,*plVar1 + -0xa8,0);
  *(long *)(lVar5 + 0x2e8) = lVar3;
  lVar5 = *plVar2;
  *(long **)(lVar5 + 0x310) = plVar4;
  plVar1 = _DAT_0089f360;
  lVar3 = *_DAT_0089f360;
  *(long *)(lVar5 + 800) = lVar3;
  lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,lVar3,8);
  *(long *)(lVar5 + 0x318) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar5 + 0x310) + 0xb8))();
    lVar3 = *(long *)(lVar5 + 0x318);
  }
  FUN__text__005f6b94(lVar3,lVar3 + 0xa8,*plVar1 + -0xa8,0);
  *(long *)(lVar5 + 0x308) = lVar3;
  lVar5 = *plVar2;
  *(long **)(lVar5 + 0x330) = plVar4;
  plVar1 = _DAT_0089f368;
  lVar3 = *_DAT_0089f368;
  *(long *)(lVar5 + 0x340) = lVar3;
  lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,lVar3,8);
  *(long *)(lVar5 + 0x338) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar5 + 0x330) + 0xb8))();
    lVar3 = *(long *)(lVar5 + 0x338);
  }
  FUN__text__005f6b94(lVar3,lVar3 + 0xa8,*plVar1 + -0xa8,0);
  *(long *)(lVar5 + 0x328) = lVar3;
  lVar5 = *plVar2;
  *(long **)(lVar5 + 0x350) = plVar4;
  plVar1 = _DAT_0089f370;
  lVar3 = *_DAT_0089f370;
  *(long *)(lVar5 + 0x360) = lVar3;
  lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,lVar3,8);
  *(long *)(lVar5 + 0x358) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar5 + 0x350) + 0xb8))();
    lVar3 = *(long *)(lVar5 + 0x358);
  }
  FUN__text__005f6b94(lVar3,lVar3 + 0xa8,*plVar1 + -0xa8,0);
  *(long *)(lVar5 + 0x348) = lVar3;
  return;
}


