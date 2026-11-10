/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a2070; name: FUN_.text__006a2070
 */


void FUN__text__006a2070(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float local_24;
  
  lVar2 = param_2 + 0xa0;
  lVar1 = FUN__text__006cac30(lVar2);
  if (lVar1 != 0) {
    lVar1 = FUN__text__006cac30(lVar2,param_3);
    uVar5 = *(undefined4 *)(lVar1 + 0x40);
    local_24 = param_1;
    lVar1 = FUN__text__006caca0(lVar2,param_3);
    FUN__text__006c1ba0(*(undefined4 *)(lVar1 + 0x30),*(undefined4 *)(lVar1 + 0x34),&local_24);
    fVar6 = *(float *)(lVar1 + 0x40);
    if (local_24 != fVar6) {
      *(float *)(lVar1 + 0x40) = local_24;
      FUN__text__006cacf8(lVar2,lVar1 + 0x10,lVar1);
      for (lVar4 = *(long *)(lVar1 + 0x58); lVar4 != lVar1 + 0x50; lVar4 = *(long *)(lVar4 + 8)) {
        FUN__text__006cac88(fVar6,local_24,lVar2,lVar4);
      }
      lVar2 = FUN__text__006cac30(lVar2,param_3);
      plVar3 = *(long **)(param_2 + 0xd8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))
                  (uVar5,*(undefined4 *)(lVar2 + 0x40),plVar3,*(undefined8 *)(param_2 + 8),param_3);
      }
    }
  }
  return;
}


